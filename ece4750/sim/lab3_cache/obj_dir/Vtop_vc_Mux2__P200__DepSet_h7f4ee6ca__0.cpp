// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P200.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__darray_write_mux__0(Vtop_vc_Mux2__P200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__darray_write_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(512,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__0(Vtop_vc_Mux2__P200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__1(Vtop_vc_Mux2__P200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(512,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__way_output_sel_mux__0(Vtop_vc_Mux2__P200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__way_output_sel_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(512,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__way_output_sel_mux__0(Vtop_vc_Mux2__P200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__way_output_sel_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(512,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
}
