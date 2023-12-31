// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0____Vfork_1__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0____Vfork_1__0\n"); );
    // Body
    co_await VL_NULL_CHECK(vlSelf->top__DOT__gen, "../lab1_imul/tb_IntMul.v", 173)->__VnoInFunc_run(vlSymsp, 1U);
}
