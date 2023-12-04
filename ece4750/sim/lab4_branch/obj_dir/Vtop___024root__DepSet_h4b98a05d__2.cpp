// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__update_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_en = vlSelf->top__DOT__update_en;
    }
    if (((IData)(vlSelf->top__DOT__update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_val = vlSelf->top__DOT__update_val;
    }
    if (((IData)(vlSelf->top__DOT__my_update_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__my_update_en))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_update_en = vlSelf->top__DOT__my_update_en;
    }
    if (((IData)(vlSelf->top__DOT__my_update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__my_update_val))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_update_val 
            = vlSelf->top__DOT__my_update_val;
    }
    if ((1U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffeU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (1U & vlSelf->top__DOT__PC));
    }
    if ((2U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffdU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (2U & vlSelf->top__DOT__PC));
    }
    if ((4U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffbU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (4U & vlSelf->top__DOT__PC));
    }
    if ((8U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffff7U 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (8U & vlSelf->top__DOT__PC));
    }
    if ((0x10U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffefU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffdfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffbfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffff7fU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffeffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffdffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffbffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffff7ffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffefffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffdfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffbfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffff7fffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffeffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffdffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffbffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfff7ffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffefffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffdfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffbfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xff7fffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfeffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfdffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfbffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xf7ffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xefffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xdfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xbfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if (((vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0x7fffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((1U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (1U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((2U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (2U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((4U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (4U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((8U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (8U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x80U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x100U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x100U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x200U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x200U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x400U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x400U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x800U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x800U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x1000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x2000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x4000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x8000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x100000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x200000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x400000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x800000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x1000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x2000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x4000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x8000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if (((vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((1U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (1U & vlSelf->top__DOT__shift_factor));
    }
    if ((2U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (2U & vlSelf->top__DOT__shift_factor));
    }
    if ((4U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (4U & vlSelf->top__DOT__shift_factor));
    }
    if ((8U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (8U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x80U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x100U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x100U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x200U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x200U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x400U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x400U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x800U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x800U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x1000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x1000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x2000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x2000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x4000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x4000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x8000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x8000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x80000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x100000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x100000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x200000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x200000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x400000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x400000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x800000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x800000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x1000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x1000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x2000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x2000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x4000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x4000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x8000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x8000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40000000U & vlSelf->top__DOT__shift_factor));
    }
    if (((vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80000000U & vlSelf->top__DOT__shift_factor));
    }
    vlSelf->top__DOT__DUT__DOT__PHT_index_update_value 
        = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)) 
           | (IData)(vlSelf->top__DOT__update_val));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index_update_value)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index_update_value)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__PHT_index = ((0x2bU 
                                              >= (0x3fU 
                                                  & ((IData)(0xbU) 
                                                     * 
                                                     (3U 
                                                      & (vlSelf->top__DOT__PC 
                                                         >> 2U)))))
                                              ? (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__DUT__DOT__BH 
                                                            >> 
                                                            (0x3fU 
                                                             & ((IData)(0xbU) 
                                                                * 
                                                                (3U 
                                                                 & (vlSelf->top__DOT__PC 
                                                                    >> 2U)))))))
                                              : 0U);
    vlSelf->top__DOT__DUT__DOT__current_PHT = (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
    }
    if ((IData)((((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT____Vtogcov__prediction)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__prediction = (1U 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                                      >> 1U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT)));
    }
}
