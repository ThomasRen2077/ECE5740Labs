// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestSink__P20_PB1c.h"

VL_INLINE_OPT void Vtop_vc_TestSink__P20_PB1c___ico_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___ico_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestSink__P20_PB1c___act_comb__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___act_comb__TOP__top__sink__sink__0\n"); );
    // Body
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT void Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset_reg;
    vlSelf->__Vdly__done = vlSelf->__PVT__done;
    vlSelf->__Vdly__failed = vlSelf->__PVT__failed;
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset;
    vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__val) & (IData)(vlSelf->__PVT__rdy))) {
        vlSelf->__Vdly__done = vlSelf->__PVT__done_next;
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__failed = 0U;
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
    } else if (((~ (IData)(vlSelf->__PVT__reset)) & (IData)(vlSelf->__PVT__go))) {
        if ((vlSelf->__PVT__msg == vlSelf->__PVT__m_curr)) {
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            VL_WRITEF("     [ passed ] expected = %x, actual = %x\n",
                      32,((0x1bU >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0U),32,vlSelf->__PVT__msg);
            vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        } else {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            vlSelf->__Vdly__failed = 1U;
            VL_WRITEF("     [ FAILED ] expected = %x, actual = %x\n",
                      32,((0x1bU >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0U),32,vlSelf->__PVT__msg);
            vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__reset_reg = vlSelf->__Vdly__reset_reg;
    vlSelf->__PVT__done = vlSelf->__Vdly__done;
    vlSelf->__PVT__failed = vlSelf->__Vdly__failed;
    vlSelf->__PVT__rdy = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
}

VL_INLINE_OPT void Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__1\n"); );
    // Body
    vlSelf->__PVT__index = vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q;
    vlSelf->__PVT__m_curr = ((0x1bU >= (IData)(vlSelf->__PVT__index))
                              ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                              : 0U);
    vlSelf->__PVT__index_next = (0x1fU & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__index)));
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d 
        = vlSelf->__PVT__index_next;
}

VL_INLINE_OPT void Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__0\n"); );
    // Body
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__2(Vtop_vc_TestSink__P20_PB1c* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__2\n"); );
    // Body
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = ((IData)(vlSelf->__PVT__val) 
                               & (IData)(vlSelf->__PVT__rdy));
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}
