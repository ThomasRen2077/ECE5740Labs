// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_SimpleAdder__P20.h"

VL_INLINE_OPT void Vtop_vc_SimpleAdder__P20___nba_sequent__TOP__top__imul__Add__0(Vtop_vc_SimpleAdder__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_SimpleAdder__P20___nba_sequent__TOP__top__imul__Add__0\n"); );
    // Body
    vlSelf->__PVT__out = (vlSelf->__PVT__in0 + vlSelf->__PVT__in1);
}
