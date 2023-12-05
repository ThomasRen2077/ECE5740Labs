// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_top.h"

VlCoroutine Vtop_top___eval_initial__TOP__top__0__0(Vtop_top* vlSelf);
VlCoroutine Vtop_top___eval_initial__TOP__top__0__1(Vtop_top* vlSelf);

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__0\n"); );
    // Body
    co_await Vtop_top___eval_initial__TOP__top__0__0(vlSelf);
    co_await Vtop_top___eval_initial__TOP__top__0__1(vlSelf);
}
