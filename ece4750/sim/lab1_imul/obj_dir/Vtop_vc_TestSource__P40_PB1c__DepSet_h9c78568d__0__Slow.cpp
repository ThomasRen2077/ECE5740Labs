// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestSource__P40_PB1c.h"

VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__0\n"); );
    // Body
    vlSelf->__PVT__index = vlSymsp->TOP__top__src__src__index_reg.__PVT__q;
    vlSelf->__PVT__val = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
    vlSelf->__PVT__done_next = ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (0x1bU == (IData)(vlSelf->__PVT__index)));
    vlSelf->__PVT__index_next = (0x1fU & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__index)));
    vlSelf->__PVT__msg = ((0x1bU >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0ULL);
    vlSymsp->TOP__top__src__src__index_reg.__PVT__d 
        = vlSelf->__PVT__index_next;
}

VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__1(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__1\n"); );
    // Body
    vlSymsp->TOP__top__src__src__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src__src__index_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__2(Vtop_vc_TestSource__P40_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__2\n"); );
    // Body
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = vlSelf->__PVT__go;
    vlSymsp->TOP__top__src__src__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}

VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___configure_coverage(Vtop_vc_TestSource__P40_PB1c* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSource__P40_PB1c___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "../vc/TestSource.v", 64, 3, "", "v_line/vc_TestSource__P40_PB1c", "block", "64-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "../vc/TestSource.v", 97, 5, "", "v_branch/vc_TestSource__P40_PB1c", "if", "97");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "../vc/TestSource.v", 97, 6, "", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "../vc/TestSource.v", 96, 3, "", "v_line/vc_TestSource__P40_PB1c", "block", "96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "../vc/TestSource.v", 125, 3, "", "v_branch/vc_TestSource__P40_PB1c", "if", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "../vc/TestSource.v", 125, 4, "", "v_branch/vc_TestSource__P40_PB1c", "else", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "../vc/TestSource.v", 125, 3, "", "v_branch/vc_TestSource__P40_PB1c", "if", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "../vc/TestSource.v", 125, 4, "", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "../vc/TestSource.v", 126, 3, "", "v_branch/vc_TestSource__P40_PB1c", "if", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "../vc/TestSource.v", 126, 4, "", "v_branch/vc_TestSource__P40_PB1c", "else", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "../vc/TestSource.v", 126, 3, "", "v_branch/vc_TestSource__P40_PB1c", "if", "126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "../vc/TestSource.v", 126, 4, "", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "../vc/TestSource.v", 124, 5, "", "v_branch/vc_TestSource__P40_PB1c", "if", "124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "../vc/TestSource.v", 124, 6, "", "v_branch/vc_TestSource__P40_PB1c", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "../vc/TestSource.v", 123, 3, "", "v_line/vc_TestSource__P40_PB1c", "block", "123");
}
