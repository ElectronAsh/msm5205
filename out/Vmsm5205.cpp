// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmsm5205.h for the primary calling header

#include "Vmsm5205.h"
#include "Vmsm5205__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vmsm5205) {
    Vmsm5205__Syms* __restrict vlSymsp = __VlSymsp = new Vmsm5205__Syms(this, name());
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmsm5205::__Vconfigure(Vmsm5205__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vmsm5205::~Vmsm5205() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vmsm5205::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmsm5205::eval\n"); );
    Vmsm5205__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vmsm5205::_eval_initial_loop(Vmsm5205__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void Vmsm5205::_settle__TOP__1(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_settle__TOP__1\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG(__Vdeeptemp1,31,0);
    VL_SIG(__Vdeeptemp2,31,0);
    VL_SIG(__Vdeeptemp3,31,0);
    VL_SIG(__Vdeeptemp4,31,0);
    VL_SIG(__Vdeeptemp5,31,0);
    VL_SIG(__Vdeeptemp6,31,0);
    VL_SIG(__Vdeeptemp7,31,0);
    VL_SIG(__Vdeeptemp8,31,0);
    VL_SIG(__Vdeeptemp9,31,0);
    VL_SIG(__Vdeeptemp10,31,0);
    VL_SIG(__Vdeeptemp11,31,0);
    VL_SIG(__Vdeeptemp12,31,0);
    VL_SIG(__Vdeeptemp13,31,0);
    VL_SIG(__Vdeeptemp14,31,0);
    VL_SIG(__Vdeeptemp15,31,0);
    VL_SIG(__Vdeeptemp16,31,0);
    VL_SIG(__Vdeeptemp17,31,0);
    VL_SIG(__Vdeeptemp18,31,0);
    VL_SIG(__Vdeeptemp19,31,0);
    VL_SIG(__Vdeeptemp20,31,0);
    VL_SIG(__Vdeeptemp21,31,0);
    VL_SIG(__Vdeeptemp22,31,0);
    VL_SIG(__Vdeeptemp23,31,0);
    VL_SIG(__Vdeeptemp24,31,0);
    VL_SIG(__Vdeeptemp25,31,0);
    VL_SIG(__Vdeeptemp26,31,0);
    VL_SIG(__Vdeeptemp27,31,0);
    VL_SIG(__Vdeeptemp28,31,0);
    VL_SIG(__Vdeeptemp29,31,0);
    VL_SIG(__Vdeeptemp30,31,0);
    VL_SIG(__Vdeeptemp31,31,0);
    VL_SIG(__Vdeeptemp32,31,0);
    VL_SIG(__Vdeeptemp33,31,0);
    VL_SIG(__Vdeeptemp34,31,0);
    VL_SIG(__Vdeeptemp35,31,0);
    VL_SIG(__Vdeeptemp36,31,0);
    VL_SIG(__Vdeeptemp37,31,0);
    // Body
    vlTOPp->msm6295__DOT__CPU_DO = vlTOPp->CPU_DO;
    vlTOPp->msm6295__DOT__RESET_N = vlTOPp->RESET_N;
    vlTOPp->msm6295__DOT__CLK = vlTOPp->CLK;
    vlTOPp->msm6295__DOT__CS_N = vlTOPp->CS_N;
    vlTOPp->msm6295__DOT__RD_N = vlTOPp->RD_N;
    vlTOPp->msm6295__DOT__WR_N = vlTOPp->WR_N;
    vlTOPp->msm6295__DOT__SS = vlTOPp->SS;
    vlTOPp->msm6295__DOT__ROM_DATA = vlTOPp->ROM_DATA;
    vlTOPp->msm6295__DOT__ROM_ADDR = vlTOPp->ROM_ADDR;
    vlTOPp->msm6295__DOT__V1_STATE = vlTOPp->V1_STATE;
    vlTOPp->msm6295__DOT__MAIN_STATE = vlTOPp->MAIN_STATE;
    vlTOPp->msm6295__DOT__V1_SA = vlTOPp->V1_SA;
    vlTOPp->msm6295__DOT__V1_EA = vlTOPp->V1_EA;
    vlTOPp->msm6295__DOT__V1_GATE = vlTOPp->V1_GATE;
    vlTOPp->msm6295__DOT__WRITE_STATE = vlTOPp->WRITE_STATE;
    vlTOPp->msm6295__DOT__V1_SAMP_OUT = vlTOPp->V1_SAMP_OUT;
    vlTOPp->msm6295__DOT__V1_SIGNAL = vlTOPp->V1_SIGNAL;
    vlTOPp->msm6295__DOT__V1_VOL_MUL = (0x3fU & ((0U 
						  == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						  ? 0x20U
						  : 
						 ((1U 
						   == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						   ? 0x16U
						   : 
						  ((2U 
						    == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						    ? 0x10U
						    : 
						   ((3U 
						     == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						     ? 0xbU
						     : 
						    ((4U 
						      == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						      ? 8U
						      : 
						     ((5U 
						       == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						       ? 6U
						       : 
						      ((6U 
							== (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						        ? 4U
						        : 
						       ((7U 
							 == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
							 ? 3U
							 : 
							((8U 
							  == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
							  ? 2U
							  : 0U))))))))));
    vlTOPp->SOUND_OUT = (0x1fffffU & VL_EXTENDS_II(21,17, vlTOPp->V1_SAMP_OUT));
    vlTOPp->WR_N_RISING = ((~ (IData)(vlTOPp->msm6295__DOT__WR_N_1)) 
			   & (IData)(vlTOPp->WR_N));
    vlTOPp->V1_NIB = (0xfU & ((1U & vlTOPp->msm6295__DOT__V1_INDEX)
			       ? (IData)(vlTOPp->ROM_DATA)
			       : ((IData)(vlTOPp->ROM_DATA) 
				  >> 4U)));
    vlTOPp->msm6295__DOT__SAMP_PULSE = vlTOPp->SAMP_PULSE;
    vlTOPp->msm6295__DOT__SOUND_OUT = vlTOPp->SOUND_OUT;
    vlTOPp->msm6295__DOT__WR_N_RISING = vlTOPp->WR_N_RISING;
    vlTOPp->msm6295__DOT__V1_NIB = vlTOPp->V1_NIB;
    vlTOPp->msm6295__DOT__ADPCM_ADDR = (0xfffU & (((IData)(vlTOPp->msm6295__DOT__V1_STEP) 
						   << 4U) 
						  + (IData)(vlTOPp->V1_NIB)));
    vlTOPp->msm6295__DOT__ADPCM_LUT_ROM__DOT__ADDR 
	= vlTOPp->msm6295__DOT__ADPCM_ADDR;
    __Vdeeptemp1 = ((0x2e8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0xff60U : ((0x2e9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				   ? 0xfe20U : ((0x2eaU 
						 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						 ? 0xfcdfU
						 : 
						((0x2ebU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfb9fU
						  : 
						 ((0x2ecU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfa5eU
						   : 
						  ((0x2edU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xf91eU
						    : 
						   ((0x2eeU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xf7ddU
						     : 
						    ((0x2efU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xf69dU
						      : 
						     ((0x2f0U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xb0U
						       : 
						      ((0x2f1U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x210U
						        : 
						       ((0x2f2U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x371U
							 : 
							((0x2f3U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x4d1U
							  : 
							 ((0x2f4U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x633U
							   : 
							  ((0x2f5U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x793U
							    : 
							   ((0x2f6U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x8f4U
							     : 
							    ((0x2f7U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xa54U
							      : 
							     ((0x2f8U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xff50U
							       : 
							      ((0x2f9U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xfdf0U
							        : 
							       ((0x2faU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfc8fU
								 : 
								((0x2fbU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfb2fU
								  : 
								 ((0x2fcU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xf9cdU
								   : 
								  ((0x2fdU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xf86dU
								    : 
								   ((0x2feU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xf70cU
								     : 
								    ((0x2ffU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xf5acU
								      : 
								     ((0x300U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xc2U
								       : 
								      ((0x301U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x246U
								        : 
								       ((0x302U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x3caU
									 : 
									((0x303U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x54eU
									  : 
									 ((0x304U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x6d2U
									   : 
									  ((0x305U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x856U
									    : 
									   ((0x306U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x9daU
									     : 
									    ((0x307U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xb5eU
									      : 
									     ((0x308U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xff3eU
									       : 
									      ((0x309U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xfdbaU
									        : 
									       ((0x30aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfc36U
										 : 
										((0x30bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfab2U
										 : 
										((0x30cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf92eU
										 : 
										((0x30dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf7aaU
										 : 
										((0x30eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf626U
										 : 0xf4a2U)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp20 = ((0x2c1U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x18dU : ((0x2c2U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				   ? 0x296U : ((0x2c3U 
						== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					        ? 0x39fU
					        : (
						   (0x2c4U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x4a8U
						    : 
						   ((0x2c5U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x5b1U
						     : 
						    ((0x2c6U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0x6baU
						      : 
						     ((0x2c7U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x7c3U
						       : 
						      ((0x2c8U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff7cU
						        : 
						       ((0x2c9U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfe73U
							 : 
							((0x2caU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfd6aU
							  : 
							 ((0x2cbU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfc61U
							   : 
							  ((0x2ccU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfb58U
							    : 
							   ((0x2cdU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfa4fU
							     : 
							    ((0x2ceU 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xf946U
							      : 
							     ((0x2cfU 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xf83dU
							       : 
							      ((0x2d0U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x91U
							        : 
							       ((0x2d1U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x1b4U
								 : 
								((0x2d2U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x2d8U
								  : 
								 ((0x2d3U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x3fbU
								   : 
								  ((0x2d4U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x51fU
								    : 
								   ((0x2d5U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x642U
								     : 
								    ((0x2d6U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0x766U
								      : 
								     ((0x2d7U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x889U
								       : 
								      ((0x2d8U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xff6fU
								        : 
								       ((0x2d9U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xfe4cU
									 : 
									((0x2daU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfd28U
									  : 
									 ((0x2dbU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfc05U
									   : 
									  ((0x2dcU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfae1U
									    : 
									   ((0x2ddU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xf9beU
									     : 
									    ((0x2deU 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xf89aU
									      : 
									     ((0x2dfU 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xf777U
									       : 
									      ((0x2e0U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xa0U
									        : 
									       ((0x2e1U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1e0U
										 : 
										((0x2e2U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x321U
										 : 
										((0x2e3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x461U
										 : 
										((0x2e4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x5a2U
										 : 
										((0x2e5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x6e2U
										 : 
										((0x2e6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x823U
										 : 
										((0x2e7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x963U
										 : __Vdeeptemp1)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp2 = ((0x2c0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0x84U : __Vdeeptemp20);
    __Vdeeptemp21 = ((0x299U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfed6U : ((0x29aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xfe0fU : ((0x29bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfd48U
						  : 
						 ((0x29cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfc81U
						   : 
						  ((0x29dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfbbaU
						    : 
						   ((0x29eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfaf3U
						     : 
						    ((0x29fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfa2cU
						      : 
						     ((0x2a0U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x6dU
						       : 
						      ((0x2a1U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x148U
						        : 
						       ((0x2a2U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x223U
							 : 
							((0x2a3U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x2feU
							  : 
							 ((0x2a4U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x3d9U
							   : 
							  ((0x2a5U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x4b4U
							    : 
							   ((0x2a6U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x58fU
							     : 
							    ((0x2a7U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x66aU
							      : 
							     ((0x2a8U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xff93U
							       : 
							      ((0x2a9U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xfeb8U
							        : 
							       ((0x2aaU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfdddU
								 : 
								((0x2abU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfd02U
								  : 
								 ((0x2acU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xfc27U
								   : 
								  ((0x2adU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfb4cU
								    : 
								   ((0x2aeU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfa71U
								     : 
								    ((0x2afU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xf996U
								      : 
								     ((0x2b0U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x78U
								       : 
								      ((0x2b1U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x168U
								        : 
								       ((0x2b2U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x259U
									 : 
									((0x2b3U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x349U
									  : 
									 ((0x2b4U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x43bU
									   : 
									  ((0x2b5U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x52bU
									    : 
									   ((0x2b6U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x61cU
									     : 
									    ((0x2b7U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x70cU
									      : 
									     ((0x2b8U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xff88U
									       : 
									      ((0x2b9U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xfe98U
									        : 
									       ((0x2baU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfda7U
										 : 
										((0x2bbU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfcb7U
										 : 
										((0x2bcU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfbc5U
										 : 
										((0x2bdU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfad5U
										 : 
										((0x2beU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf9e4U
										 : 
										((0x2bfU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf8f4U
										 : __Vdeeptemp2)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp3 = ((0x298U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0xff9dU : __Vdeeptemp21);
    __Vdeeptemp22 = ((0x271U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xf6U : ((0x272U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x19bU : ((0x273U 
					       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					       ? 0x23fU
					       : ((0x274U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x2e4U
						   : 
						  ((0x275U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x388U
						    : 
						   ((0x276U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x42dU
						     : 
						    ((0x277U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0x4d1U
						      : 
						     ((0x278U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffaeU
						       : 
						      ((0x279U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff0aU
						        : 
						       ((0x27aU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfe65U
							 : 
							((0x27bU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfdc1U
							  : 
							 ((0x27cU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfd1cU
							   : 
							  ((0x27dU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfc78U
							    : 
							   ((0x27eU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfbd3U
							     : 
							    ((0x27fU 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xfb2fU
							      : 
							     ((0x280U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x5aU
							       : 
							      ((0x281U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x10fU
							        : 
							       ((0x282U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x1c4U
								 : 
								((0x283U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x279U
								  : 
								 ((0x284U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x32eU
								   : 
								  ((0x285U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x3e3U
								    : 
								   ((0x286U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x498U
								     : 
								    ((0x287U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0x54dU
								      : 
								     ((0x288U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffa6U
								       : 
								      ((0x289U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xfef1U
								        : 
								       ((0x28aU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xfe3cU
									 : 
									((0x28bU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfd87U
									  : 
									 ((0x28cU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfcd2U
									   : 
									  ((0x28dU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfc1dU
									    : 
									   ((0x28eU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfb68U
									     : 
									    ((0x28fU 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xfab3U
									      : 
									     ((0x290U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x63U
									       : 
									      ((0x291U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x12aU
									        : 
									       ((0x292U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1f1U
										 : 
										((0x293U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x2b8U
										 : 
										((0x294U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x37fU
										 : 
										((0x295U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x446U
										 : 
										((0x296U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x50dU
										 : 
										((0x297U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x5d4U
										 : __Vdeeptemp3)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp4 = ((0x270U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0x52U : __Vdeeptemp22);
    __Vdeeptemp23 = ((0x249U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xff48U : ((0x24aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xfeccU : ((0x24bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfe51U
						  : 
						 ((0x24cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfdd5U
						   : 
						  ((0x24dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfd5aU
						    : 
						   ((0x24eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfcdeU
						     : 
						    ((0x24fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfc63U
						      : 
						     ((0x250U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x44U
						       : 
						      ((0x251U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xccU
						        : 
						       ((0x252U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x154U
							 : 
							((0x253U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x1dcU
							  : 
							 ((0x254U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x264U
							   : 
							  ((0x255U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x2ecU
							    : 
							   ((0x256U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x374U
							     : 
							    ((0x257U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x3fcU
							      : 
							     ((0x258U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffbcU
							       : 
							      ((0x259U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xff34U
							        : 
							       ((0x25aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfeacU
								 : 
								((0x25bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfe24U
								  : 
								 ((0x25cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xfd9cU
								   : 
								  ((0x25dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfd14U
								    : 
								   ((0x25eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfc8cU
								     : 
								    ((0x25fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfc04U
								      : 
								     ((0x260U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x4aU
								       : 
								      ((0x261U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xdfU
								        : 
								       ((0x262U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x175U
									 : 
									((0x263U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x20aU
									  : 
									 ((0x264U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x2a0U
									   : 
									  ((0x265U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x335U
									    : 
									   ((0x266U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x3cbU
									     : 
									    ((0x267U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x460U
									      : 
									     ((0x268U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffb6U
									       : 
									      ((0x269U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xff21U
									        : 
									       ((0x26aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe8bU
										 : 
										((0x26bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfdf6U
										 : 
										((0x26cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfd60U
										 : 
										((0x26dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfccbU
										 : 
										((0x26eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfc35U
										 : 
										((0x26fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfba0U
										 : __Vdeeptemp4)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp5 = ((0x248U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0xffc3U : __Vdeeptemp23);
    __Vdeeptemp24 = ((0x221U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x99U : ((0x222U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0xffU : ((0x223U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x165U
					      : ((0x224U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x1cbU
						  : 
						 ((0x225U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x231U
						   : 
						  ((0x226U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x297U
						    : 
						   ((0x227U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x2fdU
						     : 
						    ((0x228U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffcdU
						      : 
						     ((0x229U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xff67U
						       : 
						      ((0x22aU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff01U
						        : 
						       ((0x22bU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfe9bU
							 : 
							((0x22cU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfe35U
							  : 
							 ((0x22dU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfdcfU
							   : 
							  ((0x22eU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfd69U
							    : 
							   ((0x22fU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfd03U
							     : 
							    ((0x230U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x38U
							      : 
							     ((0x231U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xa8U
							       : 
							      ((0x232U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x118U
							        : 
							       ((0x233U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x188U
								 : 
								((0x234U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x1f9U
								  : 
								 ((0x235U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x269U
								   : 
								  ((0x236U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x2d9U
								    : 
								   ((0x237U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x349U
								     : 
								    ((0x238U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffc8U
								      : 
								     ((0x239U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xff58U
								       : 
								      ((0x23aU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xfee8U
								        : 
								       ((0x23bU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xfe78U
									 : 
									((0x23cU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfe07U
									  : 
									 ((0x23dU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfd97U
									   : 
									  ((0x23eU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfd27U
									    : 
									   ((0x23fU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfcb7U
									     : 
									    ((0x240U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x3dU
									      : 
									     ((0x241U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xb8U
									       : 
									      ((0x242U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x134U
									        : 
									       ((0x243U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1afU
										 : 
										((0x244U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x22bU
										 : 
										((0x245U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x2a6U
										 : 
										((0x246U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x322U
										 : 
										((0x247U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x39dU
										 : __Vdeeptemp5)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp6 = ((0x220U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0x33U : __Vdeeptemp24);
    __Vdeeptemp25 = ((0x1f9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xff8eU : ((0x1faU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xff41U : ((0x1fbU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfef5U
						  : 
						 ((0x1fcU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfea7U
						   : 
						  ((0x1fdU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfe5bU
						    : 
						   ((0x1feU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfe0eU
						     : 
						    ((0x1ffU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfdc2U
						      : 
						     ((0x200U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x2aU
						       : 
						      ((0x201U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x7eU
						        : 
						       ((0x202U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xd2U
							 : 
							((0x203U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x126U
							  : 
							 ((0x204U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x17bU
							   : 
							  ((0x205U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x1cfU
							    : 
							   ((0x206U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x223U
							     : 
							    ((0x207U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x277U
							      : 
							     ((0x208U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffd6U
							       : 
							      ((0x209U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xff82U
							        : 
							       ((0x20aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xff2eU
								 : 
								((0x20bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfedaU
								  : 
								 ((0x20cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xfe85U
								   : 
								  ((0x20dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfe31U
								    : 
								   ((0x20eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfdddU
								     : 
								    ((0x20fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfd89U
								      : 
								     ((0x210U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x2eU
								       : 
								      ((0x211U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x8aU
								        : 
								       ((0x212U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xe7U
									 : 
									((0x213U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x143U
									  : 
									 ((0x214U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x1a1U
									   : 
									  ((0x215U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x1fdU
									    : 
									   ((0x216U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x25aU
									     : 
									    ((0x217U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x2b6U
									      : 
									     ((0x218U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffd2U
									       : 
									      ((0x219U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xff76U
									        : 
									       ((0x21aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff19U
										 : 
										((0x21bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfebdU
										 : 
										((0x21cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe5fU
										 : 
										((0x21dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe03U
										 : 
										((0x21eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfda6U
										 : 
										((0x21fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfd4aU
										 : __Vdeeptemp6)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp7 = ((0x1f8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0xffdaU : __Vdeeptemp25);
    __Vdeeptemp26 = ((0x1d1U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x5eU : ((0x1d2U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x9dU : ((0x1d3U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0xdcU
					      : ((0x1d4U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x11cU
						  : 
						 ((0x1d5U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x15bU
						   : 
						  ((0x1d6U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x19aU
						    : 
						   ((0x1d7U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x1d9U
						     : 
						    ((0x1d8U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffe1U
						      : 
						     ((0x1d9U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffa2U
						       : 
						      ((0x1daU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff63U
						        : 
						       ((0x1dbU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xff24U
							 : 
							((0x1dcU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfee4U
							  : 
							 ((0x1ddU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfea5U
							   : 
							  ((0x1deU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfe66U
							    : 
							   ((0x1dfU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfe27U
							     : 
							    ((0x1e0U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x22U
							      : 
							     ((0x1e1U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x67U
							       : 
							      ((0x1e2U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xadU
							        : 
							       ((0x1e3U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xf2U
								 : 
								((0x1e4U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x139U
								  : 
								 ((0x1e5U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x17eU
								   : 
								  ((0x1e6U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x1c4U
								    : 
								   ((0x1e7U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x209U
								     : 
								    ((0x1e8U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffdeU
								      : 
								     ((0x1e9U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xff99U
								       : 
								      ((0x1eaU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xff53U
								        : 
								       ((0x1ebU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xff0eU
									 : 
									((0x1ecU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfec7U
									  : 
									 ((0x1edU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfe82U
									   : 
									  ((0x1eeU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfe3cU
									    : 
									   ((0x1efU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfdf7U
									     : 
									    ((0x1f0U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x26U
									      : 
									     ((0x1f1U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x72U
									       : 
									      ((0x1f2U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xbfU
									        : 
									       ((0x1f3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x10bU
										 : 
										((0x1f4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x159U
										 : 
										((0x1f5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1a5U
										 : 
										((0x1f6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1f2U
										 : 
										((0x1f7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x23eU
										 : __Vdeeptemp7)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp8 = ((0x1d0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0x1fU : __Vdeeptemp26);
    __Vdeeptemp27 = ((0x1a9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffbaU : ((0x1aaU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xff8aU : ((0x1abU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xff5bU
						  : 
						 ((0x1acU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xff2bU
						   : 
						  ((0x1adU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfefcU
						    : 
						   ((0x1aeU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfeccU
						     : 
						    ((0x1afU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfe9dU
						      : 
						     ((0x1b0U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x1aU
						       : 
						      ((0x1b1U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x4eU
						        : 
						       ((0x1b2U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x82U
							 : 
							((0x1b3U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xb6U
							  : 
							 ((0x1b4U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xebU
							   : 
							  ((0x1b5U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x11fU
							    : 
							   ((0x1b6U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x153U
							     : 
							    ((0x1b7U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x187U
							      : 
							     ((0x1b8U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffe6U
							       : 
							      ((0x1b9U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffb2U
							        : 
							       ((0x1baU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xff7eU
								 : 
								((0x1bbU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xff4aU
								  : 
								 ((0x1bcU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xff15U
								   : 
								  ((0x1bdU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfee1U
								    : 
								   ((0x1beU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfeadU
								     : 
								    ((0x1bfU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfe79U
								      : 
								     ((0x1c0U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x1cU
								       : 
								      ((0x1c1U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x55U
								        : 
								       ((0x1c2U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x8fU
									 : 
									((0x1c3U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xc8U
									  : 
									 ((0x1c4U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x102U
									   : 
									  ((0x1c5U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x13bU
									    : 
									   ((0x1c6U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x175U
									     : 
									    ((0x1c7U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x1aeU
									      : 
									     ((0x1c8U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffe4U
									       : 
									      ((0x1c9U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffabU
									        : 
									       ((0x1caU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff71U
										 : 
										((0x1cbU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff38U
										 : 
										((0x1ccU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfefeU
										 : 
										((0x1cdU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfec5U
										 : 
										((0x1ceU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe8bU
										 : 
										((0x1cfU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe52U
										 : __Vdeeptemp8)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp9 = ((0x1a8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		     ? 0xffe9U : __Vdeeptemp27);
    __Vdeeptemp28 = ((0x181U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x3aU : ((0x182U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x61U : ((0x183U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x88U
					      : ((0x184U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xb0U
						  : 
						 ((0x185U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xd7U
						   : 
						  ((0x186U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfeU
						    : 
						   ((0x187U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x125U
						     : 
						    ((0x188U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffedU
						      : 
						     ((0x189U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffc6U
						       : 
						      ((0x18aU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff9fU
						        : 
						       ((0x18bU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xff78U
							 : 
							((0x18cU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xff50U
							  : 
							 ((0x18dU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xff29U
							   : 
							  ((0x18eU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xff02U
							    : 
							   ((0x18fU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfedbU
							     : 
							    ((0x190U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x15U
							      : 
							     ((0x191U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x40U
							       : 
							      ((0x192U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x6bU
							        : 
							       ((0x193U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x96U
								 : 
								((0x194U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xc2U
								  : 
								 ((0x195U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xedU
								   : 
								  ((0x196U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x118U
								    : 
								   ((0x197U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x143U
								     : 
								    ((0x198U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffebU
								      : 
								     ((0x199U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffc0U
								       : 
								      ((0x19aU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xff95U
								        : 
								       ((0x19bU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xff6aU
									 : 
									((0x19cU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xff3eU
									  : 
									 ((0x19dU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xff13U
									   : 
									  ((0x19eU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfee8U
									    : 
									   ((0x19fU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfebdU
									     : 
									    ((0x1a0U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x17U
									      : 
									     ((0x1a1U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x46U
									       : 
									      ((0x1a2U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x76U
									        : 
									       ((0x1a3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xa5U
										 : 
										((0x1a4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xd5U
										 : 
										((0x1a5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x104U
										 : 
										((0x1a6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x134U
										 : 
										((0x1a7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x163U
										 : __Vdeeptemp9)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp10 = ((0x180U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x13U : __Vdeeptemp28);
    __Vdeeptemp29 = ((0x159U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffd5U : ((0x15aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffb7U : ((0x15bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xff9aU
						  : 
						 ((0x15cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xff7cU
						   : 
						  ((0x15dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xff5fU
						    : 
						   ((0x15eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xff41U
						     : 
						    ((0x15fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xff24U
						      : 
						     ((0x160U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x10U
						       : 
						      ((0x161U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x30U
						        : 
						       ((0x162U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x51U
							 : 
							((0x163U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x71U
							  : 
							 ((0x164U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x92U
							   : 
							  ((0x165U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xb2U
							    : 
							   ((0x166U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xd3U
							     : 
							    ((0x167U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xf3U
							      : 
							     ((0x168U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfff0U
							       : 
							      ((0x169U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffd0U
							        : 
							       ((0x16aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffafU
								 : 
								((0x16bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xff8fU
								  : 
								 ((0x16cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xff6eU
								   : 
								  ((0x16dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xff4eU
								    : 
								   ((0x16eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xff2dU
								     : 
								    ((0x16fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xff0dU
								      : 
								     ((0x170U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x11U
								       : 
								      ((0x171U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x34U
								        : 
								       ((0x172U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x58U
									 : 
									((0x173U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x7bU
									  : 
									 ((0x174U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xa0U
									   : 
									  ((0x175U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xc3U
									    : 
									   ((0x176U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xe7U
									     : 
									    ((0x177U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x10aU
									      : 
									     ((0x178U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffefU
									       : 
									      ((0x179U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffccU
									        : 
									       ((0x17aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffa8U
										 : 
										((0x17bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff85U
										 : 
										((0x17cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff60U
										 : 
										((0x17dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff3dU
										 : 
										((0x17eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff19U
										 : 
										((0x17fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfef6U
										 : __Vdeeptemp10)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp11 = ((0x158U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff2U : __Vdeeptemp29);
    __Vdeeptemp30 = ((0x131U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x24U : ((0x132U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x3cU : ((0x133U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x54U
					      : ((0x134U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x6dU
						  : 
						 ((0x135U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x85U
						   : 
						  ((0x136U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x9dU
						    : 
						   ((0x137U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xb5U
						     : 
						    ((0x138U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff4U
						      : 
						     ((0x139U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffdcU
						       : 
						      ((0x13aU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffc4U
						        : 
						       ((0x13bU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffacU
							 : 
							((0x13cU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xff93U
							  : 
							 ((0x13dU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xff7bU
							   : 
							  ((0x13eU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xff63U
							    : 
							   ((0x13fU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xff4bU
							     : 
							    ((0x140U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xdU
							      : 
							     ((0x141U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x27U
							       : 
							      ((0x142U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x42U
							        : 
							       ((0x143U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x5cU
								 : 
								((0x144U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x78U
								  : 
								 ((0x145U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x92U
								   : 
								  ((0x146U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xadU
								    : 
								   ((0x147U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xc7U
								     : 
								    ((0x148U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff3U
								      : 
								     ((0x149U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffd9U
								       : 
								      ((0x14aU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffbeU
								        : 
								       ((0x14bU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffa4U
									 : 
									((0x14cU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xff88U
									  : 
									 ((0x14dU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xff6eU
									   : 
									  ((0x14eU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xff53U
									    : 
									   ((0x14fU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xff39U
									     : 
									    ((0x150U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xeU
									      : 
									     ((0x151U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x2bU
									       : 
									      ((0x152U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x49U
									        : 
									       ((0x153U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x66U
										 : 
										((0x154U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x84U
										 : 
										((0x155U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xa1U
										 : 
										((0x156U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xbfU
										 : 
										((0x157U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xdcU
										 : __Vdeeptemp11)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp12 = ((0x130U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xcU : __Vdeeptemp30);
    __Vdeeptemp31 = ((0x109U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffe5U : ((0x10aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffd3U : ((0x10bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xffc1U
						  : 
						 ((0x10cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffaeU
						   : 
						  ((0x10dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xff9cU
						    : 
						   ((0x10eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xff8aU
						     : 
						    ((0x10fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xff78U
						      : 
						     ((0x110U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xaU
						       : 
						      ((0x111U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x1eU
						        : 
						       ((0x112U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x32U
							 : 
							((0x113U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x46U
							  : 
							 ((0x114U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x5aU
							   : 
							  ((0x115U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x6eU
							    : 
							   ((0x116U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x82U
							     : 
							    ((0x117U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x96U
							      : 
							     ((0x118U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfff6U
							       : 
							      ((0x119U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffe2U
							        : 
							       ((0x11aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffceU
								 : 
								((0x11bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xffbaU
								  : 
								 ((0x11cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffa6U
								   : 
								  ((0x11dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xff92U
								    : 
								   ((0x11eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xff7eU
								     : 
								    ((0x11fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xff6aU
								      : 
								     ((0x120U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xbU
								       : 
								      ((0x121U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x21U
								        : 
								       ((0x122U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x37U
									 : 
									((0x123U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x4dU
									  : 
									 ((0x124U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x63U
									   : 
									  ((0x125U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x79U
									    : 
									   ((0x126U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x8fU
									     : 
									    ((0x127U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xa5U
									      : 
									     ((0x128U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfff5U
									       : 
									      ((0x129U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffdfU
									        : 
									       ((0x12aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc9U
										 : 
										((0x12bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffb3U
										 : 
										((0x12cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff9dU
										 : 
										((0x12dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff87U
										 : 
										((0x12eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff71U
										 : 
										((0x12fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff5bU
										 : __Vdeeptemp12)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp13 = ((0x108U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff7U : __Vdeeptemp31);
    __Vdeeptemp32 = ((0xe1U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x16U : ((0xe2U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x25U : ((0xe3U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x34U
					      : ((0xe4U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x43U
						  : 
						 ((0xe5U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x52U
						   : 
						  ((0xe6U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x61U
						    : 
						   ((0xe7U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x70U
						     : 
						    ((0xe8U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff9U
						      : 
						     ((0xe9U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffeaU
						       : 
						      ((0xeaU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffdbU
						        : 
						       ((0xebU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffccU
							 : 
							((0xecU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xffbdU
							  : 
							 ((0xedU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xffaeU
							   : 
							  ((0xeeU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xff9fU
							    : 
							   ((0xefU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xff90U
							     : 
							    ((0xf0U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 8U
							      : 
							     ((0xf1U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x18U
							       : 
							      ((0xf2U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x29U
							        : 
							       ((0xf3U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x39U
								 : 
								((0xf4U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x4aU
								  : 
								 ((0xf5U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x5aU
								   : 
								  ((0xf6U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x6bU
								    : 
								   ((0xf7U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x7bU
								     : 
								    ((0xf8U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff8U
								      : 
								     ((0xf9U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffe8U
								       : 
								      ((0xfaU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffd7U
								        : 
								       ((0xfbU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffc7U
									 : 
									((0xfcU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xffb6U
									  : 
									 ((0xfdU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xffa6U
									   : 
									  ((0xfeU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xff95U
									    : 
									   ((0xffU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xff85U
									     : 
									    ((0x100U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 9U
									      : 
									     ((0x101U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x1bU
									       : 
									      ((0x102U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x2dU
									        : 
									       ((0x103U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x3fU
										 : 
										((0x104U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x52U
										 : 
										((0x105U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x64U
										 : 
										((0x106U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x76U
										 : 
										((0x107U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x88U
										 : __Vdeeptemp13)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp14 = ((0xe0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 7U : __Vdeeptemp32);
    __Vdeeptemp33 = ((0xb9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff0U : ((0xbaU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffe5U : ((0xbbU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xffdaU
						  : 
						 ((0xbcU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffceU
						   : 
						  ((0xbdU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xffc3U
						    : 
						   ((0xbeU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xffb8U
						     : 
						    ((0xbfU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffadU
						      : 
						     ((0xc0U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 6U
						       : 
						      ((0xc1U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x12U
						        : 
						       ((0xc2U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x1fU
							 : 
							((0xc3U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x2bU
							  : 
							 ((0xc4U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x38U
							   : 
							  ((0xc5U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x44U
							    : 
							   ((0xc6U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x51U
							     : 
							    ((0xc7U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x5dU
							      : 
							     ((0xc8U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfffaU
							       : 
							      ((0xc9U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffeeU
							        : 
							       ((0xcaU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffe1U
								 : 
								((0xcbU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xffd5U
								  : 
								 ((0xccU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffc8U
								   : 
								  ((0xcdU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xffbcU
								    : 
								   ((0xceU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xffafU
								     : 
								    ((0xcfU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffa3U
								      : 
								     ((0xd0U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 6U
								       : 
								      ((0xd1U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x13U
								        : 
								       ((0xd2U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x21U
									 : 
									((0xd3U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x2eU
									  : 
									 ((0xd4U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x3dU
									   : 
									  ((0xd5U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x4aU
									    : 
									   ((0xd6U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x58U
									     : 
									    ((0xd7U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x65U
									      : 
									     ((0xd8U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfffaU
									       : 
									      ((0xd9U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffedU
									        : 
									       ((0xdaU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdfU
										 : 
										((0xdbU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffd2U
										 : 
										((0xdcU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc3U
										 : 
										((0xddU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffb6U
										 : 
										((0xdeU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffa8U
										 : 
										((0xdfU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff9bU
										 : __Vdeeptemp14)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp15 = ((0xb8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffbU : __Vdeeptemp33);
    __Vdeeptemp34 = ((0x91U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xdU : ((0x92U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				 ? 0x16U : ((0x93U 
					     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					     ? 0x1fU
					     : ((0x94U 
						 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						 ? 0x29U
						 : 
						((0x95U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x32U
						  : 
						 ((0x96U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x3bU
						   : 
						  ((0x97U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x44U
						    : 
						   ((0x98U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfffcU
						     : 
						    ((0x99U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff3U
						      : 
						     ((0x9aU 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffeaU
						       : 
						      ((0x9bU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffe1U
						        : 
						       ((0x9cU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffd7U
							 : 
							((0x9dU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xffceU
							  : 
							 ((0x9eU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xffc5U
							   : 
							  ((0x9fU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xffbcU
							    : 
							   ((0xa0U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 5U
							     : 
							    ((0xa1U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xfU
							      : 
							     ((0xa2U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x19U
							       : 
							      ((0xa3U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x23U
							        : 
							       ((0xa4U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x2eU
								 : 
								((0xa5U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x38U
								  : 
								 ((0xa6U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x42U
								   : 
								  ((0xa7U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x4cU
								    : 
								   ((0xa8U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfffbU
								     : 
								    ((0xa9U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff1U
								      : 
								     ((0xaaU 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffe7U
								       : 
								      ((0xabU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffddU
								        : 
								       ((0xacU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffd2U
									 : 
									((0xadU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xffc8U
									  : 
									 ((0xaeU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xffbeU
									   : 
									  ((0xafU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xffb4U
									    : 
									   ((0xb0U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 5U
									     : 
									    ((0xb1U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x10U
									      : 
									     ((0xb2U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x1bU
									       : 
									      ((0xb3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x26U
									        : 
									       ((0xb4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x32U
										 : 
										((0xb5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x3dU
										 : 
										((0xb6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x48U
										 : 
										((0xb7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x53U
										 : __Vdeeptemp15)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp16 = ((0x90U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 4U : __Vdeeptemp34);
    __Vdeeptemp35 = ((0x69U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff6U : ((0x6aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffefU : ((0x6bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xffe8U
						  : 
						 ((0x6cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffe1U
						   : 
						  ((0x6dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xffdaU
						    : 
						   ((0x6eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xffd3U
						     : 
						    ((0x6fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffccU
						      : 
						     ((0x70U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 3U
						       : 
						      ((0x71U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xaU
						        : 
						       ((0x72U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x12U
							 : 
							((0x73U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x19U
							  : 
							 ((0x74U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x22U
							   : 
							  ((0x75U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x29U
							    : 
							   ((0x76U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x31U
							     : 
							    ((0x77U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x38U
							      : 
							     ((0x78U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfffdU
							       : 
							      ((0x79U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xfff6U
							        : 
							       ((0x7aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffeeU
								 : 
								((0x7bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xffe7U
								  : 
								 ((0x7cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffdeU
								   : 
								  ((0x7dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xffd7U
								    : 
								   ((0x7eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xffcfU
								     : 
								    ((0x7fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffc8U
								      : 
								     ((0x80U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 4U
								       : 
								      ((0x81U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xcU
								        : 
								       ((0x82U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x15U
									 : 
									((0x83U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x1dU
									  : 
									 ((0x84U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x26U
									   : 
									  ((0x85U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x2eU
									    : 
									   ((0x86U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x37U
									     : 
									    ((0x87U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x3fU
									      : 
									     ((0x88U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfffcU
									       : 
									      ((0x89U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xfff4U
									        : 
									       ((0x8aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffebU
										 : 
										((0x8bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffe3U
										 : 
										((0x8cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdaU
										 : 
										((0x8dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffd2U
										 : 
										((0x8eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc9U
										 : 
										((0x8fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc1U
										 : __Vdeeptemp16)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp17 = ((0x68U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffdU : __Vdeeptemp35);
    __Vdeeptemp36 = ((0x41U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 7U : ((0x42U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
			       ? 0xdU : ((0x43U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					  ? 0x12U : 
					 ((0x44U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					   ? 0x19U : 
					  ((0x45U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					    ? 0x1eU
					    : ((0x46U 
						== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					        ? 0x24U
					        : (
						   (0x47U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x29U
						    : 
						   ((0x48U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfffeU
						     : 
						    ((0x49U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff9U
						      : 
						     ((0x4aU 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xfff3U
						       : 
						      ((0x4bU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffeeU
						        : 
						       ((0x4cU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffe7U
							 : 
							((0x4dU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xffe2U
							  : 
							 ((0x4eU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xffdcU
							   : 
							  ((0x4fU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xffd7U
							    : 
							   ((0x50U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 3U
							     : 
							    ((0x51U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 9U
							      : 
							     ((0x52U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfU
							       : 
							      ((0x53U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x15U
							        : 
							       ((0x54U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x1cU
								 : 
								((0x55U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x22U
								  : 
								 ((0x56U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x28U
								   : 
								  ((0x57U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x2eU
								    : 
								   ((0x58U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfffdU
								     : 
								    ((0x59U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff7U
								      : 
								     ((0x5aU 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xfff1U
								       : 
								      ((0x5bU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffebU
								        : 
								       ((0x5cU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffe4U
									 : 
									((0x5dU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xffdeU
									  : 
									 ((0x5eU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xffd8U
									   : 
									  ((0x5fU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xffd2U
									    : 
									   ((0x60U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 3U
									     : 
									    ((0x61U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xaU
									      : 
									     ((0x62U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x11U
									       : 
									      ((0x63U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x18U
									        : 
									       ((0x64U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1fU
										 : 
										((0x65U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x26U
										 : 
										((0x66U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x2dU
										 : 
										((0x67U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x34U
										 : __Vdeeptemp17)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp18 = ((0x40U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 2U : __Vdeeptemp36);
    __Vdeeptemp37 = ((0x19U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffaU : ((0x1aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xfff6U : ((0x1bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfff2U
						  : 
						 ((0x1cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffedU
						   : 
						  ((0x1dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xffe9U
						    : 
						   ((0x1eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xffe5U
						     : 
						    ((0x1fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffe1U
						      : 
						     ((0x20U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 2U
						       : 
						      ((0x21U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 6U
						        : 
						       ((0x22U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xbU
							 : 
							((0x23U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfU
							  : 
							 ((0x24U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x15U
							   : 
							  ((0x25U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x19U
							    : 
							   ((0x26U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x1eU
							     : 
							    ((0x27U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x22U
							      : 
							     ((0x28U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfffeU
							       : 
							      ((0x29U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xfffaU
							        : 
							       ((0x2aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfff5U
								 : 
								((0x2bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfff1U
								  : 
								 ((0x2cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffebU
								   : 
								  ((0x2dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xffe7U
								    : 
								   ((0x2eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xffe2U
								     : 
								    ((0x2fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffdeU
								      : 
								     ((0x30U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 2U
								       : 
								      ((0x31U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 7U
								        : 
								       ((0x32U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xcU
									 : 
									((0x33U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x11U
									  : 
									 ((0x34U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x17U
									   : 
									  ((0x35U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x1cU
									    : 
									   ((0x36U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x21U
									     : 
									    ((0x37U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x26U
									      : 
									     ((0x38U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfffeU
									       : 
									      ((0x39U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xfff9U
									        : 
									       ((0x3aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfff4U
										 : 
										((0x3bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffefU
										 : 
										((0x3cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffe9U
										 : 
										((0x3dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffe4U
										 : 
										((0x3eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdfU
										 : 
										((0x3fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdaU
										 : __Vdeeptemp18)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp19 = ((0x18U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffeU : __Vdeeptemp37);
    vlTOPp->msm6295__DOT__ADPCM_DATA = ((0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					 ? 2U : ((1U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 6U
						  : 
						 ((2U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xaU
						   : 
						  ((3U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xeU
						    : 
						   ((4U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x12U
						     : 
						    ((5U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0x16U
						      : 
						     ((6U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x1aU
						       : 
						      ((7U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x1eU
						        : 
						       ((8U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfffeU
							 : 
							((9U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfffaU
							  : 
							 ((0xaU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfff6U
							   : 
							  ((0xbU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfff2U
							    : 
							   ((0xcU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xffeeU
							     : 
							    ((0xdU 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xffeaU
							      : 
							     ((0xeU 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffe6U
							       : 
							      ((0xfU 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffe2U
							        : 
							       ((0x10U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 2U
								 : 
								((0x11U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 6U
								  : 
								 ((0x12U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xaU
								   : 
								  ((0x13U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xeU
								    : 
								   ((0x14U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x13U
								     : 
								    ((0x15U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0x17U
								      : 
								     ((0x16U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x1bU
								       : 
								      ((0x17U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x1fU
								        : __Vdeeptemp19))))))))))))))))))))))));
    vlTOPp->msm6295__DOT__ADPCM_LUT_ROM__DOT__DATA 
	= vlTOPp->msm6295__DOT__ADPCM_DATA;
}

VL_INLINE_OPT void Vmsm5205::_combo__TOP__2(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_combo__TOP__2\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->msm6295__DOT__RESET_N = vlTOPp->RESET_N;
    vlTOPp->msm6295__DOT__CLK = vlTOPp->CLK;
    vlTOPp->msm6295__DOT__CS_N = vlTOPp->CS_N;
    vlTOPp->msm6295__DOT__RD_N = vlTOPp->RD_N;
    vlTOPp->msm6295__DOT__WR_N = vlTOPp->WR_N;
    vlTOPp->msm6295__DOT__SS = vlTOPp->SS;
    vlTOPp->msm6295__DOT__ROM_DATA = vlTOPp->ROM_DATA;
    vlTOPp->msm6295__DOT__CPU_DI = vlTOPp->CPU_DI;
    vlTOPp->CPU_DI_DBG = vlTOPp->CPU_DI;
    vlTOPp->msm6295__DOT__CPU_DI_DBG = vlTOPp->CPU_DI_DBG;
}

VL_INLINE_OPT void Vmsm5205::_sequent__TOP__3(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_sequent__TOP__3\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG8(__Vdly__V1_GATE,0,0);
    VL_SIG8(__Vdly__msm6295__DOT__PHRASE_SEL,6,0);
    VL_SIG8(__Vdly__WRITE_STATE,0,0);
    VL_SIG8(__Vdly__V1_STATE,3,0);
    VL_SIG8(__Vdly__msm6295__DOT__V1_STEP,6,0);
    VL_SIG8(__Vdly__MAIN_STATE,2,0);
    VL_SIG16(__Vdly__msm6295__DOT__COUNTER,9,0);
    VL_SIG16(__Vdly__V1_SIGNAL,12,0);
    VL_SIG(__Vdly__msm6295__DOT__V1_INDEX,18,0);
    VL_SIG(__Vdly__ROM_ADDR,17,0);
    VL_SIG(__Vdly__V1_SA,17,0);
    VL_SIG(__Vdly__V1_EA,17,0);
    // Body
    __Vdly__msm6295__DOT__COUNTER = vlTOPp->msm6295__DOT__COUNTER;
    __Vdly__msm6295__DOT__PHRASE_SEL = vlTOPp->msm6295__DOT__PHRASE_SEL;
    __Vdly__MAIN_STATE = vlTOPp->MAIN_STATE;
    __Vdly__V1_EA = vlTOPp->V1_EA;
    __Vdly__V1_SA = vlTOPp->V1_SA;
    __Vdly__ROM_ADDR = vlTOPp->ROM_ADDR;
    __Vdly__V1_SIGNAL = vlTOPp->V1_SIGNAL;
    __Vdly__V1_STATE = vlTOPp->V1_STATE;
    __Vdly__WRITE_STATE = vlTOPp->WRITE_STATE;
    __Vdly__V1_GATE = vlTOPp->V1_GATE;
    __Vdly__msm6295__DOT__V1_STEP = vlTOPp->msm6295__DOT__V1_STEP;
    __Vdly__msm6295__DOT__V1_INDEX = vlTOPp->msm6295__DOT__V1_INDEX;
    // ALWAYS at msm5205.v:99
    vlTOPp->msm6295__DOT__WR_N_1 = (1U & ((~ (IData)(vlTOPp->RESET_N)) 
					  | (IData)(vlTOPp->WR_N)));
    // ALWAYS at msm5205.v:99
    if (vlTOPp->RESET_N) {
	if ((1U & ((((~ (IData)(vlTOPp->WRITE_STATE)) 
		     & (~ (IData)(vlTOPp->CS_N))) & 
		    (~ (IData)(vlTOPp->WR_N))) & (~ 
						  ((IData)(vlTOPp->CPU_DI) 
						   >> 7U))))) {
	    if ((8U & (IData)(vlTOPp->CPU_DI))) {
		__Vdly__V1_GATE = 0U;
	    }
	}
	if ((1U & ((((~ (IData)(vlTOPp->WRITE_STATE)) 
		     & (~ (IData)(vlTOPp->CS_N))) & 
		    (~ (IData)(vlTOPp->WR_N))) & ((IData)(vlTOPp->CPU_DI) 
						  >> 7U)))) {
	    __Vdly__msm6295__DOT__PHRASE_SEL = (0x7fU 
						& (IData)(vlTOPp->CPU_DI));
	    __Vdly__WRITE_STATE = 1U;
	}
	if ((((IData)(vlTOPp->WRITE_STATE) & (~ (IData)(vlTOPp->CS_N))) 
	     & (~ (IData)(vlTOPp->WR_N)))) {
	    if ((0x10U & (IData)(vlTOPp->CPU_DI))) {
		__Vdly__msm6295__DOT__V1_INDEX = ((IData)(vlTOPp->msm6295__DOT__PHRASE_SEL) 
						  << 4U);
		vlTOPp->msm6295__DOT__V1_ATTEN = (0xfU 
						  & (IData)(vlTOPp->CPU_DI));
		__Vdly__V1_STATE = 0U;
		__Vdly__V1_GATE = 1U;
	    }
	    __Vdly__WRITE_STATE = 0U;
	}
	if ((0U == (IData)(vlTOPp->MAIN_STATE))) {
	    if (((((((((0U == (IData)(vlTOPp->V1_STATE)) 
		       | (1U == (IData)(vlTOPp->V1_STATE))) 
		      | (2U == (IData)(vlTOPp->V1_STATE))) 
		     | (3U == (IData)(vlTOPp->V1_STATE))) 
		    | (4U == (IData)(vlTOPp->V1_STATE))) 
		   | (5U == (IData)(vlTOPp->V1_STATE))) 
		  | (6U == (IData)(vlTOPp->V1_STATE))) 
		 | (7U == (IData)(vlTOPp->V1_STATE)))) {
		if ((0U == (IData)(vlTOPp->V1_STATE))) {
		    if (vlTOPp->V1_GATE) {
			__Vdly__V1_STATE = (0xfU & 
					    ((IData)(1U) 
					     + (IData)(vlTOPp->V1_STATE)));
			__Vdly__V1_SIGNAL = 0x1ffeU;
			__Vdly__msm6295__DOT__V1_STEP = 0U;
			__Vdly__ROM_ADDR = (0x3ffffU 
					    & (vlTOPp->msm6295__DOT__V1_INDEX 
					       >> 1U));
		    }
		} else {
		    if ((1U == (IData)(vlTOPp->V1_STATE))) {
			__Vdly__ROM_ADDR = (0x3ffffU 
					    & ((IData)(1U) 
					       + vlTOPp->ROM_ADDR));
			__Vdly__V1_STATE = (0xfU & 
					    ((IData)(1U) 
					     + (IData)(vlTOPp->V1_STATE)));
			__Vdly__V1_SA = ((0xffffU & __Vdly__V1_SA) 
					 | (0x30000U 
					    & ((IData)(vlTOPp->ROM_DATA) 
					       << 0x10U)));
		    } else {
			if ((2U == (IData)(vlTOPp->V1_STATE))) {
			    __Vdly__ROM_ADDR = (0x3ffffU 
						& ((IData)(1U) 
						   + vlTOPp->ROM_ADDR));
			    __Vdly__V1_STATE = (0xfU 
						& ((IData)(1U) 
						   + (IData)(vlTOPp->V1_STATE)));
			    __Vdly__V1_SA = ((0x300ffU 
					      & __Vdly__V1_SA) 
					     | ((IData)(vlTOPp->ROM_DATA) 
						<< 8U));
			} else {
			    if ((3U == (IData)(vlTOPp->V1_STATE))) {
				__Vdly__ROM_ADDR = 
				    (0x3ffffU & ((IData)(1U) 
						 + vlTOPp->ROM_ADDR));
				__Vdly__V1_STATE = 
				    (0xfU & ((IData)(1U) 
					     + (IData)(vlTOPp->V1_STATE)));
				__Vdly__V1_SA = ((0x3ff00U 
						  & __Vdly__V1_SA) 
						 | (IData)(vlTOPp->ROM_DATA));
			    } else {
				if ((4U == (IData)(vlTOPp->V1_STATE))) {
				    __Vdly__ROM_ADDR 
					= (0x3ffffU 
					   & ((IData)(1U) 
					      + vlTOPp->ROM_ADDR));
				    __Vdly__V1_STATE 
					= (0xfU & ((IData)(1U) 
						   + (IData)(vlTOPp->V1_STATE)));
				    __Vdly__V1_EA = 
					((0xffffU & __Vdly__V1_EA) 
					 | (0x30000U 
					    & ((IData)(vlTOPp->ROM_DATA) 
					       << 0x10U)));
				} else {
				    if ((5U == (IData)(vlTOPp->V1_STATE))) {
					__Vdly__ROM_ADDR 
					    = (0x3ffffU 
					       & ((IData)(1U) 
						  + vlTOPp->ROM_ADDR));
					__Vdly__V1_STATE 
					    = (0xfU 
					       & ((IData)(1U) 
						  + (IData)(vlTOPp->V1_STATE)));
					__Vdly__V1_EA 
					    = ((0x300ffU 
						& __Vdly__V1_EA) 
					       | ((IData)(vlTOPp->ROM_DATA) 
						  << 8U));
				    } else {
					if ((6U == (IData)(vlTOPp->V1_STATE))) {
					    __Vdly__V1_STATE 
						= (0xfU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->V1_STATE)));
					    __Vdly__V1_EA 
						= (
						   (0x3ff00U 
						    & __Vdly__V1_EA) 
						   | (IData)(vlTOPp->ROM_DATA));
					} else {
					    __Vdly__V1_STATE 
						= (0xfU 
						   & ((IData)(1U) 
						      + (IData)(vlTOPp->V1_STATE)));
					    __Vdly__ROM_ADDR 
						= vlTOPp->V1_SA;
					    __Vdly__msm6295__DOT__V1_INDEX 
						= (vlTOPp->V1_SA 
						   << 1U);
					}
				    }
				}
			    }
			}
		    }
		}
	    } else {
		if ((8U == (IData)(vlTOPp->V1_STATE))) {
		    __Vdly__V1_STATE = (0xfU & ((IData)(1U) 
						+ (IData)(vlTOPp->V1_STATE)));
		    __Vdly__ROM_ADDR = (0x3ffffU & 
					(vlTOPp->msm6295__DOT__V1_INDEX 
					 >> 1U));
		} else {
		    if ((9U == (IData)(vlTOPp->V1_STATE))) {
			__Vdly__MAIN_STATE = (7U & 
					      ((IData)(1U) 
					       + (IData)(vlTOPp->MAIN_STATE)));
			if ((((0x3ffffU & (vlTOPp->msm6295__DOT__V1_INDEX 
					   >> 1U)) 
			      <= vlTOPp->V1_EA) & (IData)(vlTOPp->V1_GATE))) {
			    __Vdly__V1_SIGNAL = (0x1fffU 
						 & ((0xffffU 
						     & VL_EXTENDS_II(16,13, (IData)(vlTOPp->V1_SIGNAL))) 
						    + (IData)(vlTOPp->msm6295__DOT__ADPCM_DATA)));
			    if (((((((((0U == (7U & (IData)(vlTOPp->V1_NIB))) 
				       | (1U == (7U 
						 & (IData)(vlTOPp->V1_NIB)))) 
				      | (2U == (7U 
						& (IData)(vlTOPp->V1_NIB)))) 
				     | (3U == (7U & (IData)(vlTOPp->V1_NIB)))) 
				    | (4U == (7U & (IData)(vlTOPp->V1_NIB)))) 
				   | (5U == (7U & (IData)(vlTOPp->V1_NIB)))) 
				  | (6U == (7U & (IData)(vlTOPp->V1_NIB)))) 
				 | (7U == (7U & (IData)(vlTOPp->V1_NIB))))) {
				__Vdly__msm6295__DOT__V1_STEP 
				    = (0x7fU & ((0U 
						 == 
						 (7U 
						  & (IData)(vlTOPp->V1_NIB)))
						 ? 
						((IData)(0x7fU) 
						 + 
						 VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))
						 : 
						((1U 
						  == 
						  (7U 
						   & (IData)(vlTOPp->V1_NIB)))
						  ? 
						 ((IData)(0x7fU) 
						  + 
						  VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))
						  : 
						 ((2U 
						   == 
						   (7U 
						    & (IData)(vlTOPp->V1_NIB)))
						   ? 
						  ((IData)(0x7fU) 
						   + 
						   VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))
						   : 
						  ((3U 
						    == 
						    (7U 
						     & (IData)(vlTOPp->V1_NIB)))
						    ? 
						   ((IData)(0x7fU) 
						    + 
						    VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))
						    : 
						   ((4U 
						     == 
						     (7U 
						      & (IData)(vlTOPp->V1_NIB)))
						     ? 
						    ((IData)(2U) 
						     + 
						     VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))
						     : 
						    ((5U 
						      == 
						      (7U 
						       & (IData)(vlTOPp->V1_NIB)))
						      ? 
						     ((IData)(4U) 
						      + 
						      VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))
						      : 
						     ((6U 
						       == 
						       (7U 
							& (IData)(vlTOPp->V1_NIB)))
						       ? 
						      ((IData)(6U) 
						       + 
						       VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))
						       : 
						      ((IData)(8U) 
						       + 
						       VL_EXTENDS_II(7,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))))))))));
			    }
			    __Vdly__msm6295__DOT__V1_INDEX 
				= (0x7ffffU & ((IData)(1U) 
					       + vlTOPp->msm6295__DOT__V1_INDEX));
			    __Vdly__V1_STATE = 8U;
			} else {
			    __Vdly__V1_GATE = 0U;
			    __Vdly__V1_STATE = 0U;
			}
		    }
		}
	    }
	} else {
	    if ((1U == (IData)(vlTOPp->MAIN_STATE))) {
		if (VL_LTS_III(1,32,32, 0x7ffU, VL_EXTENDS_II(32,13, (IData)(vlTOPp->V1_SIGNAL)))) {
		    __Vdly__V1_SIGNAL = 0x7ffU;
		} else {
		    if (VL_GTS_III(1,32,32, 0xfffff800U, 
				   VL_EXTENDS_II(32,13, (IData)(vlTOPp->V1_SIGNAL)))) {
			__Vdly__V1_SIGNAL = 0x1800U;
		    }
		}
		if (VL_LTS_III(1,32,32, 0x2fU, VL_EXTENDS_II(32,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))) {
		    __Vdly__msm6295__DOT__V1_STEP = 0x2fU;
		} else {
		    if (VL_GTS_III(1,32,32, 0U, VL_EXTENDS_II(32,7, (IData)(vlTOPp->msm6295__DOT__V1_STEP)))) {
			__Vdly__msm6295__DOT__V1_STEP = 0U;
		    }
		}
		__Vdly__MAIN_STATE = (7U & ((IData)(1U) 
					    + (IData)(vlTOPp->MAIN_STATE)));
	    } else {
		if ((2U == (IData)(vlTOPp->MAIN_STATE))) {
		    if (vlTOPp->SAMP_PULSE) {
			__Vdly__MAIN_STATE = 0U;
			vlTOPp->V1_SAMP_OUT = (0x1ffffU 
					       & ((IData)(vlTOPp->V1_GATE)
						   ? 
						  ((IData)(vlTOPp->V1_SIGNAL) 
						   * (IData)(vlTOPp->msm6295__DOT__V1_VOL_MUL))
						   : 0U));
		    }
		}
	    }
	}
    } else {
	__Vdly__msm6295__DOT__V1_INDEX = 0U;
	__Vdly__V1_GATE = 0U;
	__Vdly__V1_STATE = 0U;
	__Vdly__MAIN_STATE = 0U;
	__Vdly__WRITE_STATE = 0U;
	vlTOPp->msm6295__DOT__V1_ATTEN = 0U;
    }
    vlTOPp->msm6295__DOT__PHRASE_SEL = __Vdly__msm6295__DOT__PHRASE_SEL;
    vlTOPp->V1_GATE = __Vdly__V1_GATE;
    vlTOPp->WRITE_STATE = __Vdly__WRITE_STATE;
    vlTOPp->V1_STATE = __Vdly__V1_STATE;
    vlTOPp->V1_SIGNAL = __Vdly__V1_SIGNAL;
    vlTOPp->ROM_ADDR = __Vdly__ROM_ADDR;
    vlTOPp->V1_SA = __Vdly__V1_SA;
    vlTOPp->V1_EA = __Vdly__V1_EA;
    vlTOPp->MAIN_STATE = __Vdly__MAIN_STATE;
    vlTOPp->msm6295__DOT__V1_STEP = __Vdly__msm6295__DOT__V1_STEP;
    vlTOPp->msm6295__DOT__V1_INDEX = __Vdly__msm6295__DOT__V1_INDEX;
    vlTOPp->msm6295__DOT__V1_GATE = vlTOPp->V1_GATE;
    vlTOPp->msm6295__DOT__WRITE_STATE = vlTOPp->WRITE_STATE;
    vlTOPp->msm6295__DOT__V1_VOL_MUL = (0x3fU & ((0U 
						  == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						  ? 0x20U
						  : 
						 ((1U 
						   == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						   ? 0x16U
						   : 
						  ((2U 
						    == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						    ? 0x10U
						    : 
						   ((3U 
						     == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						     ? 0xbU
						     : 
						    ((4U 
						      == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						      ? 8U
						      : 
						     ((5U 
						       == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						       ? 6U
						       : 
						      ((6U 
							== (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
						        ? 4U
						        : 
						       ((7U 
							 == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
							 ? 3U
							 : 
							((8U 
							  == (IData)(vlTOPp->msm6295__DOT__V1_ATTEN))
							  ? 2U
							  : 0U))))))))));
    vlTOPp->msm6295__DOT__V1_STATE = vlTOPp->V1_STATE;
    vlTOPp->msm6295__DOT__V1_SIGNAL = vlTOPp->V1_SIGNAL;
    vlTOPp->msm6295__DOT__ROM_ADDR = vlTOPp->ROM_ADDR;
    vlTOPp->msm6295__DOT__V1_SA = vlTOPp->V1_SA;
    vlTOPp->msm6295__DOT__V1_EA = vlTOPp->V1_EA;
    vlTOPp->msm6295__DOT__MAIN_STATE = vlTOPp->MAIN_STATE;
    vlTOPp->msm6295__DOT__V1_SAMP_OUT = vlTOPp->V1_SAMP_OUT;
    vlTOPp->SOUND_OUT = (0x1fffffU & VL_EXTENDS_II(21,17, vlTOPp->V1_SAMP_OUT));
    // ALWAYS at msm5205.v:99
    if (vlTOPp->RESET_N) {
	vlTOPp->SAMP_PULSE = 0U;
	if ((0U == (IData)(vlTOPp->msm6295__DOT__COUNTER))) {
	    vlTOPp->SAMP_PULSE = 1U;
	    __Vdly__msm6295__DOT__COUNTER = ((IData)(vlTOPp->SS)
					      ? 0x27U
					      : 0x31U);
	} else {
	    __Vdly__msm6295__DOT__COUNTER = (0x3ffU 
					     & ((IData)(vlTOPp->msm6295__DOT__COUNTER) 
						- (IData)(1U)));
	}
    } else {
	__Vdly__msm6295__DOT__COUNTER = 1U;
    }
    vlTOPp->msm6295__DOT__SOUND_OUT = vlTOPp->SOUND_OUT;
    vlTOPp->msm6295__DOT__COUNTER = __Vdly__msm6295__DOT__COUNTER;
    vlTOPp->msm6295__DOT__SAMP_PULSE = vlTOPp->SAMP_PULSE;
}

void Vmsm5205::_initial__TOP__4(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_initial__TOP__4\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at msm5205.v:6
    vlTOPp->CPU_DI = 0U;
}

VL_INLINE_OPT void Vmsm5205::_combo__TOP__5(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_combo__TOP__5\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG(__Vdeeptemp38,31,0);
    VL_SIG(__Vdeeptemp39,31,0);
    VL_SIG(__Vdeeptemp40,31,0);
    VL_SIG(__Vdeeptemp41,31,0);
    VL_SIG(__Vdeeptemp42,31,0);
    VL_SIG(__Vdeeptemp43,31,0);
    VL_SIG(__Vdeeptemp44,31,0);
    VL_SIG(__Vdeeptemp45,31,0);
    VL_SIG(__Vdeeptemp46,31,0);
    VL_SIG(__Vdeeptemp47,31,0);
    VL_SIG(__Vdeeptemp48,31,0);
    VL_SIG(__Vdeeptemp49,31,0);
    VL_SIG(__Vdeeptemp50,31,0);
    VL_SIG(__Vdeeptemp51,31,0);
    VL_SIG(__Vdeeptemp52,31,0);
    VL_SIG(__Vdeeptemp53,31,0);
    VL_SIG(__Vdeeptemp54,31,0);
    VL_SIG(__Vdeeptemp55,31,0);
    VL_SIG(__Vdeeptemp56,31,0);
    VL_SIG(__Vdeeptemp57,31,0);
    VL_SIG(__Vdeeptemp58,31,0);
    VL_SIG(__Vdeeptemp59,31,0);
    VL_SIG(__Vdeeptemp60,31,0);
    VL_SIG(__Vdeeptemp61,31,0);
    VL_SIG(__Vdeeptemp62,31,0);
    VL_SIG(__Vdeeptemp63,31,0);
    VL_SIG(__Vdeeptemp64,31,0);
    VL_SIG(__Vdeeptemp65,31,0);
    VL_SIG(__Vdeeptemp66,31,0);
    VL_SIG(__Vdeeptemp67,31,0);
    VL_SIG(__Vdeeptemp68,31,0);
    VL_SIG(__Vdeeptemp69,31,0);
    VL_SIG(__Vdeeptemp70,31,0);
    VL_SIG(__Vdeeptemp71,31,0);
    VL_SIG(__Vdeeptemp72,31,0);
    VL_SIG(__Vdeeptemp73,31,0);
    VL_SIG(__Vdeeptemp74,31,0);
    // Body
    vlTOPp->WR_N_RISING = ((~ (IData)(vlTOPp->msm6295__DOT__WR_N_1)) 
			   & (IData)(vlTOPp->WR_N));
    vlTOPp->V1_NIB = (0xfU & ((1U & vlTOPp->msm6295__DOT__V1_INDEX)
			       ? (IData)(vlTOPp->ROM_DATA)
			       : ((IData)(vlTOPp->ROM_DATA) 
				  >> 4U)));
    vlTOPp->msm6295__DOT__WR_N_RISING = vlTOPp->WR_N_RISING;
    vlTOPp->msm6295__DOT__V1_NIB = vlTOPp->V1_NIB;
    vlTOPp->msm6295__DOT__ADPCM_ADDR = (0xfffU & (((IData)(vlTOPp->msm6295__DOT__V1_STEP) 
						   << 4U) 
						  + (IData)(vlTOPp->V1_NIB)));
    vlTOPp->msm6295__DOT__ADPCM_LUT_ROM__DOT__ADDR 
	= vlTOPp->msm6295__DOT__ADPCM_ADDR;
    __Vdeeptemp38 = ((0x2e8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xff60U : ((0x2e9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xfe20U : ((0x2eaU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfcdfU
						  : 
						 ((0x2ebU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfb9fU
						   : 
						  ((0x2ecU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfa5eU
						    : 
						   ((0x2edU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xf91eU
						     : 
						    ((0x2eeU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xf7ddU
						      : 
						     ((0x2efU 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xf69dU
						       : 
						      ((0x2f0U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xb0U
						        : 
						       ((0x2f1U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x210U
							 : 
							((0x2f2U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x371U
							  : 
							 ((0x2f3U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x4d1U
							   : 
							  ((0x2f4U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x633U
							    : 
							   ((0x2f5U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x793U
							     : 
							    ((0x2f6U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x8f4U
							      : 
							     ((0x2f7U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xa54U
							       : 
							      ((0x2f8U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xff50U
							        : 
							       ((0x2f9U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfdf0U
								 : 
								((0x2faU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfc8fU
								  : 
								 ((0x2fbU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xfb2fU
								   : 
								  ((0x2fcU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xf9cdU
								    : 
								   ((0x2fdU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xf86dU
								     : 
								    ((0x2feU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xf70cU
								      : 
								     ((0x2ffU 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xf5acU
								       : 
								      ((0x300U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xc2U
								        : 
								       ((0x301U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x246U
									 : 
									((0x302U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x3caU
									  : 
									 ((0x303U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x54eU
									   : 
									  ((0x304U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x6d2U
									    : 
									   ((0x305U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x856U
									     : 
									    ((0x306U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x9daU
									      : 
									     ((0x307U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xb5eU
									       : 
									      ((0x308U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xff3eU
									        : 
									       ((0x309U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfdbaU
										 : 
										((0x30aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfc36U
										 : 
										((0x30bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfab2U
										 : 
										((0x30cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf92eU
										 : 
										((0x30dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf7aaU
										 : 
										((0x30eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf626U
										 : 0xf4a2U)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp57 = ((0x2c1U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x18dU : ((0x2c2U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				   ? 0x296U : ((0x2c3U 
						== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					        ? 0x39fU
					        : (
						   (0x2c4U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x4a8U
						    : 
						   ((0x2c5U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x5b1U
						     : 
						    ((0x2c6U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0x6baU
						      : 
						     ((0x2c7U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x7c3U
						       : 
						      ((0x2c8U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff7cU
						        : 
						       ((0x2c9U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfe73U
							 : 
							((0x2caU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfd6aU
							  : 
							 ((0x2cbU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfc61U
							   : 
							  ((0x2ccU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfb58U
							    : 
							   ((0x2cdU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfa4fU
							     : 
							    ((0x2ceU 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xf946U
							      : 
							     ((0x2cfU 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xf83dU
							       : 
							      ((0x2d0U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x91U
							        : 
							       ((0x2d1U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x1b4U
								 : 
								((0x2d2U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x2d8U
								  : 
								 ((0x2d3U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x3fbU
								   : 
								  ((0x2d4U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x51fU
								    : 
								   ((0x2d5U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x642U
								     : 
								    ((0x2d6U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0x766U
								      : 
								     ((0x2d7U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x889U
								       : 
								      ((0x2d8U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xff6fU
								        : 
								       ((0x2d9U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xfe4cU
									 : 
									((0x2daU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfd28U
									  : 
									 ((0x2dbU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfc05U
									   : 
									  ((0x2dcU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfae1U
									    : 
									   ((0x2ddU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xf9beU
									     : 
									    ((0x2deU 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xf89aU
									      : 
									     ((0x2dfU 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xf777U
									       : 
									      ((0x2e0U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xa0U
									        : 
									       ((0x2e1U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1e0U
										 : 
										((0x2e2U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x321U
										 : 
										((0x2e3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x461U
										 : 
										((0x2e4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x5a2U
										 : 
										((0x2e5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x6e2U
										 : 
										((0x2e6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x823U
										 : 
										((0x2e7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x963U
										 : __Vdeeptemp38)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp39 = ((0x2c0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x84U : __Vdeeptemp57);
    __Vdeeptemp58 = ((0x299U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfed6U : ((0x29aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xfe0fU : ((0x29bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfd48U
						  : 
						 ((0x29cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfc81U
						   : 
						  ((0x29dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfbbaU
						    : 
						   ((0x29eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfaf3U
						     : 
						    ((0x29fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfa2cU
						      : 
						     ((0x2a0U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x6dU
						       : 
						      ((0x2a1U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x148U
						        : 
						       ((0x2a2U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x223U
							 : 
							((0x2a3U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x2feU
							  : 
							 ((0x2a4U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x3d9U
							   : 
							  ((0x2a5U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x4b4U
							    : 
							   ((0x2a6U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x58fU
							     : 
							    ((0x2a7U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x66aU
							      : 
							     ((0x2a8U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xff93U
							       : 
							      ((0x2a9U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xfeb8U
							        : 
							       ((0x2aaU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfdddU
								 : 
								((0x2abU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfd02U
								  : 
								 ((0x2acU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xfc27U
								   : 
								  ((0x2adU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfb4cU
								    : 
								   ((0x2aeU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfa71U
								     : 
								    ((0x2afU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xf996U
								      : 
								     ((0x2b0U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x78U
								       : 
								      ((0x2b1U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x168U
								        : 
								       ((0x2b2U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x259U
									 : 
									((0x2b3U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x349U
									  : 
									 ((0x2b4U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x43bU
									   : 
									  ((0x2b5U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x52bU
									    : 
									   ((0x2b6U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x61cU
									     : 
									    ((0x2b7U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x70cU
									      : 
									     ((0x2b8U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xff88U
									       : 
									      ((0x2b9U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xfe98U
									        : 
									       ((0x2baU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfda7U
										 : 
										((0x2bbU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfcb7U
										 : 
										((0x2bcU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfbc5U
										 : 
										((0x2bdU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfad5U
										 : 
										((0x2beU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf9e4U
										 : 
										((0x2bfU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xf8f4U
										 : __Vdeeptemp39)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp40 = ((0x298U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xff9dU : __Vdeeptemp58);
    __Vdeeptemp59 = ((0x271U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xf6U : ((0x272U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x19bU : ((0x273U 
					       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					       ? 0x23fU
					       : ((0x274U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x2e4U
						   : 
						  ((0x275U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x388U
						    : 
						   ((0x276U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x42dU
						     : 
						    ((0x277U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0x4d1U
						      : 
						     ((0x278U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffaeU
						       : 
						      ((0x279U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff0aU
						        : 
						       ((0x27aU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfe65U
							 : 
							((0x27bU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfdc1U
							  : 
							 ((0x27cU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfd1cU
							   : 
							  ((0x27dU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfc78U
							    : 
							   ((0x27eU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfbd3U
							     : 
							    ((0x27fU 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xfb2fU
							      : 
							     ((0x280U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x5aU
							       : 
							      ((0x281U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x10fU
							        : 
							       ((0x282U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x1c4U
								 : 
								((0x283U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x279U
								  : 
								 ((0x284U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x32eU
								   : 
								  ((0x285U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x3e3U
								    : 
								   ((0x286U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x498U
								     : 
								    ((0x287U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0x54dU
								      : 
								     ((0x288U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffa6U
								       : 
								      ((0x289U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xfef1U
								        : 
								       ((0x28aU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xfe3cU
									 : 
									((0x28bU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfd87U
									  : 
									 ((0x28cU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfcd2U
									   : 
									  ((0x28dU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfc1dU
									    : 
									   ((0x28eU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfb68U
									     : 
									    ((0x28fU 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xfab3U
									      : 
									     ((0x290U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x63U
									       : 
									      ((0x291U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x12aU
									        : 
									       ((0x292U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1f1U
										 : 
										((0x293U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x2b8U
										 : 
										((0x294U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x37fU
										 : 
										((0x295U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x446U
										 : 
										((0x296U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x50dU
										 : 
										((0x297U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x5d4U
										 : __Vdeeptemp40)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp41 = ((0x270U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x52U : __Vdeeptemp59);
    __Vdeeptemp60 = ((0x249U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xff48U : ((0x24aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xfeccU : ((0x24bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfe51U
						  : 
						 ((0x24cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfdd5U
						   : 
						  ((0x24dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfd5aU
						    : 
						   ((0x24eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfcdeU
						     : 
						    ((0x24fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfc63U
						      : 
						     ((0x250U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x44U
						       : 
						      ((0x251U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xccU
						        : 
						       ((0x252U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x154U
							 : 
							((0x253U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x1dcU
							  : 
							 ((0x254U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x264U
							   : 
							  ((0x255U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x2ecU
							    : 
							   ((0x256U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x374U
							     : 
							    ((0x257U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x3fcU
							      : 
							     ((0x258U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffbcU
							       : 
							      ((0x259U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xff34U
							        : 
							       ((0x25aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfeacU
								 : 
								((0x25bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfe24U
								  : 
								 ((0x25cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xfd9cU
								   : 
								  ((0x25dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfd14U
								    : 
								   ((0x25eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfc8cU
								     : 
								    ((0x25fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfc04U
								      : 
								     ((0x260U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x4aU
								       : 
								      ((0x261U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xdfU
								        : 
								       ((0x262U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x175U
									 : 
									((0x263U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x20aU
									  : 
									 ((0x264U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x2a0U
									   : 
									  ((0x265U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x335U
									    : 
									   ((0x266U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x3cbU
									     : 
									    ((0x267U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x460U
									      : 
									     ((0x268U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffb6U
									       : 
									      ((0x269U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xff21U
									        : 
									       ((0x26aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe8bU
										 : 
										((0x26bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfdf6U
										 : 
										((0x26cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfd60U
										 : 
										((0x26dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfccbU
										 : 
										((0x26eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfc35U
										 : 
										((0x26fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfba0U
										 : __Vdeeptemp41)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp42 = ((0x248U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffc3U : __Vdeeptemp60);
    __Vdeeptemp61 = ((0x221U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x99U : ((0x222U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0xffU : ((0x223U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x165U
					      : ((0x224U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x1cbU
						  : 
						 ((0x225U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x231U
						   : 
						  ((0x226U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x297U
						    : 
						   ((0x227U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x2fdU
						     : 
						    ((0x228U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffcdU
						      : 
						     ((0x229U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xff67U
						       : 
						      ((0x22aU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff01U
						        : 
						       ((0x22bU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfe9bU
							 : 
							((0x22cU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfe35U
							  : 
							 ((0x22dU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfdcfU
							   : 
							  ((0x22eU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfd69U
							    : 
							   ((0x22fU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfd03U
							     : 
							    ((0x230U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x38U
							      : 
							     ((0x231U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xa8U
							       : 
							      ((0x232U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x118U
							        : 
							       ((0x233U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x188U
								 : 
								((0x234U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x1f9U
								  : 
								 ((0x235U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x269U
								   : 
								  ((0x236U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x2d9U
								    : 
								   ((0x237U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x349U
								     : 
								    ((0x238U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffc8U
								      : 
								     ((0x239U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xff58U
								       : 
								      ((0x23aU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xfee8U
								        : 
								       ((0x23bU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xfe78U
									 : 
									((0x23cU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfe07U
									  : 
									 ((0x23dU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfd97U
									   : 
									  ((0x23eU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfd27U
									    : 
									   ((0x23fU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfcb7U
									     : 
									    ((0x240U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x3dU
									      : 
									     ((0x241U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xb8U
									       : 
									      ((0x242U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x134U
									        : 
									       ((0x243U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1afU
										 : 
										((0x244U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x22bU
										 : 
										((0x245U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x2a6U
										 : 
										((0x246U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x322U
										 : 
										((0x247U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x39dU
										 : __Vdeeptemp42)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp43 = ((0x220U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x33U : __Vdeeptemp61);
    __Vdeeptemp62 = ((0x1f9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xff8eU : ((0x1faU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xff41U : ((0x1fbU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfef5U
						  : 
						 ((0x1fcU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xfea7U
						   : 
						  ((0x1fdU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfe5bU
						    : 
						   ((0x1feU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfe0eU
						     : 
						    ((0x1ffU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfdc2U
						      : 
						     ((0x200U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x2aU
						       : 
						      ((0x201U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x7eU
						        : 
						       ((0x202U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xd2U
							 : 
							((0x203U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x126U
							  : 
							 ((0x204U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x17bU
							   : 
							  ((0x205U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x1cfU
							    : 
							   ((0x206U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x223U
							     : 
							    ((0x207U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x277U
							      : 
							     ((0x208U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffd6U
							       : 
							      ((0x209U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xff82U
							        : 
							       ((0x20aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xff2eU
								 : 
								((0x20bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfedaU
								  : 
								 ((0x20cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xfe85U
								   : 
								  ((0x20dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfe31U
								    : 
								   ((0x20eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfdddU
								     : 
								    ((0x20fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfd89U
								      : 
								     ((0x210U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x2eU
								       : 
								      ((0x211U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x8aU
								        : 
								       ((0x212U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xe7U
									 : 
									((0x213U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x143U
									  : 
									 ((0x214U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x1a1U
									   : 
									  ((0x215U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x1fdU
									    : 
									   ((0x216U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x25aU
									     : 
									    ((0x217U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x2b6U
									      : 
									     ((0x218U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffd2U
									       : 
									      ((0x219U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xff76U
									        : 
									       ((0x21aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff19U
										 : 
										((0x21bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfebdU
										 : 
										((0x21cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe5fU
										 : 
										((0x21dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe03U
										 : 
										((0x21eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfda6U
										 : 
										((0x21fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfd4aU
										 : __Vdeeptemp43)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp44 = ((0x1f8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffdaU : __Vdeeptemp62);
    __Vdeeptemp63 = ((0x1d1U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x5eU : ((0x1d2U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x9dU : ((0x1d3U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0xdcU
					      : ((0x1d4U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x11cU
						  : 
						 ((0x1d5U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x15bU
						   : 
						  ((0x1d6U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x19aU
						    : 
						   ((0x1d7U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x1d9U
						     : 
						    ((0x1d8U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffe1U
						      : 
						     ((0x1d9U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffa2U
						       : 
						      ((0x1daU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff63U
						        : 
						       ((0x1dbU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xff24U
							 : 
							((0x1dcU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfee4U
							  : 
							 ((0x1ddU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfea5U
							   : 
							  ((0x1deU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfe66U
							    : 
							   ((0x1dfU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfe27U
							     : 
							    ((0x1e0U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x22U
							      : 
							     ((0x1e1U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x67U
							       : 
							      ((0x1e2U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xadU
							        : 
							       ((0x1e3U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xf2U
								 : 
								((0x1e4U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x139U
								  : 
								 ((0x1e5U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x17eU
								   : 
								  ((0x1e6U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x1c4U
								    : 
								   ((0x1e7U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x209U
								     : 
								    ((0x1e8U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffdeU
								      : 
								     ((0x1e9U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xff99U
								       : 
								      ((0x1eaU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xff53U
								        : 
								       ((0x1ebU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xff0eU
									 : 
									((0x1ecU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xfec7U
									  : 
									 ((0x1edU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xfe82U
									   : 
									  ((0x1eeU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfe3cU
									    : 
									   ((0x1efU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfdf7U
									     : 
									    ((0x1f0U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x26U
									      : 
									     ((0x1f1U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x72U
									       : 
									      ((0x1f2U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xbfU
									        : 
									       ((0x1f3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x10bU
										 : 
										((0x1f4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x159U
										 : 
										((0x1f5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1a5U
										 : 
										((0x1f6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1f2U
										 : 
										((0x1f7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x23eU
										 : __Vdeeptemp44)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp45 = ((0x1d0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x1fU : __Vdeeptemp63);
    __Vdeeptemp64 = ((0x1a9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffbaU : ((0x1aaU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xff8aU : ((0x1abU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xff5bU
						  : 
						 ((0x1acU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xff2bU
						   : 
						  ((0x1adU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfefcU
						    : 
						   ((0x1aeU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfeccU
						     : 
						    ((0x1afU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfe9dU
						      : 
						     ((0x1b0U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x1aU
						       : 
						      ((0x1b1U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x4eU
						        : 
						       ((0x1b2U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x82U
							 : 
							((0x1b3U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xb6U
							  : 
							 ((0x1b4U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xebU
							   : 
							  ((0x1b5U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x11fU
							    : 
							   ((0x1b6U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x153U
							     : 
							    ((0x1b7U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x187U
							      : 
							     ((0x1b8U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffe6U
							       : 
							      ((0x1b9U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffb2U
							        : 
							       ((0x1baU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xff7eU
								 : 
								((0x1bbU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xff4aU
								  : 
								 ((0x1bcU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xff15U
								   : 
								  ((0x1bdU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xfee1U
								    : 
								   ((0x1beU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfeadU
								     : 
								    ((0x1bfU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfe79U
								      : 
								     ((0x1c0U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x1cU
								       : 
								      ((0x1c1U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x55U
								        : 
								       ((0x1c2U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x8fU
									 : 
									((0x1c3U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xc8U
									  : 
									 ((0x1c4U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x102U
									   : 
									  ((0x1c5U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x13bU
									    : 
									   ((0x1c6U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x175U
									     : 
									    ((0x1c7U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x1aeU
									      : 
									     ((0x1c8U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffe4U
									       : 
									      ((0x1c9U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffabU
									        : 
									       ((0x1caU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff71U
										 : 
										((0x1cbU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff38U
										 : 
										((0x1ccU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfefeU
										 : 
										((0x1cdU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfec5U
										 : 
										((0x1ceU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe8bU
										 : 
										((0x1cfU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfe52U
										 : __Vdeeptemp45)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp46 = ((0x1a8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffe9U : __Vdeeptemp64);
    __Vdeeptemp65 = ((0x181U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x3aU : ((0x182U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x61U : ((0x183U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x88U
					      : ((0x184U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xb0U
						  : 
						 ((0x185U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xd7U
						   : 
						  ((0x186U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xfeU
						    : 
						   ((0x187U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x125U
						     : 
						    ((0x188U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffedU
						      : 
						     ((0x189U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffc6U
						       : 
						      ((0x18aU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xff9fU
						        : 
						       ((0x18bU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xff78U
							 : 
							((0x18cU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xff50U
							  : 
							 ((0x18dU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xff29U
							   : 
							  ((0x18eU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xff02U
							    : 
							   ((0x18fU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xfedbU
							     : 
							    ((0x190U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x15U
							      : 
							     ((0x191U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x40U
							       : 
							      ((0x192U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x6bU
							        : 
							       ((0x193U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x96U
								 : 
								((0x194U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xc2U
								  : 
								 ((0x195U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xedU
								   : 
								  ((0x196U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x118U
								    : 
								   ((0x197U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x143U
								     : 
								    ((0x198U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffebU
								      : 
								     ((0x199U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffc0U
								       : 
								      ((0x19aU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xff95U
								        : 
								       ((0x19bU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xff6aU
									 : 
									((0x19cU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xff3eU
									  : 
									 ((0x19dU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xff13U
									   : 
									  ((0x19eU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xfee8U
									    : 
									   ((0x19fU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xfebdU
									     : 
									    ((0x1a0U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x17U
									      : 
									     ((0x1a1U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x46U
									       : 
									      ((0x1a2U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x76U
									        : 
									       ((0x1a3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xa5U
										 : 
										((0x1a4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xd5U
										 : 
										((0x1a5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x104U
										 : 
										((0x1a6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x134U
										 : 
										((0x1a7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x163U
										 : __Vdeeptemp46)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp47 = ((0x180U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x13U : __Vdeeptemp65);
    __Vdeeptemp66 = ((0x159U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffd5U : ((0x15aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffb7U : ((0x15bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xff9aU
						  : 
						 ((0x15cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xff7cU
						   : 
						  ((0x15dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xff5fU
						    : 
						   ((0x15eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xff41U
						     : 
						    ((0x15fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xff24U
						      : 
						     ((0x160U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x10U
						       : 
						      ((0x161U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x30U
						        : 
						       ((0x162U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x51U
							 : 
							((0x163U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x71U
							  : 
							 ((0x164U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x92U
							   : 
							  ((0x165U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xb2U
							    : 
							   ((0x166U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xd3U
							     : 
							    ((0x167U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xf3U
							      : 
							     ((0x168U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfff0U
							       : 
							      ((0x169U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffd0U
							        : 
							       ((0x16aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffafU
								 : 
								((0x16bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xff8fU
								  : 
								 ((0x16cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xff6eU
								   : 
								  ((0x16dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xff4eU
								    : 
								   ((0x16eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xff2dU
								     : 
								    ((0x16fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xff0dU
								      : 
								     ((0x170U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x11U
								       : 
								      ((0x171U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x34U
								        : 
								       ((0x172U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x58U
									 : 
									((0x173U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x7bU
									  : 
									 ((0x174U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xa0U
									   : 
									  ((0x175U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xc3U
									    : 
									   ((0x176U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xe7U
									     : 
									    ((0x177U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x10aU
									      : 
									     ((0x178U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xffefU
									       : 
									      ((0x179U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffccU
									        : 
									       ((0x17aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffa8U
										 : 
										((0x17bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff85U
										 : 
										((0x17cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff60U
										 : 
										((0x17dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff3dU
										 : 
										((0x17eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff19U
										 : 
										((0x17fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfef6U
										 : __Vdeeptemp47)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp48 = ((0x158U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff2U : __Vdeeptemp66);
    __Vdeeptemp67 = ((0x131U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x24U : ((0x132U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x3cU : ((0x133U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x54U
					      : ((0x134U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x6dU
						  : 
						 ((0x135U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x85U
						   : 
						  ((0x136U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x9dU
						    : 
						   ((0x137U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xb5U
						     : 
						    ((0x138U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff4U
						      : 
						     ((0x139U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffdcU
						       : 
						      ((0x13aU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffc4U
						        : 
						       ((0x13bU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffacU
							 : 
							((0x13cU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xff93U
							  : 
							 ((0x13dU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xff7bU
							   : 
							  ((0x13eU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xff63U
							    : 
							   ((0x13fU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xff4bU
							     : 
							    ((0x140U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xdU
							      : 
							     ((0x141U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x27U
							       : 
							      ((0x142U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x42U
							        : 
							       ((0x143U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x5cU
								 : 
								((0x144U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x78U
								  : 
								 ((0x145U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x92U
								   : 
								  ((0x146U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xadU
								    : 
								   ((0x147U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xc7U
								     : 
								    ((0x148U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff3U
								      : 
								     ((0x149U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffd9U
								       : 
								      ((0x14aU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffbeU
								        : 
								       ((0x14bU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffa4U
									 : 
									((0x14cU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xff88U
									  : 
									 ((0x14dU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xff6eU
									   : 
									  ((0x14eU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xff53U
									    : 
									   ((0x14fU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xff39U
									     : 
									    ((0x150U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xeU
									      : 
									     ((0x151U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x2bU
									       : 
									      ((0x152U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x49U
									        : 
									       ((0x153U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x66U
										 : 
										((0x154U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x84U
										 : 
										((0x155U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xa1U
										 : 
										((0x156U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xbfU
										 : 
										((0x157U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xdcU
										 : __Vdeeptemp48)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp49 = ((0x130U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xcU : __Vdeeptemp67);
    __Vdeeptemp68 = ((0x109U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xffe5U : ((0x10aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffd3U : ((0x10bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xffc1U
						  : 
						 ((0x10cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffaeU
						   : 
						  ((0x10dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xff9cU
						    : 
						   ((0x10eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xff8aU
						     : 
						    ((0x10fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xff78U
						      : 
						     ((0x110U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xaU
						       : 
						      ((0x111U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x1eU
						        : 
						       ((0x112U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x32U
							 : 
							((0x113U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x46U
							  : 
							 ((0x114U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x5aU
							   : 
							  ((0x115U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x6eU
							    : 
							   ((0x116U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x82U
							     : 
							    ((0x117U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x96U
							      : 
							     ((0x118U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfff6U
							       : 
							      ((0x119U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffe2U
							        : 
							       ((0x11aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffceU
								 : 
								((0x11bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xffbaU
								  : 
								 ((0x11cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffa6U
								   : 
								  ((0x11dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xff92U
								    : 
								   ((0x11eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xff7eU
								     : 
								    ((0x11fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xff6aU
								      : 
								     ((0x120U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xbU
								       : 
								      ((0x121U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x21U
								        : 
								       ((0x122U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x37U
									 : 
									((0x123U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x4dU
									  : 
									 ((0x124U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x63U
									   : 
									  ((0x125U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x79U
									    : 
									   ((0x126U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x8fU
									     : 
									    ((0x127U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xa5U
									      : 
									     ((0x128U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfff5U
									       : 
									      ((0x129U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffdfU
									        : 
									       ((0x12aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc9U
										 : 
										((0x12bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffb3U
										 : 
										((0x12cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff9dU
										 : 
										((0x12dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff87U
										 : 
										((0x12eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff71U
										 : 
										((0x12fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff5bU
										 : __Vdeeptemp49)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp50 = ((0x108U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff7U : __Vdeeptemp68);
    __Vdeeptemp69 = ((0xe1U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0x16U : ((0xe2U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				  ? 0x25U : ((0xe3U 
					      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					      ? 0x34U
					      : ((0xe4U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x43U
						  : 
						 ((0xe5U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x52U
						   : 
						  ((0xe6U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x61U
						    : 
						   ((0xe7U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x70U
						     : 
						    ((0xe8U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff9U
						      : 
						     ((0xe9U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffeaU
						       : 
						      ((0xeaU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffdbU
						        : 
						       ((0xebU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffccU
							 : 
							((0xecU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xffbdU
							  : 
							 ((0xedU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xffaeU
							   : 
							  ((0xeeU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xff9fU
							    : 
							   ((0xefU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xff90U
							     : 
							    ((0xf0U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 8U
							      : 
							     ((0xf1U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x18U
							       : 
							      ((0xf2U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x29U
							        : 
							       ((0xf3U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x39U
								 : 
								((0xf4U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x4aU
								  : 
								 ((0xf5U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x5aU
								   : 
								  ((0xf6U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x6bU
								    : 
								   ((0xf7U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x7bU
								     : 
								    ((0xf8U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff8U
								      : 
								     ((0xf9U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffe8U
								       : 
								      ((0xfaU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffd7U
								        : 
								       ((0xfbU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffc7U
									 : 
									((0xfcU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xffb6U
									  : 
									 ((0xfdU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xffa6U
									   : 
									  ((0xfeU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xff95U
									    : 
									   ((0xffU 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0xff85U
									     : 
									    ((0x100U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 9U
									      : 
									     ((0x101U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x1bU
									       : 
									      ((0x102U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x2dU
									        : 
									       ((0x103U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x3fU
										 : 
										((0x104U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x52U
										 : 
										((0x105U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x64U
										 : 
										((0x106U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x76U
										 : 
										((0x107U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x88U
										 : __Vdeeptemp50)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp51 = ((0xe0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 7U : __Vdeeptemp69);
    __Vdeeptemp70 = ((0xb9U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff0U : ((0xbaU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffe5U : ((0xbbU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xffdaU
						  : 
						 ((0xbcU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffceU
						   : 
						  ((0xbdU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xffc3U
						    : 
						   ((0xbeU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xffb8U
						     : 
						    ((0xbfU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffadU
						      : 
						     ((0xc0U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 6U
						       : 
						      ((0xc1U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x12U
						        : 
						       ((0xc2U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x1fU
							 : 
							((0xc3U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x2bU
							  : 
							 ((0xc4U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x38U
							   : 
							  ((0xc5U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x44U
							    : 
							   ((0xc6U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x51U
							     : 
							    ((0xc7U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x5dU
							      : 
							     ((0xc8U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfffaU
							       : 
							      ((0xc9U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffeeU
							        : 
							       ((0xcaU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffe1U
								 : 
								((0xcbU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xffd5U
								  : 
								 ((0xccU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffc8U
								   : 
								  ((0xcdU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xffbcU
								    : 
								   ((0xceU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xffafU
								     : 
								    ((0xcfU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffa3U
								      : 
								     ((0xd0U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 6U
								       : 
								      ((0xd1U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x13U
								        : 
								       ((0xd2U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x21U
									 : 
									((0xd3U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x2eU
									  : 
									 ((0xd4U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x3dU
									   : 
									  ((0xd5U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x4aU
									    : 
									   ((0xd6U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x58U
									     : 
									    ((0xd7U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x65U
									      : 
									     ((0xd8U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfffaU
									       : 
									      ((0xd9U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xffedU
									        : 
									       ((0xdaU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdfU
										 : 
										((0xdbU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffd2U
										 : 
										((0xdcU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc3U
										 : 
										((0xddU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffb6U
										 : 
										((0xdeU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffa8U
										 : 
										((0xdfU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xff9bU
										 : __Vdeeptemp51)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp52 = ((0xb8U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffbU : __Vdeeptemp70);
    __Vdeeptemp71 = ((0x91U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xdU : ((0x92U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				 ? 0x16U : ((0x93U 
					     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					     ? 0x1fU
					     : ((0x94U 
						 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						 ? 0x29U
						 : 
						((0x95U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0x32U
						  : 
						 ((0x96U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0x3bU
						   : 
						  ((0x97U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x44U
						    : 
						   ((0x98U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfffcU
						     : 
						    ((0x99U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff3U
						      : 
						     ((0x9aU 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xffeaU
						       : 
						      ((0x9bU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffe1U
						        : 
						       ((0x9cU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffd7U
							 : 
							((0x9dU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xffceU
							  : 
							 ((0x9eU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xffc5U
							   : 
							  ((0x9fU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xffbcU
							    : 
							   ((0xa0U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 5U
							     : 
							    ((0xa1U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xfU
							      : 
							     ((0xa2U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0x19U
							       : 
							      ((0xa3U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x23U
							        : 
							       ((0xa4U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x2eU
								 : 
								((0xa5U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x38U
								  : 
								 ((0xa6U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x42U
								   : 
								  ((0xa7U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x4cU
								    : 
								   ((0xa8U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfffbU
								     : 
								    ((0xa9U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff1U
								      : 
								     ((0xaaU 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xffe7U
								       : 
								      ((0xabU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffddU
								        : 
								       ((0xacU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffd2U
									 : 
									((0xadU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xffc8U
									  : 
									 ((0xaeU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xffbeU
									   : 
									  ((0xafU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xffb4U
									    : 
									   ((0xb0U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 5U
									     : 
									    ((0xb1U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x10U
									      : 
									     ((0xb2U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x1bU
									       : 
									      ((0xb3U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x26U
									        : 
									       ((0xb4U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x32U
										 : 
										((0xb5U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x3dU
										 : 
										((0xb6U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x48U
										 : 
										((0xb7U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x53U
										 : __Vdeeptemp52)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp53 = ((0x90U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 4U : __Vdeeptemp71);
    __Vdeeptemp72 = ((0x69U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfff6U : ((0x6aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xffefU : ((0x6bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xffe8U
						  : 
						 ((0x6cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffe1U
						   : 
						  ((0x6dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xffdaU
						    : 
						   ((0x6eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xffd3U
						     : 
						    ((0x6fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffccU
						      : 
						     ((0x70U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 3U
						       : 
						      ((0x71U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xaU
						        : 
						       ((0x72U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0x12U
							 : 
							((0x73U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0x19U
							  : 
							 ((0x74U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x22U
							   : 
							  ((0x75U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x29U
							    : 
							   ((0x76U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x31U
							     : 
							    ((0x77U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x38U
							      : 
							     ((0x78U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfffdU
							       : 
							      ((0x79U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xfff6U
							        : 
							       ((0x7aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xffeeU
								 : 
								((0x7bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xffe7U
								  : 
								 ((0x7cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffdeU
								   : 
								  ((0x7dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xffd7U
								    : 
								   ((0x7eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xffcfU
								     : 
								    ((0x7fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffc8U
								      : 
								     ((0x80U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 4U
								       : 
								      ((0x81U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xcU
								        : 
								       ((0x82U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0x15U
									 : 
									((0x83U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x1dU
									  : 
									 ((0x84U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x26U
									   : 
									  ((0x85U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x2eU
									    : 
									   ((0x86U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x37U
									     : 
									    ((0x87U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x3fU
									      : 
									     ((0x88U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfffcU
									       : 
									      ((0x89U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xfff4U
									        : 
									       ((0x8aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffebU
										 : 
										((0x8bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffe3U
										 : 
										((0x8cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdaU
										 : 
										((0x8dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffd2U
										 : 
										((0x8eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc9U
										 : 
										((0x8fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffc1U
										 : __Vdeeptemp53)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp54 = ((0x68U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffdU : __Vdeeptemp72);
    __Vdeeptemp73 = ((0x41U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 7U : ((0x42U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
			       ? 0xdU : ((0x43U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					  ? 0x12U : 
					 ((0x44U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					   ? 0x19U : 
					  ((0x45U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					    ? 0x1eU
					    : ((0x46U 
						== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					        ? 0x24U
					        : (
						   (0x47U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0x29U
						    : 
						   ((0x48U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xfffeU
						     : 
						    ((0x49U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xfff9U
						      : 
						     ((0x4aU 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0xfff3U
						       : 
						      ((0x4bU 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0xffeeU
						        : 
						       ((0x4cU 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xffe7U
							 : 
							((0x4dU 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xffe2U
							  : 
							 ((0x4eU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xffdcU
							   : 
							  ((0x4fU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xffd7U
							    : 
							   ((0x50U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 3U
							     : 
							    ((0x51U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 9U
							      : 
							     ((0x52U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfU
							       : 
							      ((0x53U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0x15U
							        : 
							       ((0x54U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0x1cU
								 : 
								((0x55U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0x22U
								  : 
								 ((0x56U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0x28U
								   : 
								  ((0x57U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0x2eU
								    : 
								   ((0x58U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xfffdU
								     : 
								    ((0x59U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xfff7U
								      : 
								     ((0x5aU 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0xfff1U
								       : 
								      ((0x5bU 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0xffebU
								        : 
								       ((0x5cU 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xffe4U
									 : 
									((0x5dU 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0xffdeU
									  : 
									 ((0x5eU 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0xffd8U
									   : 
									  ((0x5fU 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0xffd2U
									    : 
									   ((0x60U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 3U
									     : 
									    ((0x61U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0xaU
									      : 
									     ((0x62U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0x11U
									       : 
									      ((0x63U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0x18U
									        : 
									       ((0x64U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x1fU
										 : 
										((0x65U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x26U
										 : 
										((0x66U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x2dU
										 : 
										((0x67U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0x34U
										 : __Vdeeptemp54)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp55 = ((0x40U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 2U : __Vdeeptemp73);
    __Vdeeptemp74 = ((0x19U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffaU : ((0x1aU == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
				    ? 0xfff6U : ((0x1bU 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 0xfff2U
						  : 
						 ((0x1cU 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xffedU
						   : 
						  ((0x1dU 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xffe9U
						    : 
						   ((0x1eU 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0xffe5U
						     : 
						    ((0x1fU 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0xffe1U
						      : 
						     ((0x20U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 2U
						       : 
						      ((0x21U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 6U
						        : 
						       ((0x22U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xbU
							 : 
							((0x23U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfU
							  : 
							 ((0x24U 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0x15U
							   : 
							  ((0x25U 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0x19U
							    : 
							   ((0x26U 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0x1eU
							     : 
							    ((0x27U 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0x22U
							      : 
							     ((0x28U 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xfffeU
							       : 
							      ((0x29U 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xfffaU
							        : 
							       ((0x2aU 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 0xfff5U
								 : 
								((0x2bU 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 0xfff1U
								  : 
								 ((0x2cU 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xffebU
								   : 
								  ((0x2dU 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xffe7U
								    : 
								   ((0x2eU 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0xffe2U
								     : 
								    ((0x2fU 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0xffdeU
								      : 
								     ((0x30U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 2U
								       : 
								      ((0x31U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 7U
								        : 
								       ((0x32U 
									 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									 ? 0xcU
									 : 
									((0x33U 
									  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									  ? 0x11U
									  : 
									 ((0x34U 
									   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									   ? 0x17U
									   : 
									  ((0x35U 
									    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									    ? 0x1cU
									    : 
									   ((0x36U 
									     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									     ? 0x21U
									     : 
									    ((0x37U 
									      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									      ? 0x26U
									      : 
									     ((0x38U 
									       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									       ? 0xfffeU
									       : 
									      ((0x39U 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
									        ? 0xfff9U
									        : 
									       ((0x3aU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xfff4U
										 : 
										((0x3bU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffefU
										 : 
										((0x3cU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffe9U
										 : 
										((0x3dU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffe4U
										 : 
										((0x3eU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdfU
										 : 
										((0x3fU 
										== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
										 ? 0xffdaU
										 : __Vdeeptemp55)))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp56 = ((0x18U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
		      ? 0xfffeU : __Vdeeptemp74);
    vlTOPp->msm6295__DOT__ADPCM_DATA = ((0U == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
					 ? 2U : ((1U 
						  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						  ? 6U
						  : 
						 ((2U 
						   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						   ? 0xaU
						   : 
						  ((3U 
						    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						    ? 0xeU
						    : 
						   ((4U 
						     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						     ? 0x12U
						     : 
						    ((5U 
						      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						      ? 0x16U
						      : 
						     ((6U 
						       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						       ? 0x1aU
						       : 
						      ((7U 
							== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
						        ? 0x1eU
						        : 
						       ((8U 
							 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							 ? 0xfffeU
							 : 
							((9U 
							  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							  ? 0xfffaU
							  : 
							 ((0xaU 
							   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							   ? 0xfff6U
							   : 
							  ((0xbU 
							    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							    ? 0xfff2U
							    : 
							   ((0xcU 
							     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							     ? 0xffeeU
							     : 
							    ((0xdU 
							      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							      ? 0xffeaU
							      : 
							     ((0xeU 
							       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							       ? 0xffe6U
							       : 
							      ((0xfU 
								== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
							        ? 0xffe2U
							        : 
							       ((0x10U 
								 == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								 ? 2U
								 : 
								((0x11U 
								  == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								  ? 6U
								  : 
								 ((0x12U 
								   == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								   ? 0xaU
								   : 
								  ((0x13U 
								    == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								    ? 0xeU
								    : 
								   ((0x14U 
								     == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								     ? 0x13U
								     : 
								    ((0x15U 
								      == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								      ? 0x17U
								      : 
								     ((0x16U 
								       == (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								       ? 0x1bU
								       : 
								      ((0x17U 
									== (IData)(vlTOPp->msm6295__DOT__ADPCM_ADDR))
								        ? 0x1fU
								        : __Vdeeptemp56))))))))))))))))))))))));
    vlTOPp->msm6295__DOT__ADPCM_LUT_ROM__DOT__DATA 
	= vlTOPp->msm6295__DOT__ADPCM_DATA;
}

void Vmsm5205::_settle__TOP__6(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_settle__TOP__6\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->msm6295__DOT__CPU_DI = vlTOPp->CPU_DI;
    vlTOPp->CPU_DI_DBG = vlTOPp->CPU_DI;
    vlTOPp->msm6295__DOT__CPU_DI_DBG = vlTOPp->CPU_DI_DBG;
}

void Vmsm5205::_eval(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_eval\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RESET_N)) & (IData)(vlTOPp->__Vclklast__TOP__RESET_N)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RESET_N = vlTOPp->RESET_N;
}

void Vmsm5205::_eval_initial(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_eval_initial\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RESET_N = vlTOPp->RESET_N;
    vlTOPp->_initial__TOP__4(vlSymsp);
}

void Vmsm5205::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::final\n"); );
    // Variables
    Vmsm5205__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmsm5205::_eval_settle(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_eval_settle\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__6(vlSymsp);
}

VL_INLINE_OPT QData Vmsm5205::_change_request(Vmsm5205__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_change_request\n"); );
    Vmsm5205* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmsm5205::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((RESET_N & 0xfeU))) {
	Verilated::overWidthError("RESET_N");}
    if (VL_UNLIKELY((CLK & 0xfeU))) {
	Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((CS_N & 0xfeU))) {
	Verilated::overWidthError("CS_N");}
    if (VL_UNLIKELY((RD_N & 0xfeU))) {
	Verilated::overWidthError("RD_N");}
    if (VL_UNLIKELY((WR_N & 0xfeU))) {
	Verilated::overWidthError("WR_N");}
    if (VL_UNLIKELY((SS & 0xfeU))) {
	Verilated::overWidthError("SS");}
}
#endif // VL_DEBUG

void Vmsm5205::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmsm5205::_ctor_var_reset\n"); );
    // Body
    RESET_N = VL_RAND_RESET_I(1);
    CLK = VL_RAND_RESET_I(1);
    CPU_DI = VL_RAND_RESET_I(8);
    CPU_DO = VL_RAND_RESET_I(8);
    CS_N = VL_RAND_RESET_I(1);
    RD_N = VL_RAND_RESET_I(1);
    WR_N = VL_RAND_RESET_I(1);
    SS = VL_RAND_RESET_I(1);
    ROM_ADDR = VL_RAND_RESET_I(18);
    ROM_DATA = VL_RAND_RESET_I(8);
    SOUND_OUT = VL_RAND_RESET_I(21);
    V1_STATE = VL_RAND_RESET_I(4);
    MAIN_STATE = VL_RAND_RESET_I(3);
    V1_SA = VL_RAND_RESET_I(18);
    V1_EA = VL_RAND_RESET_I(18);
    V1_GATE = VL_RAND_RESET_I(1);
    WR_N_RISING = VL_RAND_RESET_I(1);
    WRITE_STATE = VL_RAND_RESET_I(1);
    CPU_DI_DBG = VL_RAND_RESET_I(8);
    V1_NIB = VL_RAND_RESET_I(4);
    V1_SAMP_OUT = VL_RAND_RESET_I(17);
    V1_SIGNAL = VL_RAND_RESET_I(13);
    SAMP_PULSE = VL_RAND_RESET_I(1);
    msm6295__DOT__RESET_N = VL_RAND_RESET_I(1);
    msm6295__DOT__CLK = VL_RAND_RESET_I(1);
    msm6295__DOT__CPU_DI = VL_RAND_RESET_I(8);
    msm6295__DOT__CPU_DO = VL_RAND_RESET_I(8);
    msm6295__DOT__CS_N = VL_RAND_RESET_I(1);
    msm6295__DOT__RD_N = VL_RAND_RESET_I(1);
    msm6295__DOT__WR_N = VL_RAND_RESET_I(1);
    msm6295__DOT__SS = VL_RAND_RESET_I(1);
    msm6295__DOT__ROM_ADDR = VL_RAND_RESET_I(18);
    msm6295__DOT__ROM_DATA = VL_RAND_RESET_I(8);
    msm6295__DOT__SOUND_OUT = VL_RAND_RESET_I(21);
    msm6295__DOT__V1_STATE = VL_RAND_RESET_I(4);
    msm6295__DOT__MAIN_STATE = VL_RAND_RESET_I(3);
    msm6295__DOT__V1_SA = VL_RAND_RESET_I(18);
    msm6295__DOT__V1_EA = VL_RAND_RESET_I(18);
    msm6295__DOT__V1_GATE = VL_RAND_RESET_I(1);
    msm6295__DOT__WR_N_RISING = VL_RAND_RESET_I(1);
    msm6295__DOT__WRITE_STATE = VL_RAND_RESET_I(1);
    msm6295__DOT__CPU_DI_DBG = VL_RAND_RESET_I(8);
    msm6295__DOT__V1_NIB = VL_RAND_RESET_I(4);
    msm6295__DOT__V1_SAMP_OUT = VL_RAND_RESET_I(17);
    msm6295__DOT__V1_SIGNAL = VL_RAND_RESET_I(13);
    msm6295__DOT__SAMP_PULSE = VL_RAND_RESET_I(1);
    msm6295__DOT__V1_VOL_MUL = VL_RAND_RESET_I(6);
    msm6295__DOT__PHRASE_SEL = VL_RAND_RESET_I(7);
    msm6295__DOT__WR_N_1 = VL_RAND_RESET_I(1);
    msm6295__DOT__V1_INDEX = VL_RAND_RESET_I(19);
    msm6295__DOT__V1_ATTEN = VL_RAND_RESET_I(4);
    msm6295__DOT__COUNTER = VL_RAND_RESET_I(10);
    msm6295__DOT__V1_STEP = VL_RAND_RESET_I(7);
    msm6295__DOT__ADPCM_ADDR = VL_RAND_RESET_I(12);
    msm6295__DOT__ADPCM_DATA = VL_RAND_RESET_I(16);
    msm6295__DOT__ADPCM_LUT_ROM__DOT__ADDR = VL_RAND_RESET_I(12);
    msm6295__DOT__ADPCM_LUT_ROM__DOT__DATA = VL_RAND_RESET_I(16);
}
