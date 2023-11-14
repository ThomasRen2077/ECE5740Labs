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
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag))) {
        vlSymsp->__Vcoverage[4562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag 
            = ((0x1effffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag))) {
        vlSymsp->__Vcoverage[4563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag 
            = ((0x1dffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag))) {
        vlSymsp->__Vcoverage[4564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag 
            = ((0x1bffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag))) {
        vlSymsp->__Vcoverage[4565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag 
            = ((0x17ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag))) {
        vlSymsp->__Vcoverage[4566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag 
            = ((0xfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__Spill_tag) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
        = ((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__Spill_tag 
            << 0xbU) | (0x7c0U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in0) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1))) {
        vlSymsp->__Vcoverage[4922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in1) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2))) {
        vlSymsp->__Vcoverage[4954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in2) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3))) {
        vlSymsp->__Vcoverage[4986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in3) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[5018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[5050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU] 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
        = ((0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
            ? ((0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                ? ((8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xfU]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xeU])
                    : ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xdU]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xcU]))
                : ((8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xbU]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0xaU])
                    : ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[9U]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[8U])))
            : ((0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                ? ((8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[7U]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[6U])
                    : ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[5U]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[4U]))
                : ((8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                    ? ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[3U]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[2U])
                    : ((4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_request_addr_M0)
                        ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[1U]
                        : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__data_array_output[0U]))));
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[4033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__cache1_resp_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_resp_rdy))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_rdy 
            = vlSelf->top__DOT__cache1_resp_rdy;
    }
    if ((0U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__state_reg))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_resp_val) 
                          & (IData)(vlSelf->top__DOT__cache1_resp_rdy))))) {
                vlSymsp->__Vcoverage[5449].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache1_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache1_resp_rdy))) {
                vlSymsp->__Vcoverage[5448].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache1_req_val) 
                 & (IData)(vlSelf->top__DOT__cache1_req_rdy))) {
                vlSymsp->__Vcoverage[5446].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_req_val) 
                          & (IData)(vlSelf->top__DOT__cache1_req_rdy))))) {
                vlSymsp->__Vcoverage[5447].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT__state_reg))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_req_val) 
                          & (IData)(vlSelf->top__DOT__cache1_req_rdy))))) {
                vlSymsp->__Vcoverage[5439].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache1_req_val) 
                 & (IData)(vlSelf->top__DOT__cache1_req_rdy))) {
                vlSymsp->__Vcoverage[5438].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
           & ((IData)(vlSelf->top__DOT__cache1_resp_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[4032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_req_sent 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[4031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__spill_one_word_done 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done;
    }
    if (((IData)(vlSelf->top__DOT__cache1_req_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_req_val))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_val 
            = vlSelf->top__DOT__cache1_req_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__cache1_req_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    if (vlSelf->top__DOT__cache0_resp_val) {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__imem_respstream_msg = vlSelf->top__DOT__mem__DOT__mem_memresp0_msg;
    } else {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__imem_respstream_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg)))) {
        vlSymsp->__Vcoverage[5627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[5628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[5629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[5630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[5631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[5632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[5633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[5634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[5635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[5636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[5637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[5638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[5639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[5640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[5641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[5642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[5643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[5644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[5645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[5658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[5659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[5660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[5661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[5662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[5663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[5664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[5665].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[5666].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[5667].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[5668].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[5669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[5670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[5671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[5672].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[5673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((((IData)(vlSelf->top__DOT__cache1_resp_val) 
          & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                     >> 0x2cU))) ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__cache_resp_type))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrl__DOT____Vtogcov__cache_resp_type 
            = ((IData)(vlSelf->top__DOT__cache1_resp_val) 
               & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                          >> 0x2cU)));
    }
    if (vlSelf->top__DOT__cache1_resp_val) {
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg);
        vlSelf->top__DOT__cache1_resp_msg = vlSelf->top__DOT__mem__DOT__mem_memresp1_msg;
    } else {
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test = 0U;
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data = 0U;
        vlSelf->top__DOT__cache1_resp_msg = 0ULL;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg)))) {
        vlSymsp->__Vcoverage[5676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[5677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[5678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[5679].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[5680].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[5681].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[5682].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[5683].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[5684].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[5685].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[5686].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[5687].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[5688].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[5689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[5690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[5691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[5692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[5693].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[5694].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[5695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[5696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[5697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[5698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[5699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[5700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[5701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[5702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[5703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[5704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[5705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[5706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[5707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[5708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[5709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[5710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[5711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[5712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[5713].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[5714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[5715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[5716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[5717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[5718].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[5719].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[5720].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[5721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[5722].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (8U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xffefU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x20U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x40U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x80U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x100U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x200U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x400U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x800U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xefffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4711].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4712].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[4507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_initial_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
        = (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_initial_addr 
           + (0x3cU & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_counter) 
                       << 2U)));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    vlSelf->top__DOT__dmem_respstream_msg = ((0x700000000000ULL 
                                              & vlSelf->top__DOT__dmem_respstream_msg) 
                                             | (QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__memresp_msg_data)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[7333].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[7334].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[7327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                  & (IData)(vlSelf->top__DOT__cache1_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[7336].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                           & (IData)(vlSelf->top__DOT__cache1_resp_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[7337].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
                = ((IData)(vlSelf->top__DOT__cache1_resp_rdy) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy = 0U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy 
            = ((IData)(vlSelf->top__DOT__cache1_resp_rdy) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy))) {
        vlSymsp->__Vcoverage[5675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__cache1_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[5974].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_req_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[5975].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[5968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__cache1_req_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[5977].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__cache1_req_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[5978].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
                = ((IData)(vlSelf->top__DOT__cache1_req_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
            = ((IData)(vlSelf->top__DOT__cache1_req_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__cache1_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[5546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_val;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__imem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_msg)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[7510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[7511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[7512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[7513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[7499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[7500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[7501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[7509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache1_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache1_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_resp_msg)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache1_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[4539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__spill_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
        = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__Spill_or_Refill_sel)
            ? ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__Spill_or_Refill_sel)
                ? vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__refill_addr
                : 0U) : vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__spill_addr);
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
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[7262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[7328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[5903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[5969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    vlSelf->top__DOT__cache1_req_msg[0U] = (IData)((QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_to_mem_data)));
    vlSelf->top__DOT__cache1_req_msg[1U] = ((vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                                             << 2U) 
                                            | (IData)(
                                                      ((QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__dpath__DOT__cache_to_mem_data)) 
                                                       >> 0x20U)));
    vlSelf->top__DOT__cache1_req_msg[2U] = ((0x1800U 
                                             & vlSelf->top__DOT__cache1_req_msg[2U]) 
                                            | (0x1fffU 
                                               & (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__ctrl__cache_req_type) 
                                                   << 0xaU) 
                                                  | (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__dpath__cache_req_msg_addr 
                                                     >> 0x1eU))));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
