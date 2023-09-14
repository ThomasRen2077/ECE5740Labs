// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_SimpleAdder__P20.h"

VL_ATTR_COLD void Vtop_vc_SimpleAdder__P20___stl_sequent__TOP__top__imul__Add__0(Vtop_vc_SimpleAdder__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_SimpleAdder__P20___stl_sequent__TOP__top__imul__Add__0\n"); );
    // Body
    vlSelf->__PVT__out = (vlSelf->__PVT__in0 + vlSelf->__PVT__in1);
}

VL_ATTR_COLD void Vtop_vc_SimpleAdder__P20___ctor_var_reset(Vtop_vc_SimpleAdder__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_SimpleAdder__P20___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__in0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__out = VL_RAND_RESET_I(32);
}

VL_ATTR_COLD void Vtop_vc_SimpleAdder__P20___configure_coverage(Vtop_vc_SimpleAdder__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_SimpleAdder__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
