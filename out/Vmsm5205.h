// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vmsm5205_H_
#define _Vmsm5205_H_

#include "verilated.h"

class Vmsm5205__Syms;

//----------

VL_MODULE(Vmsm5205) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint  all: 
    VL_IN8(RESET_N,0,0);
    VL_IN8(CLK,0,0);
    VL_INOUT8(CPU_DI,7,0);
    VL_OUT8(CPU_DO,7,0);
    VL_IN8(CS_N,0,0);
    VL_IN8(RD_N,0,0);
    VL_IN8(WR_N,0,0);
    VL_IN8(SS,0,0);
    VL_IN8(ROM_DATA,7,0);
    VL_OUT8(V1_STATE,3,0);
    VL_OUT8(MAIN_STATE,2,0);
    VL_OUT8(V1_GATE,0,0);
    VL_OUT8(WR_N_RISING,0,0);
    VL_OUT8(WRITE_STATE,0,0);
    VL_OUT8(CPU_DI_DBG,7,0);
    VL_OUT8(V1_NIB,3,0);
    VL_OUT8(SAMP_PULSE,0,0);
    VL_OUT16(V1_SIGNAL,12,0);
    VL_OUT(ROM_ADDR,17,0);
    VL_OUT(SOUND_OUT,20,0);
    VL_OUT(V1_SA,17,0);
    VL_OUT(V1_EA,17,0);
    VL_OUT(V1_SAMP_OUT,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(msm6295__DOT__RESET_N,0,0);
    VL_SIG8(msm6295__DOT__CLK,0,0);
    VL_SIG8(msm6295__DOT__CPU_DI,7,0);
    VL_SIG8(msm6295__DOT__CPU_DO,7,0);
    VL_SIG8(msm6295__DOT__CS_N,0,0);
    VL_SIG8(msm6295__DOT__RD_N,0,0);
    VL_SIG8(msm6295__DOT__WR_N,0,0);
    VL_SIG8(msm6295__DOT__SS,0,0);
    VL_SIG8(msm6295__DOT__ROM_DATA,7,0);
    VL_SIG8(msm6295__DOT__V1_STATE,3,0);
    VL_SIG8(msm6295__DOT__MAIN_STATE,2,0);
    VL_SIG8(msm6295__DOT__V1_GATE,0,0);
    VL_SIG8(msm6295__DOT__WR_N_RISING,0,0);
    VL_SIG8(msm6295__DOT__WRITE_STATE,0,0);
    VL_SIG8(msm6295__DOT__CPU_DI_DBG,7,0);
    VL_SIG8(msm6295__DOT__V1_NIB,3,0);
    VL_SIG8(msm6295__DOT__SAMP_PULSE,0,0);
    VL_SIG8(msm6295__DOT__V1_VOL_MUL,5,0);
    VL_SIG8(msm6295__DOT__PHRASE_SEL,6,0);
    VL_SIG8(msm6295__DOT__WR_N_1,0,0);
    VL_SIG8(msm6295__DOT__V1_ATTEN,3,0);
    VL_SIG8(msm6295__DOT__V1_STEP,6,0);
    VL_SIG16(msm6295__DOT__V1_SIGNAL,12,0);
    VL_SIG16(msm6295__DOT__COUNTER,9,0);
    VL_SIG16(msm6295__DOT__ADPCM_ADDR,11,0);
    VL_SIG16(msm6295__DOT__ADPCM_DATA,15,0);
    VL_SIG16(msm6295__DOT__ADPCM_LUT_ROM__DOT__ADDR,11,0);
    VL_SIG16(msm6295__DOT__ADPCM_LUT_ROM__DOT__DATA,15,0);
    VL_SIG(msm6295__DOT__ROM_ADDR,17,0);
    VL_SIG(msm6295__DOT__SOUND_OUT,20,0);
    VL_SIG(msm6295__DOT__V1_SA,17,0);
    VL_SIG(msm6295__DOT__V1_EA,17,0);
    VL_SIG(msm6295__DOT__V1_SAMP_OUT,16,0);
    VL_SIG(msm6295__DOT__V1_INDEX,18,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Begin mtask footprint  all: 
    VL_SIG8(__Vclklast__TOP__CLK,0,0);
    VL_SIG8(__Vclklast__TOP__RESET_N,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vmsm5205__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmsm5205);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vmsm5205(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vmsm5205();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vmsm5205__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vmsm5205__Syms* symsp, bool first);
  private:
    static QData _change_request(Vmsm5205__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vmsm5205__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vmsm5205__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vmsm5205__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vmsm5205__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vmsm5205__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__4(Vmsm5205__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vmsm5205__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vmsm5205__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(Vmsm5205__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
