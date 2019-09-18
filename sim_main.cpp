#define CHIPS_IMPL

#include "verilated.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Vmsm5205.h"

static float values[4000000] = { 0 };
static int values_offset = 0;


/*
#include <AL/al.h>
#include <AL/alc.h>

ALCdevice  * openal_output_device;
ALCcontext * openal_output_context;

ALuint internal_buffer;
ALuint streaming_source[1];

#define NUM_BUFFERS 6
ALuint source, buffers[NUM_BUFFERS];
*/

FILE *romfile;
FILE *wavp;


    int seconds = 20;
    unsigned sample_rate = 8000;
    size_t buf_size = seconds * sample_rate;

    // allocate PCM audio buffer        
    short *samples = (short*) malloc(sizeof (short) *buf_size);

	// Stuff for sample output.
	int samp_index = 0;
	bool prev_snd_samp = 0;


/*
int al_check_error(const char * given_label) {

    ALenum al_error;
    al_error = alGetError();

    if(AL_NO_ERROR != al_error) {

        printf("ERROR - %s  (%s)\n", alGetString(al_error), given_label);
        return al_error;
    }
    return 0;
}

void MM_init_al() {

    const char * defname = alcGetString(NULL, ALC_DEFAULT_DEVICE_SPECIFIER);

    openal_output_device  = alcOpenDevice(defname);
    openal_output_context = alcCreateContext(openal_output_device, NULL);
    alcMakeContextCurrent(openal_output_context);

    // setup buffer and source

    alGenBuffers(1, & internal_buffer);
    al_check_error("failed call to alGenBuffers");
}

void MM_exit_al() {

    ALenum errorCode = 0;

    // Stop the sources
    alSourceStopv(1, & streaming_source[0]);        //      streaming_source
    int ii;
    for (ii = 0; ii < 1; ++ii) {
        alSourcei(streaming_source[ii], AL_BUFFER, 0);
    }
    // Clean-up
    alDeleteSources(1, &streaming_source[0]);
    alDeleteBuffers(16, &streaming_source[0]);
    errorCode = alGetError();
    alcMakeContextCurrent(NULL);
    errorCode = alGetError();
    alcDestroyContext(openal_output_context);
    alcCloseDevice(openal_output_device);
}

void MM_render_one_buffer() {

    // upload buffer to OpenAL
    alBufferData( internal_buffer, AL_FORMAT_MONO16, samples, buf_size, sample_rate);
    al_check_error("populating alBufferData");

    free(samples);

    // Set-up sound source and play buffer
    alGenSources(1, & streaming_source[0]);
    alSourcei(streaming_source[0], AL_BUFFER, internal_buffer);
    alSourcePlay(streaming_source[0]);

    // ---------------------

    ALenum current_playing_state;
    alGetSourcei(streaming_source[0], AL_SOURCE_STATE, & current_playing_state);
    al_check_error("alGetSourcei AL_SOURCE_STATE");

    while (AL_PLAYING == current_playing_state) {

        printf("still playing ... so sleep\n");

        sleep(1);   // should use a thread sleep NOT sleep() for a more responsive finish

        alGetSourcei(streaming_source[0], AL_SOURCE_STATE, & current_playing_state);
        al_check_error("alGetSourcei AL_SOURCE_STATE");
    }

    printf("end of playing\n");

    // Dealloc OpenAL
    MM_exit_al();

}   //  MM_render_one_buffer
*/

// Instantiation of module.
Vmsm5205* top = new Vmsm5205;


vluint64_t main_time = 0;	// Current simulation time.

unsigned char buffer[16];

unsigned int rom_size = 1024*8192;	// 8MB. (8-bit wide).
uint8_t *rom_ptr = (uint8_t *) malloc(rom_size);

unsigned int ram_size0 = 1024*1024*8;	// 32MB. (32-bit wide).
uint32_t *bank0_ptr = (uint32_t *) malloc(ram_size0);

unsigned int ram_size1 = 1024*1024*8;	// 32MB. (32-bit wide).
uint32_t *bank1_ptr = (uint32_t *) malloc(ram_size1);

unsigned int vram_size = 1024*256;	// 512K. (16-bit wide).
uint16_t *vram_ptr = (uint16_t *) malloc(vram_size);


double sc_time_stamp () {	// Called by $time in Verilog.
	return main_time;
}

int s_diff_lookup[49*16];

//  00000000: 00;

