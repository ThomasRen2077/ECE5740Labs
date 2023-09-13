// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_Trace.h"

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSelf->__PVT__cycles = 0U;
}

VL_ATTR_COLD void Vtop_vc_Trace___ctor_var_reset(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__len0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__len1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->__PVT__storage);
    vlSelf->__PVT__cycles_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cycles = VL_RAND_RESET_I(32);
    vlSelf->__PVT__level = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__level = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__cycles = VL_RAND_RESET_I(32);
}
