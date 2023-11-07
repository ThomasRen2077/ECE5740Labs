// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[4968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[4999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
        = ((0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
            ? ((0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                ? ((8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU])
                    : ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]))
                : ((8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU])
                    : ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U])))
            : ((0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                ? ((8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U])
                    : ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]))
                : ((8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[3U]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[2U])
                    : ((4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[1U]
                        : vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0U]))));
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[6985].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[6986].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[6979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__cache0_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__cache0_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_val))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_val 
            = vlSelf->top__DOT__cache0_resp_val;
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received 
        = ((0U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg)) 
           & ((1U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg)) 
              & ((IData)(vlSelf->top__DOT__cache0_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache0_resp_rdy))));
    if (((IData)(vlSelf->top__DOT__cache0_req_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_req_rdy))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_rdy 
            = vlSelf->top__DOT__cache0_req_rdy;
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__spill_one_word_done 
        = ((0U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg)) 
           & ((1U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg)) 
              & (IData)(vlSelf->top__DOT__cache0_req_rdy)));
    if ((0U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
        vlSelf->top__DOT__cache0_req_val = 0U;
        vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_req_sent = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
        vlSelf->top__DOT__cache0_req_val = 1U;
        vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_req_sent = 0U;
    } else {
        vlSelf->top__DOT__cache0_req_val = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_req_done)));
        vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_req_sent 
            = ((IData)(vlSelf->top__DOT__cache0_req_val) 
               & (IData)(vlSelf->top__DOT__cache0_req_rdy));
    }
    if ((0U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
            if (((IData)(vlSelf->top__DOT__cache0_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache0_resp_rdy))) {
                vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache0_resp_val) 
                          & (IData)(vlSelf->top__DOT__cache0_resp_rdy))))) {
                vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache0_req_val) 
                 & (IData)(vlSelf->top__DOT__cache0_req_rdy))) {
                vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache0_req_val) 
                          & (IData)(vlSelf->top__DOT__cache0_req_rdy))))) {
                vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache0_req_rdy)))) {
                vlSymsp->__Vcoverage[5241].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__cache0_req_rdy) {
                vlSymsp->__Vcoverage[5240].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_val 
            = vlSelf->top__DOT__src__DOT__src_val;
    }
    vlSelf->top__DOT__mngr2proc_val = ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                              & (0U 
                                                 == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                           & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M)))) {
        vlSymsp->__Vcoverage[6275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[6277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[6278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[6279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[6280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[6281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[6282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[6283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[6284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[6285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[6286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[6287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[6288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[6289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[6290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[6291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[6292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[6293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[6294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[6295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[6296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[6297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[6298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[6299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[6300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[6301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[6302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[6303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[6304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[6305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[6306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[6307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[6308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[6309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[6310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[6311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[6312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[6313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[6314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[6315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[6316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[6317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[6318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[6319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[6320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[6321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp0_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp));
    if (((IData)(vlSelf->top__DOT__cache1_req_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__cache1_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache1_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__cache1_resp_val;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M)))) {
        vlSymsp->__Vcoverage[6322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[6324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[6325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[6326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[6327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[6328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[6329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[6330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[6331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[6332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[6333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[6334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[6335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[6336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[6337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[6338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[6339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[6340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[6341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[6342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[6343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[6344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[6345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[6346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp1_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp));
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[5219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[5220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if (((vlSelf->top__DOT__cache0_req_msg[1U] ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if (((vlSelf->top__DOT__cache0_req_msg[0U] ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[6914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[6980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[4024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__spill_one_word_done) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[4022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__spill_one_word_done 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__spill_one_word_done;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[4023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__refill_one_word_req_sent 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->top__DOT__cache0_req_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_req_val))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_val 
            = vlSelf->top__DOT__cache0_req_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__cache0_req_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    if ((((IData)(vlSelf->top__DOT__cache0_resp_val) 
          & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                     >> 0x2cU))) ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__cache_resp_type))) {
        vlSymsp->__Vcoverage[5214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__cache_resp_type 
            = ((IData)(vlSelf->top__DOT__cache0_resp_val) 
               & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                          >> 0x2cU)));
    }
    if (vlSelf->top__DOT__cache0_resp_val) {
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg);
        vlSelf->top__DOT__cache0_resp_msg = vlSelf->top__DOT__mem__DOT__mem_memresp0_msg;
    } else {
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data = 0U;
        vlSelf->top__DOT__cache0_resp_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg)))) {
        vlSymsp->__Vcoverage[5422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[5423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[5424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[5425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[5426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[5427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[5428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[5429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[5430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[5431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[5432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[5433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[5434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[5435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[5436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[5437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[5438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[5439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[5440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[5453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[5454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[5455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[5456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[5457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[5458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[5459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[5460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[5461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[5462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[5463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[5464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[5465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[5466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[5467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[5468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (vlSelf->top__DOT__cache1_resp_val) {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__dmem_respstream_msg = vlSelf->top__DOT__mem__DOT__mem_memresp1_msg;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg);
    } else {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__dmem_respstream_msg = 0ULL;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg)))) {
        vlSymsp->__Vcoverage[5471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[5472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[5473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[5474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[5480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[5481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[5482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[5483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[5488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[5489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[5504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[5505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[5506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[5507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[5508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[5509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[5510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[5511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[5512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[5513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[5514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[5515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[5516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[5517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__cache0_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5626].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache0_req_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5627].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__cache0_req_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5629].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__cache0_req_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5630].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
                = ((IData)(vlSelf->top__DOT__cache0_req_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
            = ((IData)(vlSelf->top__DOT__cache0_req_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__cache0_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[5262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len 
            = (3U & vlSelf->top__DOT__cache0_req_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__cache0_req_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
            = ((vlSelf->top__DOT__cache0_req_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__cache0_req_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
            = vlSelf->top__DOT__cache0_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
            = vlSelf->top__DOT__cache0_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = vlSelf->top__DOT__cache0_req_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = vlSelf->top__DOT__cache0_req_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[7262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[7263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[7264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[7265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[7251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[7252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[7253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache0_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache0_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_msg)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache0_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__dmem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dmem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_msg)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__dmem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2727].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2731].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[6526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[6527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[6528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[5294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[5326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[5340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
