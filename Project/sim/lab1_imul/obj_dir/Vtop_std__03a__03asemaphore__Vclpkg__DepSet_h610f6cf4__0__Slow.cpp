// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_std__03a__03asemaphore__Vclpkg.h"

VL_ATTR_COLD void Vtop_std__03a__03asemaphore__Vclpkg___configure_coverage(Vtop_std__03a__03asemaphore__Vclpkg* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtop_std__03a__03asemaphore__Vclpkg___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[515]), first, "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 91, 16, "", "v_line/semaphore", "block", "91-92");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[516]), first, "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 95, 21, "", "v_line/semaphore", "block", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[517]), first, "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 99, 12, "", "v_line/semaphore", "block", "99,101-102");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[518]), first, "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 107, 10, "", "v_branch/semaphore", "if", "107-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[519]), first, "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 107, 11, "", "v_branch/semaphore", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[520]), first, "/home/thomasyyyy2077/verilator/include/verilated_std.sv", 106, 20, "", "v_line/semaphore", "block", "106,111");
}
