// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulSimple.h"

VL_ATTR_COLD void Vtop_lab1_imul_IntMulSimple___stl_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___stl_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__imul__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
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

VL_ATTR_COLD void Vtop_lab1_imul_IntMulSimple___configure_coverage(Vtop_lab1_imul_IntMulSimple* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "IntMulSimple.v", 33, 9, "", "v_branch/lab1_imul_IntMulSimple", "if", "33-34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "IntMulSimple.v", 33, 10, "", "v_branch/lab1_imul_IntMulSimple", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "IntMulSimple.v", 31, 5, "", "v_line/lab1_imul_IntMulSimple", "block", "31-32,37-38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "IntMulSimple.v", 45, 7, "", "v_branch/lab1_imul_IntMulSimple", "if", "45-47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "IntMulSimple.v", 45, 8, "", "v_branch/lab1_imul_IntMulSimple", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "IntMulSimple.v", 49, 7, "", "v_branch/lab1_imul_IntMulSimple", "if", "49-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "IntMulSimple.v", 49, 8, "", "v_branch/lab1_imul_IntMulSimple", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "IntMulSimple.v", 42, 5, "", "v_line/lab1_imul_IntMulSimple", "block", "42-44");
}
