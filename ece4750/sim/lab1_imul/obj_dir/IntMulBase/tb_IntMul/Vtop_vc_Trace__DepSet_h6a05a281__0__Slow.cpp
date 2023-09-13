// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Trace.h"

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___configure_coverage(Vtop_vc_Trace* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Trace___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "../vc/trace.v", 44, 25, "", "v_line/vc_Trace", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "../vc/trace.v", 45, 25, "", "v_line/vc_Trace", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "../vc/trace.v", 62, 3, "", "v_line/vc_Trace", "block", "62-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "../vc/trace.v", 71, 3, "", "v_line/vc_Trace", "block", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "../vc/trace.v", 89, 5, "", "v_line/vc_Trace", "block", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "../vc/trace.v", 95, 5, "", "v_line/vc_Trace", "block", "95-97,99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "../vc/trace.v", 80, 8, "", "v_line/vc_Trace", "block", "80,85-86,88,93,95,103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "../vc/trace.v", 123, 5, "", "v_line/vc_Trace", "block", "123-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "../vc/trace.v", 113, 8, "", "v_line/vc_Trace", "block", "113,118,120-121,129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "../vc/trace.v", 149, 5, "", "v_line/vc_Trace", "block", "149-153,155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "../vc/trace.v", 139, 8, "", "v_line/vc_Trace", "block", "139,145-147,149,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "../vc/trace.v", 178, 5, "", "v_line/vc_Trace", "block", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "../vc/trace.v", 184, 10, "", "v_line/vc_Trace", "if", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "../vc/trace.v", 184, 11, "", "v_line/vc_Trace", "else", "186-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "../vc/trace.v", 182, 5, "", "v_line/vc_Trace", "elsif", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "../vc/trace.v", 169, 8, "", "v_line/vc_Trace", "block", "169,175,177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "../vc/trace.v", 209, 5, "", "v_line/vc_Trace", "block", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "../vc/trace.v", 223, 10, "", "v_line/vc_Trace", "if", "223-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "../vc/trace.v", 223, 11, "", "v_line/vc_Trace", "else", "227-229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "../vc/trace.v", 219, 10, "", "v_line/vc_Trace", "elsif", "219-221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "../vc/trace.v", 216, 10, "", "v_line/vc_Trace", "elsif", "216-217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "../vc/trace.v", 213, 5, "", "v_line/vc_Trace", "elsif", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "../vc/trace.v", 199, 8, "", "v_line/vc_Trace", "block", "199,206,208");
}
