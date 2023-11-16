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
#include "Vtop_lab3_cache_CacheAltDpath.h"
#include "Vtop_vc_Mux2.h"
#include "Vtop_vc_EnResetReg__P20.h"
#include "Vtop_vc_Mux2__P20.h"
#include "Vtop_vc_Mux2__P5.h"
#include "Vtop_vc_Mux2__P15.h"
#include "Vtop_vc_Mux2__P200.h"
#include "Vtop_vc_Mux2__P10.h"
#include "Vtop_lab3_cache_Mux16__P20.h"

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
    Vtop_lab3_cache_CacheAltDpath  TOP__top__DUT;
    Vtop_vc_Mux2                   TOP__top__DUT__FLush_dirty_mux;
    Vtop_vc_Mux2__P20              TOP__top__DUT__Spill_or_Refill_Mux;
    Vtop_vc_Mux2__P15              TOP__top__DUT__Spill_tag_mux;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__cache_request_addr_reg_M0;
    Vtop_vc_EnResetReg__P20        TOP__top__DUT__cache_request_data_reg_M0;
    Vtop_vc_Mux2__P200             TOP__top__DUT__darray_write_mux;
    Vtop_lab3_cache_Mux16__P20     TOP__top__DUT__output_mux;
    Vtop_vc_Mux2__P5               TOP__top__DUT__spill_index_mux;
    Vtop_vc_Mux2__P200             TOP__top__DUT__way_output_sel_mux;
    Vtop_vc_Mux2__P10              TOP__top__DUT__word_en_mux;
    Vtop_vc_Mux2__P20              TOP__top__DUT__z6b_mux;

    // COVERAGE
    std::atomic<uint32_t> __Vcoverage[2031];

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
