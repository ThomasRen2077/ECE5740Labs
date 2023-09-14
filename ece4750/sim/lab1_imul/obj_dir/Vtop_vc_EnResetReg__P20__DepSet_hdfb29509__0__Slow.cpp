// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P20.h"

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___configure_coverage(Vtop_vc_EnResetReg__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "../vc/regs.v", 103, 5, "", "v_branch/vc_EnResetReg__P20", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "../vc/regs.v", 103, 6, "", "v_branch/vc_EnResetReg__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "../vc/regs.v", 102, 3, "", "v_line/vc_EnResetReg__P20", "block", "102");
}
