// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelaySink__P20_PB1c.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__0(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__0\n"); );
    // Body
    vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay 
        = vlSelf->__PVT__max_delay;
    vlSelf->__PVT__done = vlSymsp->TOP__top__sink__sink.__PVT__done;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__1(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__1\n"); );
    // Body
    vlSymsp->TOP__top__sink__msg_delay.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink__sink.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink__msg_delay.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__sink__sink.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg 
        = vlSelf->__PVT__msg;
    vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val 
        = vlSelf->__PVT__val;
    vlSelf->__PVT__sink_rdy = vlSymsp->TOP__top__sink__sink.__PVT__rdy;
    vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy 
        = vlSelf->__PVT__sink_rdy;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__2(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__2\n"); );
    // Body
    vlSelf->__PVT__sink_val = vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val;
    vlSelf->__PVT__rdy = vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy;
    vlSelf->__PVT__sink_msg = vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg;
    vlSymsp->TOP__top__sink__sink.__PVT__val = vlSelf->__PVT__sink_val;
    vlSymsp->TOP__top__sink__sink.__PVT__msg = vlSelf->__PVT__sink_msg;
}
