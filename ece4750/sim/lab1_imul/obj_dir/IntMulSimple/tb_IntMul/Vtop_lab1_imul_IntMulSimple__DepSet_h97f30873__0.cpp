// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulSimple.h"

VL_INLINE_OPT void Vtop_lab1_imul_IntMulSimple___nba_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___nba_comb__TOP__top__imul__0\n"); );
    // Body
    vlSelf->__PVT__a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
    vlSelf->__PVT__b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
}
