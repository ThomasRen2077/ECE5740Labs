// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestSource__P40_PB1c.h"

VL_INLINE_OPT void Vtop_vc_TestSource__P40_PB1c___ico_sequent__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___ico_sequent__TOP__top__src__src__0\n"); );
    // Body
    vlSymsp->TOP__top__src__src__index_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestSource__P40_PB1c___act_comb__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___act_comb__TOP__top__src__src__0\n"); );
    // Body
    vlSymsp->TOP__top__src__src__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset_reg;
    vlSelf->__Vdly__done = vlSelf->__PVT__done;
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset;
    vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__val) & (IData)(vlSelf->__PVT__rdy))) {
        vlSelf->__Vdly__done = vlSelf->__PVT__done_next;
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__reset_reg = vlSelf->__Vdly__reset_reg;
    vlSelf->__PVT__done = vlSelf->__Vdly__done;
    vlSelf->__PVT__val = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
}

VL_INLINE_OPT void Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__1(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__1\n"); );
    // Body
    vlSelf->__PVT__index = vlSymsp->TOP__top__src__src__index_reg.__PVT__q;
    vlSelf->__PVT__index_next = (0x1fU & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__index)));
    vlSelf->__PVT__msg = ((0x1bU >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0ULL);
    vlSymsp->TOP__top__src__src__index_reg.__PVT__d 
        = vlSelf->__PVT__index_next;
}

VL_INLINE_OPT void Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__0\n"); );
    // Body
    vlSymsp->TOP__top__src__src__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__2(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__2\n"); );
    // Body
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = vlSelf->__PVT__go;
    vlSymsp->TOP__top__src__src__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}
