// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx = 0U;
    vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next = 0U;
    vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
    vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    QData/*63:0*/ top__DOT____Vlvbound_h0f8c36ff__0;
    top__DOT____Vlvbound_h0f8c36ff__0 = 0;
    IData/*31:0*/ top__DOT____Vlvbound_hb53baddf__0;
    top__DOT____Vlvbound_hb53baddf__0 = 0;
    QData/*63:0*/ __Vtask_top__DOT__test_case__28__src_msg;
    __Vtask_top__DOT__test_case__28__src_msg = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_case__28__snk_msg;
    __Vtask_top__DOT__test_case__28__snk_msg = 0;
    // Body
    vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x200000003ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 6U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x400000005ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x14U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x300000004ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0xcU;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0xa0000000dULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x82U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x700000008ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x38U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__a = VL_RANDOM_I();
    vlSelf->top__DOT__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_case__28__snk_msg = VL_MULS_III(32, vlSelf->top__DOT__a, vlSelf->top__DOT__b);
    __Vtask_top__DOT__test_case__28__src_msg = (((QData)((IData)(vlSelf->top__DOT__a)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__b)));
    top__DOT____Vlvbound_h0f8c36ff__0 = __Vtask_top__DOT__test_case__28__src_msg;
    top__DOT____Vlvbound_hb53baddf__0 = __Vtask_top__DOT__test_case__28__snk_msg;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__a = VL_RANDOM_I();
    vlSelf->top__DOT__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_case__28__snk_msg = VL_MULS_III(32, vlSelf->top__DOT__a, vlSelf->top__DOT__b);
    __Vtask_top__DOT__test_case__28__src_msg = (((QData)((IData)(vlSelf->top__DOT__a)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__b)));
    top__DOT____Vlvbound_h0f8c36ff__0 = __Vtask_top__DOT__test_case__28__src_msg;
    top__DOT____Vlvbound_hb53baddf__0 = __Vtask_top__DOT__test_case__28__snk_msg;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__a = VL_RANDOM_I();
    vlSelf->top__DOT__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_case__28__snk_msg = VL_MULS_III(32, vlSelf->top__DOT__a, vlSelf->top__DOT__b);
    __Vtask_top__DOT__test_case__28__src_msg = (((QData)((IData)(vlSelf->top__DOT__a)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__b)));
    top__DOT____Vlvbound_h0f8c36ff__0 = __Vtask_top__DOT__test_case__28__src_msg;
    top__DOT____Vlvbound_hb53baddf__0 = __Vtask_top__DOT__test_case__28__snk_msg;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__a = VL_RANDOM_I();
    vlSelf->top__DOT__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_case__28__snk_msg = VL_MULS_III(32, vlSelf->top__DOT__a, vlSelf->top__DOT__b);
    __Vtask_top__DOT__test_case__28__src_msg = (((QData)((IData)(vlSelf->top__DOT__a)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__b)));
    top__DOT____Vlvbound_h0f8c36ff__0 = __Vtask_top__DOT__test_case__28__src_msg;
    top__DOT____Vlvbound_hb53baddf__0 = __Vtask_top__DOT__test_case__28__snk_msg;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__a = VL_RANDOM_I();
    vlSelf->top__DOT__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_case__28__snk_msg = VL_MULS_III(32, vlSelf->top__DOT__a, vlSelf->top__DOT__b);
    __Vtask_top__DOT__test_case__28__src_msg = (((QData)((IData)(vlSelf->top__DOT__a)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__b)));
    top__DOT____Vlvbound_h0f8c36ff__0 = __Vtask_top__DOT__test_case__28__src_msg;
    top__DOT____Vlvbound_hb53baddf__0 = __Vtask_top__DOT__test_case__28__snk_msg;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk2__DOT__x = 5U;
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x12345678ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x112345678ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x12345678U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0xffffffff12345678ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0xedcba988U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x1234000056780000ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x3400005612000034ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x9c001178U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x1000000180000001ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x90000001U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x1001000180001001ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0xa0011001U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0xfffffffe7fffffffULL;
    top__DOT____Vlvbound_hb53baddf__0 = 2U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0xfffcfffe7ffbffffULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0xb0002U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x1ffffffffULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0xffffffffU;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x80000000ffffffffULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x80000000U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0xffffffffffffffffULL;
    top__DOT____Vlvbound_hb53baddf__0 = 1U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0xffffffff80000000ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x80000000U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0xffffffff00000001ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0xffffffffU;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x8000000080000000ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x8000000000000001ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x80000000U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x180000000ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 0x80000000U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__a = 1U;
    vlSelf->top__DOT__b = 1U;
    top__DOT____Vlvbound_h0f8c36ff__0 = 0x100000001ULL;
    top__DOT____Vlvbound_hb53baddf__0 = 1U;
    if ((0x1bU >= (0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx))) {
        vlSelf->top__DOT__src_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_h0f8c36ff__0;
        vlSelf->top__DOT__snk_msgs[(0x1fU & vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx)] 
            = top__DOT____Vlvbound_hb53baddf__0;
    }
    vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = ((IData)(1U) + vlSelf->top__DOT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
    VL_CONST_W_1X(4096,vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage,0x00000000);
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level = 1U;
    vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_next 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index)));
    vlSelf->top__DOT__src__DOT__src__DOT__index_next 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x1bU] 
        = vlSelf->top__DOT__snk_msgs[0x1bU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x1aU] 
        = vlSelf->top__DOT__snk_msgs[0x1aU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x19U] 
        = vlSelf->top__DOT__snk_msgs[0x19U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x18U] 
        = vlSelf->top__DOT__snk_msgs[0x18U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x17U] 
        = vlSelf->top__DOT__snk_msgs[0x17U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x16U] 
        = vlSelf->top__DOT__snk_msgs[0x16U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x15U] 
        = vlSelf->top__DOT__snk_msgs[0x15U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x14U] 
        = vlSelf->top__DOT__snk_msgs[0x14U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x13U] 
        = vlSelf->top__DOT__snk_msgs[0x13U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x12U] 
        = vlSelf->top__DOT__snk_msgs[0x12U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x11U] 
        = vlSelf->top__DOT__snk_msgs[0x11U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0x10U] 
        = vlSelf->top__DOT__snk_msgs[0x10U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0xfU] 
        = vlSelf->top__DOT__snk_msgs[0xfU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0xeU] 
        = vlSelf->top__DOT__snk_msgs[0xeU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0xdU] 
        = vlSelf->top__DOT__snk_msgs[0xdU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0xcU] 
        = vlSelf->top__DOT__snk_msgs[0xcU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0xbU] 
        = vlSelf->top__DOT__snk_msgs[0xbU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0xaU] 
        = vlSelf->top__DOT__snk_msgs[0xaU];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[9U] = 
        vlSelf->top__DOT__snk_msgs[9U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[8U] = 
        vlSelf->top__DOT__snk_msgs[8U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[7U] = 
        vlSelf->top__DOT__snk_msgs[7U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[6U] = 
        vlSelf->top__DOT__snk_msgs[6U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[5U] = 
        vlSelf->top__DOT__snk_msgs[5U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[4U] = 
        vlSelf->top__DOT__snk_msgs[4U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[3U] = 
        vlSelf->top__DOT__snk_msgs[3U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[2U] = 
        vlSelf->top__DOT__snk_msgs[2U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[1U] = 
        vlSelf->top__DOT__snk_msgs[1U];
    vlSelf->top__DOT__sink__DOT__sink__DOT__m[0U] = 
        vlSelf->top__DOT__snk_msgs[0U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x1bU] 
        = vlSelf->top__DOT__src_msgs[0x1bU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x1aU] 
        = vlSelf->top__DOT__src_msgs[0x1aU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x19U] 
        = vlSelf->top__DOT__src_msgs[0x19U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x18U] 
        = vlSelf->top__DOT__src_msgs[0x18U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x17U] 
        = vlSelf->top__DOT__src_msgs[0x17U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x16U] 
        = vlSelf->top__DOT__src_msgs[0x16U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x15U] 
        = vlSelf->top__DOT__src_msgs[0x15U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x14U] 
        = vlSelf->top__DOT__src_msgs[0x14U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x13U] 
        = vlSelf->top__DOT__src_msgs[0x13U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x12U] 
        = vlSelf->top__DOT__src_msgs[0x12U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x11U] 
        = vlSelf->top__DOT__src_msgs[0x11U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0x10U] 
        = vlSelf->top__DOT__src_msgs[0x10U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0xfU] = 
        vlSelf->top__DOT__src_msgs[0xfU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0xeU] = 
        vlSelf->top__DOT__src_msgs[0xeU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0xdU] = 
        vlSelf->top__DOT__src_msgs[0xdU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0xcU] = 
        vlSelf->top__DOT__src_msgs[0xcU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0xbU] = 
        vlSelf->top__DOT__src_msgs[0xbU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0xaU] = 
        vlSelf->top__DOT__src_msgs[0xaU];
    vlSelf->top__DOT__src__DOT__src__DOT__m[9U] = vlSelf->top__DOT__src_msgs
        [9U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[8U] = vlSelf->top__DOT__src_msgs
        [8U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[7U] = vlSelf->top__DOT__src_msgs
        [7U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[6U] = vlSelf->top__DOT__src_msgs
        [6U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[5U] = vlSelf->top__DOT__src_msgs
        [5U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[4U] = vlSelf->top__DOT__src_msgs
        [4U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[3U] = vlSelf->top__DOT__src_msgs
        [3U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[2U] = vlSelf->top__DOT__src_msgs
        [2U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[1U] = vlSelf->top__DOT__src_msgs
        [1U];
    vlSelf->top__DOT__src__DOT__src__DOT__m[0U] = vlSelf->top__DOT__src_msgs
        [0U];
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    vlSelf->top__DOT__src__DOT__src_val = (1U & ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                                 & (~ (IData)(vlSelf->top__DOT__src_done))));
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
                = (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U));
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__sink__DOT__sink_val = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__ostream_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)));
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)
                ? (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num);
        vlSelf->top__DOT__sink__DOT__sink_val = ((IData)(vlSelf->top__DOT__ostream_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if (vlSelf->top__DOT__sink__DOT__sink_val) {
        vlSelf->top__DOT__sink__DOT__sink_msg = vlSelf->top__DOT__ostream_msg;
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    } else {
        vlSelf->top__DOT__sink__DOT__sink_msg = 0U;
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_en = 0U;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__ostream_val) & 
           ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
            & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        if (((IData)(vlSelf->top__DOT__ostream_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__istream_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                      & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__ostream_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__ostream_val) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__ostream_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                             & (0U 
                                                == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__ostream_rdy = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        vlSelf->top__DOT__ostream_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                         & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
        if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
            vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
            if ((0x20U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x20U == (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
                vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
                if (vlSelf->top__DOT__ostream_rdy) {
                    vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_rdy)))) {
                    vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__ostream_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else if (((IData)(vlSelf->top__DOT__ostream_val) 
                & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
    }
    if (((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
         & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
               & (IData)(vlSelf->top__DOT__ostream_rdy))))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
                  & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
                        & (IData)(vlSelf->top__DOT__ostream_rdy))))))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__imul__DOT__next_ostream_val = 
        ((0x20U <= (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
         & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
               & (IData)(vlSelf->top__DOT__ostream_rdy))));
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
                = (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay 
                   - (IData)(1U));
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                           & (IData)(vlSelf->top__DOT__istream_rdy)) 
                          & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
            }
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
            vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
                                               & ((IData)(vlSelf->top__DOT__istream_rdy) 
                                                  & (0U 
                                                     == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay)));
        vlSelf->top__DOT__istream_val = ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
                                         & ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                            & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay)));
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_next 
            = ((0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)
                ? (vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num 
                   - (IData)(1U)) : vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num);
        vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__istream_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
        vlSelf->top__DOT__istream_val = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                         & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__istream_val)))) {
            vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__istream_val) {
            vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__nextstate = 1U;
        } else {
            vlSelf->top__DOT__imul__DOT__nextstate = 0U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__nextstate = ((1U 
                                                   == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->top__DOT__imul__DOT__counter))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__ostream_rdy)
                                                     ? 0U
                                                     : 2U)
                                                    : 0U));
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 1U;
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__istream_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy))))) {
        if ((0x20U == (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
            vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x20U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
            vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
            if ((1U & vlSelf->top__DOT__imul__DOT__b)) {
                vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__imul__DOT__b))) {
                vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__imul__DOT__next_ostream_msg = vlSelf->top__DOT__ostream_msg;
    vlSelf->top__DOT__istream_msg = ((IData)(vlSelf->top__DOT__istream_val)
                                      ? ((0x1bU >= (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index))
                                          ? vlSelf->top__DOT__src__DOT__src__DOT__m
                                         [vlSelf->top__DOT__src__DOT__src__DOT__index]
                                          : 0ULL) : 0ULL);
    vlSelf->top__DOT__imul__DOT__next_b = vlSelf->top__DOT__imul__DOT__b;
    vlSelf->top__DOT__imul__DOT__next_a = vlSelf->top__DOT__imul__DOT__a;
    if (((IData)(vlSelf->top__DOT__istream_val) & (IData)(vlSelf->top__DOT__istream_rdy))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__next_ostream_msg = 0U;
        vlSelf->top__DOT__imul__DOT__next_b = (IData)(vlSelf->top__DOT__istream_msg);
        vlSelf->top__DOT__imul__DOT__next_a = (IData)(
                                                      (vlSelf->top__DOT__istream_msg 
                                                       >> 0x20U));
    } else if ((0x20U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
        vlSelf->top__DOT__imul__DOT__next_ostream_msg 
            = ((1U & vlSelf->top__DOT__imul__DOT__b)
                ? (vlSelf->top__DOT__imul__DOT__a + vlSelf->top__DOT__ostream_msg)
                : vlSelf->top__DOT__ostream_msg);
        vlSelf->top__DOT__imul__DOT__next_b = (vlSelf->top__DOT__imul__DOT__b 
                                               >> 1U);
        vlSelf->top__DOT__imul__DOT__next_a = (vlSelf->top__DOT__imul__DOT__a 
                                               << 1U);
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tb_IntMul_RandDelay.v", 115, 7, ".top", "v_branch/top", "if", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tb_IntMul_RandDelay.v", 115, 8, ".top", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb_IntMul_RandDelay.v", 113, 5, ".top", "v_line/top", "block", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tb_IntMul_RandDelay.v", 152, 19, ".top", "v_line/top", "block", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tb_IntMul_RandDelay.v", 147, 8, ".top", "v_line/top", "block", "147,151,155-156,158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb_IntMul_RandDelay.v", 184, 5, ".top", "v_line/top", "block", "184-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tb_IntMul_RandDelay.v", 170, 3, ".top", "v_line/top", "block", "170,174-178,184,195-196,200-201,204-205,208-209,212-213,216-217,219-220,224-225,227-228,231-232,234-235,237-238,240-241,243-244,246-247,249-250,252-253,255-256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tb_IntMul_RandDelay.v", 276, 5, ".top", "v_line/top", "block", "276");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tb_IntMul_RandDelay.v", 279, 6, ".top", "v_line/top", "else", "282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tb_IntMul_RandDelay.v", 265, 3, ".top", "v_line/top", "block", "265,267-268,271-273,285-286");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tb_IntMul_RandDelay.v", 296, 5, ".top", "v_line/top", "block", "296-297");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "../vc/TestSource.v", 64, 3, ".top.src.src", "v_line/vc_TestSource__P40_PB1c", "block", "64-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "../vc/TestSource.v", 97, 5, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "if", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "../vc/TestSource.v", 97, 6, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "../vc/TestSource.v", 96, 3, ".top.src.src", "v_line/vc_TestSource__P40_PB1c", "block", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "../vc/TestSource.v", 125, 3, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "if", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "../vc/TestSource.v", 125, 4, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "else", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "../vc/TestSource.v", 125, 3, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "if", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "../vc/TestSource.v", 125, 4, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "../vc/TestSource.v", 126, 3, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "if", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "../vc/TestSource.v", 126, 4, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "else", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "../vc/TestSource.v", 126, 3, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "if", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "../vc/TestSource.v", 126, 4, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "../vc/TestSource.v", 124, 5, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "if", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "../vc/TestSource.v", 124, 6, ".top.src.src", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "../vc/TestSource.v", 123, 3, ".top.src.src", "v_line/vc_TestSource__P40_PB1c", "block", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "../vc/regs.v", 103, 5, ".top.src.src.index_reg", "v_branch/vc_EnResetReg__P5_PBz1", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "../vc/regs.v", 103, 6, ".top.src.src.index_reg", "v_branch/vc_EnResetReg__P5_PBz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "../vc/regs.v", 102, 3, ".top.src.src.index_reg", "v_line/vc_EnResetReg__P5_PBz1", "block", "102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "../vc/TestRandDelay.v", 47, 5, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "../vc/TestRandDelay.v", 47, 6, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "../vc/TestRandDelay.v", 46, 3, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "../vc/TestRandDelay.v", 92, 5, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "92-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "../vc/TestRandDelay.v", 92, 6, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "../vc/TestRandDelay.v", 91, 3, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "block", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "../vc/TestRandDelay.v", 117, 9, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "../vc/TestRandDelay.v", 117, 10, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "../vc/TestRandDelay.v", 116, 19, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "case", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "../vc/TestRandDelay.v", 126, 9, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "126-127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "../vc/TestRandDelay.v", 126, 10, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "../vc/TestRandDelay.v", 125, 20, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "../vc/TestRandDelay.v", 104, 3, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "block", "104,108,110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../vc/TestRandDelay.v", 142, 19, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "case", "142-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../vc/TestRandDelay.v", 150, 20, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "case", "150-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../vc/TestRandDelay.v", 158, 7, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "case", "158-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../vc/TestRandDelay.v", 138, 3, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "block", "138,140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../vc/TestRandDelay.v", 185, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../vc/TestRandDelay.v", 185, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../vc/TestRandDelay.v", 185, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../vc/TestRandDelay.v", 185, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../vc/TestRandDelay.v", 186, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../vc/TestRandDelay.v", 186, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../vc/TestRandDelay.v", 186, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../vc/TestRandDelay.v", 186, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../vc/TestRandDelay.v", 187, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../vc/TestRandDelay.v", 187, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../vc/TestRandDelay.v", 187, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../vc/TestRandDelay.v", 187, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../vc/TestRandDelay.v", 188, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../vc/TestRandDelay.v", 188, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../vc/TestRandDelay.v", 188, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../vc/TestRandDelay.v", 188, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../vc/TestRandDelay.v", 189, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../vc/TestRandDelay.v", 189, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../vc/TestRandDelay.v", 189, 3, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "../vc/TestRandDelay.v", 189, 4, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "../vc/TestRandDelay.v", 184, 5, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "if", "184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../vc/TestRandDelay.v", 184, 6, ".top.src.msg_delay", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../vc/TestRandDelay.v", 183, 3, ".top.src.msg_delay", "v_line/vc_TestRandDelay__P40", "block", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../vc/regs.v", 103, 5, ".top.src.msg_delay.rand_delay_reg", "v_branch/vc_EnResetReg__P20", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../vc/regs.v", 103, 6, ".top.src.msg_delay.rand_delay_reg", "v_branch/vc_EnResetReg__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../vc/regs.v", 102, 3, ".top.src.msg_delay.rand_delay_reg", "v_line/vc_EnResetReg__P20", "block", "102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "IntMulBase.v", 68, 11, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "IntMulBase.v", 68, 12, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "IntMulBase.v", 81, 9, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "IntMulBase.v", 81, 10, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "IntMulBase.v", 78, 12, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "78-80");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "IntMulBase.v", 78, 13, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "IntMulBase.v", 70, 12, ".top.imul", "v_line/lab1_imul_IntMulBase", "elsif", "70-76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "IntMulBase.v", 59, 7, ".top.imul", "v_line/lab1_imul_IntMulBase", "elsif", "59,61-65,67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "IntMulBase.v", 55, 5, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "55-56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "IntMulBase.v", 55, 6, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "58,83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "IntMulBase.v", 54, 3, ".top.imul", "v_line/lab1_imul_IntMulBase", "block", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "IntMulBase.v", 90, 13, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "IntMulBase.v", 90, 14, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "IntMulBase.v", 90, 11, ".top.imul", "v_line/lab1_imul_IntMulBase", "case", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "IntMulBase.v", 92, 13, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "IntMulBase.v", 92, 14, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "IntMulBase.v", 92, 11, ".top.imul", "v_line/lab1_imul_IntMulBase", "case", "92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "IntMulBase.v", 94, 13, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "IntMulBase.v", 94, 14, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "95");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "IntMulBase.v", 94, 11, ".top.imul", "v_line/lab1_imul_IntMulBase", "case", "94");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "IntMulBase.v", 96, 7, ".top.imul", "v_line/lab1_imul_IntMulBase", "case", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "IntMulBase.v", 88, 3, ".top.imul", "v_line/lab1_imul_IntMulBase", "block", "88-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "IntMulBase.v", 114, 9, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "114-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "IntMulBase.v", 114, 10, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "IntMulBase.v", 111, 12, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "111-113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "IntMulBase.v", 111, 13, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "IntMulBase.v", 106, 7, ".top.imul", "v_line/lab1_imul_IntMulBase", "elsif", "106-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "IntMulBase.v", 122, 7, ".top.imul", "v_branch/lab1_imul_IntMulBase", "if", "122-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "IntMulBase.v", 122, 8, ".top.imul", "v_branch/lab1_imul_IntMulBase", "else", "125-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "IntMulBase.v", 101, 3, ".top.imul", "v_line/lab1_imul_IntMulBase", "block", "101-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/trace.v", 44, 25, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../vc/trace.v", 45, 25, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../vc/trace.v", 62, 3, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "62-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../vc/trace.v", 71, 3, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../vc/trace.v", 89, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../vc/trace.v", 95, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "95-97,99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../vc/trace.v", 80, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "80,85-86,88,93,95,103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../vc/trace.v", 123, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "123-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../vc/trace.v", 113, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "113,118,120-121,129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../vc/trace.v", 149, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "149-153,155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../vc/trace.v", 139, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "139,145-147,149,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../vc/trace.v", 178, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../vc/trace.v", 184, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "if", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../vc/trace.v", 184, 11, ".top.imul.vc_trace", "v_line/vc_Trace", "else", "186-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../vc/trace.v", 182, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../vc/trace.v", 169, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "169,175,177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../vc/trace.v", 209, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../vc/trace.v", 223, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "if", "223-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../vc/trace.v", 223, 11, ".top.imul.vc_trace", "v_line/vc_Trace", "else", "227-229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../vc/trace.v", 219, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "219-221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../vc/trace.v", 216, 10, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "216-217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../vc/trace.v", 213, 5, ".top.imul.vc_trace", "v_line/vc_Trace", "elsif", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../vc/trace.v", 199, 8, ".top.imul.vc_trace", "v_line/vc_Trace", "block", "199,206,208");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../vc/TestRandDelay.v", 47, 5, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../vc/TestRandDelay.v", 47, 6, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../vc/TestRandDelay.v", 46, 3, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../vc/TestRandDelay.v", 92, 5, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "92-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../vc/TestRandDelay.v", 92, 6, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../vc/TestRandDelay.v", 91, 3, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "block", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../vc/TestRandDelay.v", 117, 9, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../vc/TestRandDelay.v", 117, 10, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../vc/TestRandDelay.v", 116, 19, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "case", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../vc/TestRandDelay.v", 126, 9, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "126-127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../vc/TestRandDelay.v", 126, 10, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../vc/TestRandDelay.v", 125, 20, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../vc/TestRandDelay.v", 104, 3, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "block", "104,108,110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../vc/TestRandDelay.v", 142, 19, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "case", "142-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../vc/TestRandDelay.v", 150, 20, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "case", "150-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../vc/TestRandDelay.v", 158, 7, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "case", "158-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../vc/TestRandDelay.v", 138, 3, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "block", "138,140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../vc/TestRandDelay.v", 185, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../vc/TestRandDelay.v", 185, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../vc/TestRandDelay.v", 185, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../vc/TestRandDelay.v", 185, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../vc/TestRandDelay.v", 186, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../vc/TestRandDelay.v", 186, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../vc/TestRandDelay.v", 186, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../vc/TestRandDelay.v", 186, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../vc/TestRandDelay.v", 187, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../vc/TestRandDelay.v", 187, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../vc/TestRandDelay.v", 187, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../vc/TestRandDelay.v", 187, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../vc/TestRandDelay.v", 188, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../vc/TestRandDelay.v", 188, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../vc/TestRandDelay.v", 188, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../vc/TestRandDelay.v", 188, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../vc/TestRandDelay.v", 189, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../vc/TestRandDelay.v", 189, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../vc/TestRandDelay.v", 189, 3, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../vc/TestRandDelay.v", 189, 4, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../vc/TestRandDelay.v", 184, 5, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "if", "184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../vc/TestRandDelay.v", 184, 6, ".top.sink.msg_delay", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../vc/TestRandDelay.v", 183, 3, ".top.sink.msg_delay", "v_line/vc_TestRandDelay__P20", "block", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../vc/regs.v", 103, 5, ".top.sink.msg_delay.rand_delay_reg", "v_branch/vc_EnResetReg__P20", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../vc/regs.v", 103, 6, ".top.sink.msg_delay.rand_delay_reg", "v_branch/vc_EnResetReg__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../vc/regs.v", 102, 3, ".top.sink.msg_delay.rand_delay_reg", "v_line/vc_EnResetReg__P20", "block", "102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../vc/TestSink.v", 68, 3, ".top.sink.sink", "v_line/vc_TestSink__P20_PB1c", "block", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../vc/TestSink.v", 79, 5, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../vc/TestSink.v", 79, 6, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../vc/TestSink.v", 78, 3, ".top.sink.sink", "v_line/vc_TestSink__P20_PB1c", "block", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../vc/TestSink.v", 114, 16, ".top.sink.sink", "v_line/vc_TestSink__P20_PB1c", "case", "114-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../vc/TestSink.v", 125, 11, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "125-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../vc/TestSink.v", 125, 12, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../vc/TestSink.v", 119, 9, ".top.sink.sink", "v_line/vc_TestSink__P20_PB1c", "case", "119-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../vc/TestSink.v", 111, 10, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "111,113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../vc/TestSink.v", 111, 11, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../vc/TestSink.v", 108, 5, ".top.sink.sink", "v_line/vc_TestSink__P20_PB1c", "elsif", "108-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../vc/TestSink.v", 107, 3, ".top.sink.sink", "v_line/vc_TestSink__P20_PB1c", "block", "107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "../vc/TestSink.v", 150, 3, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "../vc/TestSink.v", 150, 4, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "../vc/TestSink.v", 150, 3, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../vc/TestSink.v", 150, 4, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../vc/TestSink.v", 151, 3, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../vc/TestSink.v", 151, 4, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "../vc/TestSink.v", 151, 3, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "../vc/TestSink.v", 151, 4, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "../vc/TestSink.v", 149, 5, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "if", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "../vc/TestSink.v", 149, 6, ".top.sink.sink", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "../vc/TestSink.v", 148, 3, ".top.sink.sink", "v_line/vc_TestSink__P20_PB1c", "block", "148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "../vc/regs.v", 103, 5, ".top.sink.sink.index_reg", "v_branch/vc_EnResetReg__P5_PBz1", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "../vc/regs.v", 103, 6, ".top.sink.sink.index_reg", "v_branch/vc_EnResetReg__P5_PBz1", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "../vc/regs.v", 102, 3, ".top.sink.sink.index_reg", "v_line/vc_EnResetReg__P5_PBz1", "block", "102");
}
