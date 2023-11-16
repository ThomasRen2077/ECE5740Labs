// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2.h"

VL_INLINE_OPT void Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__0(Vtop_vc_Mux2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__1(Vtop_vc_Mux2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in1) ^ (IData)(vlSelf->__Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in1 = vlSelf->__PVT__in1;
    }
    if (((IData)(vlSelf->__PVT__in0) ^ (IData)(vlSelf->__Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in0 = vlSelf->__PVT__in0;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out) ^ (IData)(vlSelf->__Vtogcov__out))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out = vlSelf->__PVT__out;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__0(Vtop_vc_Mux2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__1(Vtop_vc_Mux2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in1) ^ (IData)(vlSelf->__Vtogcov__in1))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in1 = vlSelf->__PVT__in1;
    }
    if (((IData)(vlSelf->__PVT__in0) ^ (IData)(vlSelf->__Vtogcov__in0))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in0 = vlSelf->__PVT__in0;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out) ^ (IData)(vlSelf->__Vtogcov__out))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out = vlSelf->__PVT__out;
    }
}