void adpcm_compute_tables()	// Seems to be the same exact algo for both MSM5205 and MSM6295
{
	// nibble to bit map
	static const int8_t nbl2bit[16][4] =
	{
		{ 1, 0, 0, 0}, { 1, 0, 0, 1}, { 1, 0, 1, 0}, { 1, 0, 1, 1},
		{ 1, 1, 0, 0}, { 1, 1, 0, 1}, { 1, 1, 1, 0}, { 1, 1, 1, 1},
		{-1, 0, 0, 0}, {-1, 0, 0, 1}, {-1, 0, 1, 0}, {-1, 0, 1, 1},
		{-1, 1, 0, 0}, {-1, 1, 0, 1}, {-1, 1, 1, 0}, {-1, 1, 1, 1}
	};

	// loop over all possible steps
	for (int step = 0; step <= 48; step++)
	{
		// compute the step value
		int stepval = floor(16.0 * pow(11.0 / 10.0, (double)step));

		// loop over all nibbles and compute the difference
		for (int nib = 0; nib < 16; nib++)
		{
			s_diff_lookup[step*16 + nib] = nbl2bit[nib][0] *
				(stepval   * nbl2bit[nib][1] +
					stepval/2 * nbl2bit[nib][2] +
					stepval/4 * nbl2bit[nib][3] +
					stepval/8);
		}
	}

	for (int step = 0; step <= 783; step++)
	{
		printf("%08x: %08x;\n", step,  s_diff_lookup[step]);
	
	}
}


const int8_t s_index_shift[8] = { -1, -1, -1, -1, 2, 4, 6, 8 };
int16_t m_signal;
int16_t m_step;

int16_t adpcm_calc(uint8_t nibble)
{
	// update the signal
	m_signal += s_diff_lookup[m_step * 16 + (nibble & 15)];

	// clamp to the maximum
	if (m_signal > 2047)
		m_signal = 2047;
	else if (m_signal < -2048)
		m_signal = -2048;

	// adjust the step size and clamp
	m_step += s_index_shift[nibble & 7];
	if (m_step > 48)
		m_step = 48;
	else if (m_step < 0)
		m_step = 0;

//	printf("nibble: %d  m_signal: %d  m_step: %d \n", nibble, m_signal, m_step);
		
	// return the signal
	return m_signal;
}


