// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P40.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__0\n"); );
    // Body
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__3(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__3\n"); );
    // Body
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0ULL);
}
