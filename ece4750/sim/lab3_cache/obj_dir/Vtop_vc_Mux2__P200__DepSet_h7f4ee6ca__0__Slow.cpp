// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P200.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P200___stl_sequent__TOP__top__DUT__darray_write_mux__0(Vtop_vc_Mux2__P200* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P200___stl_sequent__TOP__top__DUT__darray_write_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[1154].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(512,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[1155].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(512,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1156].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Mux2__P200___configure_coverage(Vtop_vc_Mux2__P200* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P200___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1152]), first, "../vc/muxes.v", 17, 30, "", "v_toggle/vc_Mux2__P200", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1153]), first, "../vc/muxes.v", 24, 12, "", "v_line/vc_Mux2__P200", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1154]), first, "../vc/muxes.v", 25, 12, "", "v_line/vc_Mux2__P200", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1155]), first, "../vc/muxes.v", 26, 7, "", "v_line/vc_Mux2__P200", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1156]), first, "../vc/muxes.v", 21, 3, "", "v_line/vc_Mux2__P200", "block", "21-23");
}
