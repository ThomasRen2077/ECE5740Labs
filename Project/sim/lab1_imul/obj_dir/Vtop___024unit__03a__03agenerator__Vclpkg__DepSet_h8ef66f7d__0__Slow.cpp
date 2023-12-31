// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"

VL_ATTR_COLD void Vtop___024unit__03a__03agenerator__Vclpkg___configure_coverage(Vtop___024unit__03a__03agenerator__Vclpkg* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop___024unit__03a__03agenerator__Vclpkg___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[506]), first, "../lab1_imul/tb_IntMul.v", 61, 12, "", "v_line/generator", "block", "61-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[507]), first, "../lab1_imul/tb_IntMul.v", 67, 5, "", "v_line/generator", "block", "67-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[508]), first, "../lab1_imul/tb_IntMul.v", 66, 8, "", "v_line/generator", "block", "66-67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[509]), first, "../lab1_imul/tb_IntMul.v", 76, 8, "", "v_line/generator", "block", "76,81-87");
}
