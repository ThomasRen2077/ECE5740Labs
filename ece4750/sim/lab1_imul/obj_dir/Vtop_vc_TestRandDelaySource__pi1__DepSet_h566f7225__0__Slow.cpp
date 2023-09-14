// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelaySource__pi1.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__0(Vtop_vc_TestRandDelaySource__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__0\n"); );
    // Body
    vlSymsp->TOP__top__src__msg_delay.__PVT__max_delay 
        = vlSelf->__PVT__max_delay;
    vlSelf->__PVT__done = vlSymsp->TOP__top__src__src.__PVT__done;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__1(Vtop_vc_TestRandDelaySource__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__1\n"); );
    // Body
    vlSymsp->TOP__top__src__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src__msg_delay.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src__src.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__src__msg_delay.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy 
        = vlSelf->__PVT__rdy;
    vlSelf->__PVT__src_val = vlSymsp->TOP__top__src__src.__PVT__val;
    vlSelf->__PVT__src_msg = vlSymsp->TOP__top__src__src.__PVT__msg;
    vlSymsp->TOP__top__src__msg_delay.__PVT__in_val 
        = vlSelf->__PVT__src_val;
    vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg 
        = vlSelf->__PVT__src_msg;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__2(Vtop_vc_TestRandDelaySource__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__2\n"); );
    // Body
    vlSelf->__PVT__src_rdy = vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy;
    vlSelf->__PVT__val = vlSymsp->TOP__top__src__msg_delay.__PVT__out_val;
    vlSelf->__PVT__msg = vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg;
    vlSymsp->TOP__top__src__src.__PVT__rdy = vlSelf->__PVT__src_rdy;
}
