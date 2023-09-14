// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___eval_static__TOP__top(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_static__TOP__top\n"); );
    // Body
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx = 0U;
    vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h37a58699__0;
    IData/*31:0*/ __Vtemp_h37a58699__1;
    IData/*31:0*/ __Vtemp_h37a58699__2;
    IData/*31:0*/ __Vtemp_h37a58699__3;
    IData/*31:0*/ __Vtemp_h37a58699__4;
    IData/*31:0*/ __Vtemp_h37a58699__5;
    IData/*31:0*/ __Vtemp_h37a58699__6;
    IData/*31:0*/ __Vtemp_h37a58699__7;
    IData/*31:0*/ __Vtemp_h37a58699__8;
    IData/*31:0*/ __Vtemp_h37a58699__9;
    IData/*31:0*/ __Vtemp_h37a58699__10;
    IData/*31:0*/ __Vtemp_h37a58699__11;
    IData/*31:0*/ __Vtemp_h37a58699__12;
    IData/*31:0*/ __Vtemp_h37a58699__13;
    IData/*31:0*/ __Vtemp_h37a58699__14;
    IData/*31:0*/ __Vtemp_h37a58699__15;
    IData/*31:0*/ __Vtemp_h37a58699__16;
    IData/*31:0*/ __Vtemp_h37a58699__17;
    IData/*31:0*/ __Vtemp_h37a58699__18;
    IData/*31:0*/ __Vtemp_h37a58699__19;
    IData/*31:0*/ __Vtemp_h37a58699__20;
    IData/*31:0*/ __Vtemp_h37a58699__21;
    IData/*31:0*/ __Vtemp_h37a58699__22;
    IData/*31:0*/ __Vtemp_h37a58699__23;
    IData/*31:0*/ __Vtemp_h37a58699__24;
    IData/*31:0*/ __Vtemp_h37a58699__25;
    IData/*31:0*/ __Vtemp_h37a58699__26;
    IData/*31:0*/ __Vtemp_h37a58699__27;
    // Body
    vlSymsp->TOP__top__src.__PVT__max_delay = 5U;
    vlSymsp->TOP__top__sink.__PVT__max_delay = 5U;
    vlSelf->__Vtask_test_case__23__snk_msg = 6U;
    vlSelf->__Vtask_test_case__23__src_msg = 0x200000003ULL;
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__23__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__23__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__0 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__0;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_case__24__snk_msg = 0x14U;
    vlSelf->__Vtask_test_case__24__src_msg = 0x400000005ULL;
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__24__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__24__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__1 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__1;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_case__25__snk_msg = 0xcU;
    vlSelf->__Vtask_test_case__25__src_msg = 0x300000004ULL;
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__25__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__25__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__2 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__2;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_case__26__snk_msg = 0x82U;
    vlSelf->__Vtask_test_case__26__src_msg = 0xa0000000dULL;
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__26__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__26__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__3 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__3;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vtask_test_case__27__snk_msg = 0x38U;
    vlSelf->__Vtask_test_case__27__src_msg = 0x700000008ULL;
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__27__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__27__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__4 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__4;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = VL_RANDOM_I();
    vlSelf->__PVT__b = VL_RANDOM_I();
    vlSelf->__Vtask_test_case__28__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__28__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__28__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__28__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__5 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__5;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 1U;
    vlSelf->__PVT__a = VL_RANDOM_I();
    vlSelf->__PVT__b = VL_RANDOM_I();
    vlSelf->__Vtask_test_case__28__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__28__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__28__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__28__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__6 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__6;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 2U;
    vlSelf->__PVT__a = VL_RANDOM_I();
    vlSelf->__PVT__b = VL_RANDOM_I();
    vlSelf->__Vtask_test_case__28__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__28__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__28__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__28__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__7 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__7;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 3U;
    vlSelf->__PVT__a = VL_RANDOM_I();
    vlSelf->__PVT__b = VL_RANDOM_I();
    vlSelf->__Vtask_test_case__28__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__28__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__28__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__28__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__8 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__8;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 4U;
    vlSelf->__PVT__a = VL_RANDOM_I();
    vlSelf->__PVT__b = VL_RANDOM_I();
    vlSelf->__Vtask_test_case__28__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__28__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__28__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__28__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__9 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__9;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk2__DOT__x = 5U;
    vlSelf->__PVT__a = 0U;
    vlSelf->__PVT__b = 0x12345678U;
    vlSelf->__Vtask_test_case__29__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__29__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__29__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__29__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__10 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__10;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 0x12345678U;
    vlSelf->__Vtask_test_case__30__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__30__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__30__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__30__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__11 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__11;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 0x12345678U;
    vlSelf->__Vtask_test_case__31__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__31__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__31__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__31__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__12 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__12;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0x12340000U;
    vlSelf->__PVT__b = 0x56780000U;
    vlSelf->__Vtask_test_case__32__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__32__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__32__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__32__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__13 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__13;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0x34000056U;
    vlSelf->__PVT__b = 0x12000034U;
    vlSelf->__Vtask_test_case__33__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__33__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__33__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__33__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__14 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__14;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0x10000001U;
    vlSelf->__PVT__b = 0x80000001U;
    vlSelf->__Vtask_test_case__34__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__34__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__34__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__34__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__15 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__15;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0x10010001U;
    vlSelf->__PVT__b = 0x80001001U;
    vlSelf->__Vtask_test_case__35__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__35__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__35__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__35__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__16 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__16;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0xfffffffeU;
    vlSelf->__PVT__b = 0x7fffffffU;
    vlSelf->__Vtask_test_case__36__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__36__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__36__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__36__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__17 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__17;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0xfffcfffeU;
    vlSelf->__PVT__b = 0x7ffbffffU;
    vlSelf->__Vtask_test_case__37__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__37__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__37__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__37__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__18 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__18;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 0xffffffffU;
    vlSelf->__Vtask_test_case__38__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__38__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__38__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__38__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__19 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__19;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0x80000000U;
    vlSelf->__PVT__b = 0xffffffffU;
    vlSelf->__Vtask_test_case__39__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__39__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__39__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__39__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__20 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__20;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 0xffffffffU;
    vlSelf->__Vtask_test_case__40__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__40__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__40__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__40__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__21 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__21;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 0x80000000U;
    vlSelf->__Vtask_test_case__41__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__41__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__41__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__41__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__22 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__22;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 1U;
    vlSelf->__Vtask_test_case__42__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__42__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__42__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__42__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__23 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__23;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0x80000000U;
    vlSelf->__PVT__b = 0x80000000U;
    vlSelf->__Vtask_test_case__43__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__43__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__43__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__43__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__24 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__24;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 0x80000000U;
    vlSelf->__PVT__b = 1U;
    vlSelf->__Vtask_test_case__44__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__44__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__44__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__44__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__25 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__25;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 0x80000000U;
    vlSelf->__Vtask_test_case__45__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__45__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__45__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__45__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__26 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__26;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 1U;
    vlSelf->__Vtask_test_case__46__snk_msg = VL_MULS_III(32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vtask_test_case__46__src_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__a, vlSelf->__PVT__b);
    vlSelf->__Vlvbound_h0f8c36ff__0 = vlSelf->__Vtask_test_case__46__src_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__src_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_h0f8c36ff__0;
    }
    vlSelf->__Vlvbound_hb53baddf__0 = vlSelf->__Vtask_test_case__46__snk_msg;
    if (VL_LIKELY((0x1bU >= (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))))) {
        vlSelf->__PVT__snk_msgs[(0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx, 0U, 5U))] 
            = vlSelf->__Vlvbound_hb53baddf__0;
    }
    __Vtemp_h37a58699__27 = ((IData)(1U) + vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx);
    vlSelf->__PVT__test_case__Vstatic__unnamedblk1__DOT__idx 
        = __Vtemp_h37a58699__27;
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    // Body
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink.__PVT__reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__ostream_msg = vlSymsp->TOP__top__imul.__PVT__ostream_msg;
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x1bU] = 
        vlSelf->__PVT__snk_msgs[0x1bU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x1aU] = 
        vlSelf->__PVT__snk_msgs[0x1aU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x19U] = 
        vlSelf->__PVT__snk_msgs[0x19U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x18U] = 
        vlSelf->__PVT__snk_msgs[0x18U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x17U] = 
        vlSelf->__PVT__snk_msgs[0x17U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x16U] = 
        vlSelf->__PVT__snk_msgs[0x16U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x15U] = 
        vlSelf->__PVT__snk_msgs[0x15U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x14U] = 
        vlSelf->__PVT__snk_msgs[0x14U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x13U] = 
        vlSelf->__PVT__snk_msgs[0x13U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x12U] = 
        vlSelf->__PVT__snk_msgs[0x12U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x11U] = 
        vlSelf->__PVT__snk_msgs[0x11U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0x10U] = 
        vlSelf->__PVT__snk_msgs[0x10U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0xfU] = 
        vlSelf->__PVT__snk_msgs[0xfU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0xeU] = 
        vlSelf->__PVT__snk_msgs[0xeU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0xdU] = 
        vlSelf->__PVT__snk_msgs[0xdU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0xcU] = 
        vlSelf->__PVT__snk_msgs[0xcU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0xbU] = 
        vlSelf->__PVT__snk_msgs[0xbU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0xaU] = 
        vlSelf->__PVT__snk_msgs[0xaU];
    vlSymsp->TOP__top__sink__sink.__PVT__m[9U] = vlSelf->__PVT__snk_msgs
        [9U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[8U] = vlSelf->__PVT__snk_msgs
        [8U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[7U] = vlSelf->__PVT__snk_msgs
        [7U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[6U] = vlSelf->__PVT__snk_msgs
        [6U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[5U] = vlSelf->__PVT__snk_msgs
        [5U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[4U] = vlSelf->__PVT__snk_msgs
        [4U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[3U] = vlSelf->__PVT__snk_msgs
        [3U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[2U] = vlSelf->__PVT__snk_msgs
        [2U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[1U] = vlSelf->__PVT__snk_msgs
        [1U];
    vlSymsp->TOP__top__sink__sink.__PVT__m[0U] = vlSelf->__PVT__snk_msgs
        [0U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x1bU] = vlSelf->__PVT__src_msgs
        [0x1bU];
    vlSymsp->TOP__top__src__src.__PVT__m[0x1aU] = vlSelf->__PVT__src_msgs
        [0x1aU];
    vlSymsp->TOP__top__src__src.__PVT__m[0x19U] = vlSelf->__PVT__src_msgs
        [0x19U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x18U] = vlSelf->__PVT__src_msgs
        [0x18U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x17U] = vlSelf->__PVT__src_msgs
        [0x17U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x16U] = vlSelf->__PVT__src_msgs
        [0x16U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x15U] = vlSelf->__PVT__src_msgs
        [0x15U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x14U] = vlSelf->__PVT__src_msgs
        [0x14U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x13U] = vlSelf->__PVT__src_msgs
        [0x13U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x12U] = vlSelf->__PVT__src_msgs
        [0x12U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x11U] = vlSelf->__PVT__src_msgs
        [0x11U];
    vlSymsp->TOP__top__src__src.__PVT__m[0x10U] = vlSelf->__PVT__src_msgs
        [0x10U];
    vlSymsp->TOP__top__src__src.__PVT__m[0xfU] = vlSelf->__PVT__src_msgs
        [0xfU];
    vlSymsp->TOP__top__src__src.__PVT__m[0xeU] = vlSelf->__PVT__src_msgs
        [0xeU];
    vlSymsp->TOP__top__src__src.__PVT__m[0xdU] = vlSelf->__PVT__src_msgs
        [0xdU];
    vlSymsp->TOP__top__src__src.__PVT__m[0xcU] = vlSelf->__PVT__src_msgs
        [0xcU];
    vlSymsp->TOP__top__src__src.__PVT__m[0xbU] = vlSelf->__PVT__src_msgs
        [0xbU];
    vlSymsp->TOP__top__src__src.__PVT__m[0xaU] = vlSelf->__PVT__src_msgs
        [0xaU];
    vlSymsp->TOP__top__src__src.__PVT__m[9U] = vlSelf->__PVT__src_msgs
        [9U];
    vlSymsp->TOP__top__src__src.__PVT__m[8U] = vlSelf->__PVT__src_msgs
        [8U];
    vlSymsp->TOP__top__src__src.__PVT__m[7U] = vlSelf->__PVT__src_msgs
        [7U];
    vlSymsp->TOP__top__src__src.__PVT__m[6U] = vlSelf->__PVT__src_msgs
        [6U];
    vlSymsp->TOP__top__src__src.__PVT__m[5U] = vlSelf->__PVT__src_msgs
        [5U];
    vlSymsp->TOP__top__src__src.__PVT__m[4U] = vlSelf->__PVT__src_msgs
        [4U];
    vlSymsp->TOP__top__src__src.__PVT__m[3U] = vlSelf->__PVT__src_msgs
        [3U];
    vlSymsp->TOP__top__src__src.__PVT__m[2U] = vlSelf->__PVT__src_msgs
        [2U];
    vlSymsp->TOP__top__src__src.__PVT__m[1U] = vlSelf->__PVT__src_msgs
        [1U];
    vlSymsp->TOP__top__src__src.__PVT__m[0U] = vlSelf->__PVT__src_msgs
        [0U];
    vlSelf->__PVT__ostream_val = vlSymsp->TOP__top__imul.__PVT__ostream_val;
    vlSelf->__PVT__istream_rdy = vlSymsp->TOP__top__imul.__PVT__istream_rdy;
    vlSymsp->TOP__top__imul.__PVT__clk = vlSelf->clk;
    vlSymsp->TOP__top__src.__PVT__clk = vlSelf->clk;
    vlSymsp->TOP__top__sink.__PVT__clk = vlSelf->clk;
    vlSelf->__PVT__src_done = vlSymsp->TOP__top__src.__PVT__done;
    vlSelf->__PVT__snk_done = vlSymsp->TOP__top__sink.__PVT__done;
    vlSymsp->TOP__top__sink.__PVT__msg = vlSelf->__PVT__ostream_msg;
    vlSymsp->TOP__top__sink.__PVT__val = vlSelf->__PVT__ostream_val;
    vlSymsp->TOP__top__src.__PVT__rdy = vlSelf->__PVT__istream_rdy;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__istream_val = vlSymsp->TOP__top__src.__PVT__val;
    vlSelf->__PVT__istream_msg = vlSymsp->TOP__top__src.__PVT__msg;
    vlSelf->__PVT__ostream_rdy = vlSymsp->TOP__top__sink.__PVT__rdy;
    vlSymsp->TOP__top__imul.__PVT__istream_val = vlSelf->__PVT__istream_val;
    vlSymsp->TOP__top__imul.__PVT__istream_msg = vlSelf->__PVT__istream_msg;
    vlSymsp->TOP__top__imul.__PVT__ostream_rdy = vlSelf->__PVT__ostream_rdy;
}

VL_ATTR_COLD void Vtop_top___configure_coverage(Vtop_top* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tb_IntMul_RandDelay.v", 115, 7, "", "v_branch/top", "if", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tb_IntMul_RandDelay.v", 115, 8, "", "v_branch/top", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb_IntMul_RandDelay.v", 113, 5, "", "v_line/top", "block", "113-114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tb_IntMul_RandDelay.v", 152, 19, "", "v_line/top", "block", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tb_IntMul_RandDelay.v", 147, 8, "", "v_line/top", "block", "147,151,155-156,158");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb_IntMul_RandDelay.v", 184, 5, "", "v_line/top", "block", "184-187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tb_IntMul_RandDelay.v", 170, 3, "", "v_line/top", "block", "170,174-178,184,195-196,200-201,204-205,208-209,212-213,216-217,219-220,224-225,227-228,231-232,234-235,237-238,240-241,243-244,246-247,249-250,252-253,255-256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tb_IntMul_RandDelay.v", 276, 5, "", "v_line/top", "block", "276");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tb_IntMul_RandDelay.v", 279, 6, "", "v_line/top", "else", "282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tb_IntMul_RandDelay.v", 265, 3, "", "v_line/top", "block", "265,267-268,271-273,285-286");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tb_IntMul_RandDelay.v", 296, 5, "", "v_line/top", "block", "296-297");
}
