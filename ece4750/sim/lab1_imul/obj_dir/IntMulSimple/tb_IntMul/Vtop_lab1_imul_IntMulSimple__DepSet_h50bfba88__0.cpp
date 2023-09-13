// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulSimple.h"

VL_INLINE_OPT void Vtop_lab1_imul_IntMulSimple___ico_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___ico_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSymsp->TOP__top__imul__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulSimple___act_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___act_comb__TOP__top__imul__0\n"); );
    // Body
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
    vlSelf->__PVT__b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
    vlSelf->__PVT__next_ostream_val = vlSelf->__PVT__ostream_val;
    vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
    if (((IData)(vlSelf->__PVT__istream_val) & (IData)(vlSelf->__PVT__istream_rdy))) {
        vlSelf->__PVT__next_ostream_msg = (vlSelf->__PVT__a 
                                           * vlSelf->__PVT__b);
        vlSelf->__PVT__next_ostream_val = 1U;
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__ostream_val) & (IData)(vlSelf->__PVT__ostream_rdy))) {
        vlSelf->__PVT__next_ostream_val = 0U;
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulSimple___nba_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___nba_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSelf->__Vdly__ostream_msg = vlSelf->__PVT__ostream_msg;
    vlSelf->__Vdly__ostream_val = vlSelf->__PVT__ostream_val;
    vlSelf->__Vdly__istream_rdy = vlSelf->__PVT__istream_rdy;
    vlSelf->__Vdly__istream_rdy = 1U;
    if (vlSelf->__PVT__next_ostream_val) {
        vlSelf->__Vdly__istream_rdy = 0U;
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->__Vdly__ostream_val = vlSelf->__PVT__next_ostream_val;
    vlSelf->__Vdly__ostream_msg = vlSelf->__PVT__next_ostream_msg;
    vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__istream_rdy = vlSelf->__Vdly__istream_rdy;
    vlSelf->__PVT__ostream_val = vlSelf->__Vdly__ostream_val;
    vlSelf->__PVT__ostream_msg = vlSelf->__Vdly__ostream_msg;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulSimple___nba_comb__TOP__top__imul__1(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___nba_comb__TOP__top__imul__1\n"); );
    // Body
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulSimple___nba_comb__TOP__top__imul__2(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___nba_comb__TOP__top__imul__2\n"); );
    // Body
    vlSelf->__PVT__next_ostream_val = vlSelf->__PVT__ostream_val;
    vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
    if (((IData)(vlSelf->__PVT__istream_val) & (IData)(vlSelf->__PVT__istream_rdy))) {
        vlSelf->__PVT__next_ostream_msg = (vlSelf->__PVT__a 
                                           * vlSelf->__PVT__b);
        vlSelf->__PVT__next_ostream_val = 1U;
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__ostream_val) & (IData)(vlSelf->__PVT__ostream_rdy))) {
        vlSelf->__PVT__next_ostream_val = 0U;
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
}
