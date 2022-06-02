// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDEMO04_USINT__SYMS_H_
#define VERILATED_VDEMO04_USINT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDemo04_USint.h"

// INCLUDE MODULE CLASSES
#include "VDemo04_USint___024root.h"
#include "VDemo04_USint_Demo04_USint.h"
#include "VDemo04_USint_fixTo.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VDemo04_USint__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDemo04_USint* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDemo04_USint___024root        TOP;
    VDemo04_USint_Demo04_USint     TOP__Demo04_USint;
    VDemo04_USint_fixTo            TOP__Demo04_USint__fixTo_1;

    // SCOPE NAMES
    VerilatedScope __Vscope_Demo04_USint__fixTo_1;

    // CONSTRUCTORS
    VDemo04_USint__Syms(VerilatedContext* contextp, const char* namep, VDemo04_USint* modelp);
    ~VDemo04_USint__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
