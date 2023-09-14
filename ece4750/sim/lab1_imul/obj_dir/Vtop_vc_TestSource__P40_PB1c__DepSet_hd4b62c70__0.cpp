// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_TestSource__P40_PB1c.h"

VL_INLINE_OPT void Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__1(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__1\n"); );
    // Body
    vlSelf->__PVT__done_next = ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (0x1bU == (IData)(vlSelf->__PVT__index)));
}
