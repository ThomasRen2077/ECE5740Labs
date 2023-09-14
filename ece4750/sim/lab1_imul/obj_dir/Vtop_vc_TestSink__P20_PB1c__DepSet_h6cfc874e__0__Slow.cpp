// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestSink__P20_PB1c.h"

VL_ATTR_COLD void Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    vlSelf->__PVT__index = vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q;
    vlSelf->__PVT__rdy = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
    vlSelf->__PVT__done_next = ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (0x1bU == (IData)(vlSelf->__PVT__index)));
    vlSelf->__PVT__m_curr = ((0x1bU >= (IData)(vlSelf->__PVT__index))
                              ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                              : 0U);
    vlSelf->__PVT__index_next = (0x1fU & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__index)));
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d 
        = vlSelf->__PVT__index_next;
}

VL_ATTR_COLD void Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__1\n"); );
    // Body
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__2(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__2\n"); );
    // Body
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = ((IData)(vlSelf->__PVT__val) 
                               & (IData)(vlSelf->__PVT__rdy));
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}

VL_ATTR_COLD void Vtop_vc_TestSink__P20_PB1c___configure_coverage(Vtop_vc_TestSink__P20_PB1c* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "../vc/TestSink.v", 68, 3, "", "v_line/vc_TestSink__P20_PB1c", "block", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "../vc/TestSink.v", 79, 5, "", "v_branch/vc_TestSink__P20_PB1c", "if", "79");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "../vc/TestSink.v", 79, 6, "", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "../vc/TestSink.v", 78, 3, "", "v_line/vc_TestSink__P20_PB1c", "block", "78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "../vc/TestSink.v", 114, 16, "", "v_line/vc_TestSink__P20_PB1c", "case", "114-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "../vc/TestSink.v", 125, 11, "", "v_branch/vc_TestSink__P20_PB1c", "if", "125-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "../vc/TestSink.v", 125, 12, "", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "../vc/TestSink.v", 119, 9, "", "v_line/vc_TestSink__P20_PB1c", "case", "119-123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "../vc/TestSink.v", 111, 10, "", "v_branch/vc_TestSink__P20_PB1c", "if", "111,113");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "../vc/TestSink.v", 111, 11, "", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "../vc/TestSink.v", 108, 5, "", "v_line/vc_TestSink__P20_PB1c", "elsif", "108-109");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "../vc/TestSink.v", 107, 3, "", "v_line/vc_TestSink__P20_PB1c", "block", "107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "../vc/TestSink.v", 150, 3, "", "v_branch/vc_TestSink__P20_PB1c", "if", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "../vc/TestSink.v", 150, 4, "", "v_branch/vc_TestSink__P20_PB1c", "else", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "../vc/TestSink.v", 150, 3, "", "v_branch/vc_TestSink__P20_PB1c", "if", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "../vc/TestSink.v", 150, 4, "", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "../vc/TestSink.v", 151, 3, "", "v_branch/vc_TestSink__P20_PB1c", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "../vc/TestSink.v", 151, 4, "", "v_branch/vc_TestSink__P20_PB1c", "else", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "../vc/TestSink.v", 151, 3, "", "v_branch/vc_TestSink__P20_PB1c", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "../vc/TestSink.v", 151, 4, "", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "../vc/TestSink.v", 149, 5, "", "v_branch/vc_TestSink__P20_PB1c", "if", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "../vc/TestSink.v", 149, 6, "", "v_branch/vc_TestSink__P20_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "../vc/TestSink.v", 148, 3, "", "v_line/vc_TestSink__P20_PB1c", "block", "148");
}
