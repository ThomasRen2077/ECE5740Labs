// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03atransaction__Vclpkg.h"

VL_ATTR_COLD void Vtop___024unit__03a__03atransaction__Vclpkg___configure_coverage(Vtop___024unit__03a__03atransaction__Vclpkg* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop___024unit__03a__03atransaction__Vclpkg___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[502]), first, "../lab1_imul/tb_IntMul.v", 43, 17, "", "v_line/transaction", "block", "43-44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[503]), first, "../lab1_imul/tb_IntMul.v", 47, 24, "", "v_line/transaction", "block", "47-51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[504]), first, "../lab1_imul/tb_IntMul.v", 38, 1, "", "v_line/transaction", "block", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[505]), first, "../lab1_imul/tb_IntMul.v", 38, 1, "", "v_line/transaction", "block", "38");
}
