// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _Vmsm5205__Syms_H_
#define _Vmsm5205__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmsm5205.h"

// SYMS CLASS
class Vmsm5205__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmsm5205*                      TOPp;
    
    // CREATORS
    Vmsm5205__Syms(Vmsm5205* topp, const char* namep);
    ~Vmsm5205__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