int verilate() {
	if (!Verilated::gotFinish()) {
	//if (main_time < 10000000) {		// Only run for a short time.
		if (main_time < 8) {
			top->RESET_N = 0;		// Assert reset
			top->CS_N = 1;
			top->RD_N = 1;
			top->WR_N = 1;
			top->SS = 1;			// Sampling rate high / low.
		}
		if (main_time == 10) {
			top->RESET_N = 1;   	// Deassert reset
		}
		if ((main_time & 1) == 1) {
			top->CLK = 1;       	// Toggle clock.
									// (most of my logic gets evaluated on the rising edge of the clock, but watch out for that). ElectronAsh.
		}
		if ((main_time & 1) == 0) {
			top->CLK = 0;			// On the falling edge of the clock, we update our inputs / grab output values etc.

			if (top->ROM_ADDR < rom_size) top->ROM_DATA = rom_ptr[top->ROM_ADDR];

			if (main_time == 20) {
				top->CS_N = 0;
				top->CPU_DI = 0x80 | 01;	// MSB High for Command byte. Bits [6:0] = PHRASE (sample) select.
				top->WR_N = 0;
			}
			if (main_time == 22) {
				top->WR_N = 1;
			}

			if (main_time == 30) {
				top->CPU_DI = 0x10;		// The upper nibble selects which voice to GATE ON. Lower nibble selects the attenuation level.
				top->WR_N = 0;
			}
			if (main_time == 32) {
				top->WR_N = 1;
			}
			/*
			if (main_time == 1020) {
				top->CS_N = 0;
				top->CPU_DI = 0x80 | 45;	// MSB High for Command byte. Bits [6:0] = PHRASE (sample) select.
				top->WR_N = 0;
			}
			if (main_time == 1022) {
				top->WR_N = 1;
			}

			if (main_time == 1030) {
				top->CPU_DI = 0x20;		// The upper nibble selects which voice to GATE ON. Lower nibble selects the attenuation level.
				top->WR_N = 0;
			}
			if (main_time == 1032) {
				top->WR_N = 1;
			}

			if (main_time == 2020) {
				top->CS_N = 0;
				top->CPU_DI = 0x80 | 48;	// MSB High for Command byte. Bits [6:0] = PHRASE (sample) select.
				top->WR_N = 0;
			}
			if (main_time == 2022) {
				top->WR_N = 1;
			}

			if (main_time == 2030) {
				top->CPU_DI = 0x40;		// The upper nibble selects which voice to GATE ON. Lower nibble selects the attenuation level.
				top->WR_N = 0;
			}
			if (main_time == 2032) {
				top->WR_N = 1;
			}

			if (main_time == 3020) {
				top->CS_N = 0;
				top->CPU_DI = 0x80 | 49;	// MSB High for Command byte. Bits [6:0] = PHRASE (sample) select.
				top->WR_N = 0;
			}
			if (main_time == 3022) {
				top->WR_N = 1;
			}

			if (main_time == 3030) {
				top->CPU_DI = 0x80;		// The upper nibble selects which voice to GATE ON. Lower nibble selects the attenuation level.
				top->WR_N = 0;
			}
			if (main_time == 3032) {
				top->WR_N = 1;
			}
			*/

			//printf("ADPCM_ADDR: %08x\n", top->msm6295_DOT_ADPCM_ADDR);

			if (main_time > 20) {
				if (top->SAMP_PULSE) {
					short aud_mono = top->SOUND_OUT >> 4;
					//short aud_mono = top->V1_SAMP_OUT>>4;

					//short aud_mono = adpcm_calc( top->V1_NIB );
					//short aud_mono = adpcm_calc( top->V1_SAMP_OUT )<<4;

					//printf("aud_mono: %04x\n", aud_mono);

					fputc(aud_mono >> 8, wavp);
					fputc(aud_mono & 0xFF, wavp);
										
					samples[samp_index] = aud_mono;
					samp_index++;
					
					//printf("signal: %d\n", top->V1_SIGNAL);

					values[values_offset] = aud_mono / 32768.f;
					//printf("float v: %f\n", v);

					if (values_offset < 90) values_offset++;
					else values_offset = 0;

					if (main_time > 10000000) {
						//fwrite(samples, 2, samp_index, wavp);
						printf("Finished Verilator sim!\n");
						printf("ROM_ADDR ended at 0x%08X\n", top->ROM_ADDR);
						//MM_render_one_buffer();
						top->final();
						delete top;
						exit(0);
					}
				}

				//printf("samp_index: %d\n", samp_index);

				//printf("RST: %d  STATE: %d  REG: %02x  VAL: %02x  YM_ADDR: %d  YM_DI: %02x  YM_DO: %02x  YM_WR_N: %d  AUD_L %03x  AUD_R %03x\n", top->rst, state, my_reg, my_val, top->addr, top->din, top->dout, top->wr_n, top->snd_left, top->snd_right);

				/*
				// Write VGA output to a file. RAW RGB!
				rgb[0] = top->VGA_R << 4;	// The DE1 only has 4 bits per colour, so we shift left.
				rgb[1] = top->VGA_G << 4;
				rgb[2] = top->VGA_B << 4;
				fwrite(rgb, 1, 3, vgap);	// Write 24-bit values to the file.

				if (prev_vsync && !top->VGA_VS) {
				fseek(romfile, 0L, SEEK_SET);
				prev_vsync = top->VGA_VS;
				}
				*/

				/*
				if (top->SRAM_WE_N==0) {
				vram_ptr[top->SRAM_ADDR] = top->SRAM_DQ;
				printf("SRAM_WE_N %d\n", top->SRAM_WE_N);
				}
				else top->SRAM_DQ = vram_ptr[top->SRAM_ADDR];
				*/
			}
		}

		//if (main_time > 20 && main_time < 200) printf("main_time: %04d  V_SLOT: %d  ROM_ADDR: %04x  V1_STATE: %01x  V1_SA: %06x  V1_EA: %06x  LEN: %08x  V1_GATE: %d  WR_N: %d  CPU_DATA: %02x  ROM_DATA: %02x  V1_NIB: %01x  SOUND: %04x\n", main_time, top->VOICE_SLOT, top->ROM_ADDR, top->V1_STATE, top->V1_SA, top->V1_EA, top->V1_EA-top->V1_SA, top->V1_GATE, top->WR_N, top->CPU_DATA_DBG, top->ROM_DATA, top->V1_NIB, top->SOUND_OUT);

		top->eval();            // Evaluate model!
		main_time++;            // Time passes...
		return 1;
	}
	// Stop Verilating...
	top->final();
	delete top;
	exit(0);
	return 0;
}


int main(int argc, char** argv, char** env) {

	Verilated::commandArgs(argc, argv);

	top = new Vmsm5205;

	//MM_init_al();

	//adpcm_compute_tables();
	
	m_signal = -2;
	m_step = 0;


	//romfile = fopen("sf2_adpcm_joined","r");
	romfile = fopen("rondo_adpcm_test","r");
	if (romfile!=NULL) {
		printf("\nADPCM ROM file loaded OK.\n");
	}
	else {
		printf("\nADPCM ROM file not found!\n\n");
		return 0;
	};

	unsigned int file_size;
	fseek(romfile, 0L, SEEK_END);
	file_size = ftell(romfile);
	fseek(romfile, 0L, SEEK_SET);
	fread(rom_ptr, 1, file_size, romfile);	// Read the whole ROM file into RAM.
	
	
	wavp = fopen("wav.raw","w");
	if (wavp!=NULL) {
		printf("\nOpened wav.raw for writing OK.\n");
	}
	else {	
		printf("\nCould not open wav.raw for writing!\n\n");
		return 0;
	};
	
/*
	FILE *vgap;
	vgap = fopen("vga_out.raw","w");
	if (vgap!=NULL) {
		printf("\nOpened vga_out.raw for writing OK.\n");
	}
	else {	
		printf("\nCould not open vga_out.raw for writing!\n\n");
		return 0;
	};
*/		
	while(1) {
		verilate();
	}

	return 0;
}
