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
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4))) {
        vlSymsp->__Vcoverage[4905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in4) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[4U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5))) {
        vlSymsp->__Vcoverage[4937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in5) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[5U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6))) {
        vlSymsp->__Vcoverage[4969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in6) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[6U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[4999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7))) {
        vlSymsp->__Vcoverage[5001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in7) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[7U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8))) {
        vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in8) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[8U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9))) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in9) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[9U]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10))) {
        vlSymsp->__Vcoverage[5097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in10) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xaU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in11) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xbU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12))) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in12) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xcU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13))) {
        vlSymsp->__Vcoverage[5193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in13) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xdU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14))) {
        vlSymsp->__Vcoverage[5225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in14) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xeU]));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15))) {
        vlSymsp->__Vcoverage[5257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU]));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__data_array_output[0xfU] 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__output_mux__DOT____Vtogcov__in15) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5258].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5783].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5784].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5785].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5786].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5787].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5788].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5790].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5791].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5792].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5794].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5795].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5798].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5799].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5805].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5806].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5808].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5809].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5810].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[5811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__z6b_mux_result) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
        = (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__z6b_mux_result 
           + (0x3cU & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_req_counter) 
                       << 2U)));
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((IData)(vlSelf->top__DOT__cache1_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_resp_val))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_val 
            = vlSelf->top__DOT__cache1_resp_val;
    }
    if ((0U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received = 0U;
        vlSelf->top__DOT__cache1_resp_rdy = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received = 0U;
        vlSelf->top__DOT__cache1_resp_rdy = 1U;
    } else {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received 
            = ((IData)(vlSelf->top__DOT__cache1_resp_val) 
               & (IData)(vlSelf->top__DOT__cache1_resp_rdy));
        vlSelf->top__DOT__cache1_resp_rdy = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_resp_done)));
    }
    if (((IData)(vlSelf->top__DOT__cache1_req_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_req_rdy))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_rdy 
            = vlSelf->top__DOT__cache1_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__cache0_resp_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_val))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_val 
            = vlSelf->top__DOT__cache0_resp_val;
    }
    if ((0U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
        vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received = 0U;
        vlSelf->top__DOT__cache0_resp_rdy = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
        vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received = 0U;
        vlSelf->top__DOT__cache0_resp_rdy = 1U;
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received 
            = ((IData)(vlSelf->top__DOT__cache0_resp_val) 
               & (IData)(vlSelf->top__DOT__cache0_resp_rdy));
        vlSelf->top__DOT__cache0_resp_rdy = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_resp_done)));
    }
    if (((IData)(vlSelf->top__DOT__cache0_req_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_req_rdy))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_rdy 
            = vlSelf->top__DOT__cache0_req_rdy;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M)))) {
        vlSymsp->__Vcoverage[7897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[7898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[7900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[7901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[7902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[7903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[7904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[7905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[7906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[7907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[7908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[7909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[7910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[7911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[7912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[7913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[7914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[7915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[7916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[7917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[7918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[7919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[7920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[7921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[7922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[7923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[7924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[7925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[7926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[7927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[7928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[7929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[7930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[7931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[7932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[7933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[7934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[7935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[7936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[7937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[7938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[7939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[7940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[7941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[7942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[7943].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M)))) {
        vlSymsp->__Vcoverage[7850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[7851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[7853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[7854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[7855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[7856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[7857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[7858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[7859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[7860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[7861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[7862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[7863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[7864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[7865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[7866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[7867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[7868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[7869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[7870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[7871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[7872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[7873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[7874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[7875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[7876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[7877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[7878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[7879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[7880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[7881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[7882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[7883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[7884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[7885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[7886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[7887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[7888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[7889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[7890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[7891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[7892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[7893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[7894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[7895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[7896].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[4110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__darray_wen 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__darray_wen;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_miss) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_miss))) {
        vlSymsp->__Vcoverage[5341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_miss 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_miss;
    }
    if (vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel) {
        if (vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel) {
            vlSymsp->__Vcoverage[4744].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable 
                = (0xffffU & ((IData)(1U) << (0xfU 
                                              & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_request_addr_M0 
                                                 >> 2U))));
        } else {
            vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel)))) {
            vlSymsp->__Vcoverage[4745].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable = 0xffffU;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel)))) {
        vlSymsp->__Vcoverage[4743].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[4111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__write_en_sel 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__write_en_sel;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[4609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__refill_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__refill_addr));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[4151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__memresp_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[5999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[6000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__refill_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[5368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__cache1_resp_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_resp_rdy))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_rdy 
            = vlSelf->top__DOT__cache1_resp_rdy;
    }
    if ((0U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_resp_val) 
                          & (IData)(vlSelf->top__DOT__cache1_resp_rdy))))) {
                vlSymsp->__Vcoverage[6819].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache1_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache1_resp_rdy))) {
                vlSymsp->__Vcoverage[6818].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
           & ((IData)(vlSelf->top__DOT__cache1_resp_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[4114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_rdy))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_rdy 
            = vlSelf->top__DOT__cache0_resp_rdy;
    }
    if ((0U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__state_reg))) {
            if (((IData)(vlSelf->top__DOT__cache0_resp_val) 
                 & (IData)(vlSelf->top__DOT__cache0_resp_rdy))) {
                vlSymsp->__Vcoverage[5331].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache0_resp_val) 
                          & (IData)(vlSelf->top__DOT__cache0_resp_rdy))))) {
                vlSymsp->__Vcoverage[5332].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
           & ((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num)));
    if ((((IData)(vlSelf->top__DOT__cache1_resp_val) 
          & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                     >> 0x2cU))) ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__cache_resp_type))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__cache_resp_type 
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
        vlSymsp->__Vcoverage[7046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[7047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[7049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[7050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[7051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[7052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[7053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[7054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[7055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[7056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[7057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[7058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[7059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[7060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[7061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[7062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[7063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[7064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[7065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[7066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[7067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[7068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[7069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[7070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[7071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[7072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[7073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[7074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[7075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[7076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[7077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[7078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[7079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[7080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[7081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[7082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[7083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[7084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[7085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[7086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[7087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[7088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[7089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[7090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[7091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[7092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((((IData)(vlSelf->top__DOT__cache0_resp_val) 
          & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                     >> 0x2cU))) ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__cache_resp_type))) {
        vlSymsp->__Vcoverage[5278].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[6999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[7000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[7001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[7002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[7003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[7004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[7005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[7006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[7007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[7008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[7009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[7010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[7011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[7012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[7013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[7014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[7015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[7016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[7017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[7018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[7019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[7020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[7021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[7022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[7023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[7024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[7025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[7026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[7027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[7028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[7029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[7030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[7031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[7032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[7033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[7034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[7035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[7036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[7037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[7038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[7039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[7040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[7041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[7042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[7043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (8U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xffefU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x20U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x40U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x80U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x100U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x200U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x400U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x800U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xefffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4662].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4663].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[4664].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__write_word_enable)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__write_word_enable)));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[8703].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[8704].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[8697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                  & (IData)(vlSelf->top__DOT__cache1_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[8706].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                           & (IData)(vlSelf->top__DOT__cache1_resp_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[8707].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[8560].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[8561].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[8554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__cache0_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[8563].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                           & (IData)(vlSelf->top__DOT__cache0_resp_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[8564].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy 
                = ((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy = 0U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy 
            = ((IData)(vlSelf->top__DOT__cache0_resp_rdy) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy))) {
        vlSymsp->__Vcoverage[6996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache1_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache1_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_resp_msg)))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache1_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4248].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[8632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[8698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[8045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[8489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[8555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[7985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[8046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[7986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[8041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[7981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[8043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[7983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
