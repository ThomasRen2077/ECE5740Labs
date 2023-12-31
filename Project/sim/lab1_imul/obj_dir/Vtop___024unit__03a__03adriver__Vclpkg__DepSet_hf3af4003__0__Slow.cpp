// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"

VL_ATTR_COLD void Vtop___024unit__03a__03adriver__Vclpkg___configure_coverage(Vtop___024unit__03a__03adriver__Vclpkg* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop___024unit__03a__03adriver__Vclpkg___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[510]), first, "../lab1_imul/tb_IntMul.v", 98, 12, "", "v_line/driver", "block", "98-99");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[511]), first, "../lab1_imul/tb_IntMul.v", 112, 7, "", "v_line/driver", "block", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[512]), first, "../lab1_imul/tb_IntMul.v", 103, 5, "", "v_line/driver", "block", "103-111,113-115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[513]), first, "../lab1_imul/tb_IntMul.v", 102, 8, "", "v_line/driver", "block", "102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[514]), first, "../lab1_imul/tb_IntMul.v", 119, 8, "", "v_line/driver", "block", "119,121-124");
}
