// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_Trace.h"

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__imul__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___eval_initial__TOP__top__imul__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 1U;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__imul__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___nba_sequent__TOP__top__imul__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}
