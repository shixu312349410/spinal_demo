// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDemo04_USint.h for the primary calling header

#ifndef VERILATED_VDEMO04_USINT___024ROOT_H_
#define VERILATED_VDEMO04_USINT___024ROOT_H_  // guard

#include "verilated.h"

class VDemo04_USint__Syms;
class VDemo04_USint_Demo04_USint;

VL_MODULE(VDemo04_USint___024root) {
  public:
    // CELLS
    VDemo04_USint_Demo04_USint* Demo04_USint;

    // INTERNAL VARIABLES
    VDemo04_USint__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VDemo04_USint___024root(const char* name);
    ~VDemo04_USint___024root();
    VL_UNCOPYABLE(VDemo04_USint___024root);

    // INTERNAL METHODS
    void __Vconfigure(VDemo04_USint__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
