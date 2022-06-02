// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDemo04_USint.h for the primary calling header

#ifndef VERILATED_VDEMO04_USINT_FIXTO_H_
#define VERILATED_VDEMO04_USINT_FIXTO_H_  // guard

#include "verilated.h"

class VDemo04_USint__Syms;
VL_MODULE(VDemo04_USint_fixTo) {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT16(dout,15,0);
    VL_IN(__PVT__din,31,0);

    // INTERNAL VARIABLES
    VDemo04_USint__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VDemo04_USint_fixTo(const char* name);
    ~VDemo04_USint_fixTo();
    VL_UNCOPYABLE(VDemo04_USint_fixTo);

    // INTERNAL METHODS
    void __Vconfigure(VDemo04_USint__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
