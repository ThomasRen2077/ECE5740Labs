// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top\n"); );
}

VL_ATTR_COLD void Vtop_top___ctor_var_reset(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in15 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__out = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__in0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in2 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in3 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in4 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in5 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in6 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in7 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in8 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in9 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in10 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in11 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in12 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in13 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in14 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in15 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__sel = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__out = VL_RAND_RESET_I(32);
}
