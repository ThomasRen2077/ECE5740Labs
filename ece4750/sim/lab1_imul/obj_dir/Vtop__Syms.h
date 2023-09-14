// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_top.h"
#include "Vtop___024unit.h"
#include "Vtop_lab1_imul_IntMulAlt.h"
#include "Vtop_vc_TestRandDelaySource__pi1.h"
#include "Vtop_vc_TestRandDelaySink__P20_PB1c.h"
#include "Vtop_vc_Trace.h"
#include "Vtop_vc_TestSource__P40_PB1c.h"
#include "Vtop_vc_TestRandDelay__P40.h"
#include "Vtop_vc_SimpleAdder__P20.h"
#include "Vtop_vc_TestRandDelay__P20.h"
#include "Vtop_vc_TestSink__P20_PB1c.h"
#include "Vtop_vc_EnResetReg__P5_PBz1.h"
#include "Vtop_vc_EnResetReg__P20.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop___024unit                 TOP____024unit;
    Vtop_top                       TOP__top;
    Vtop_lab1_imul_IntMulAlt       TOP__top__imul;
    Vtop_vc_SimpleAdder__P20       TOP__top__imul__Add;
    Vtop_vc_Trace                  TOP__top__imul__vc_trace;
    Vtop_vc_TestRandDelaySink__P20_PB1c TOP__top__sink;
    Vtop_vc_TestRandDelay__P20     TOP__top__sink__msg_delay;
    Vtop_vc_EnResetReg__P20        TOP__top__sink__msg_delay__rand_delay_reg;
    Vtop_vc_TestSink__P20_PB1c     TOP__top__sink__sink;
    Vtop_vc_EnResetReg__P5_PBz1    TOP__top__sink__sink__index_reg;
    Vtop_vc_TestRandDelaySource__pi1 TOP__top__src;
    Vtop_vc_TestRandDelay__P40     TOP__top__src__msg_delay;
    Vtop_vc_EnResetReg__P20        TOP__top__src__msg_delay__rand_delay_reg;
    Vtop_vc_TestSource__P40_PB1c   TOP__top__src__src;
    Vtop_vc_EnResetReg__P5_PBz1    TOP__top__src__src__index_reg;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[191];

    // SCOPE NAMES
    VerilatedScope __Vscope_top;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
