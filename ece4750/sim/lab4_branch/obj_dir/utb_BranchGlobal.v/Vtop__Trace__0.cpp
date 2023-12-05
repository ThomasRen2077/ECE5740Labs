// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.__PVT__reset));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__top.__PVT__update_en));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__top.__PVT__update_val));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__top.__PVT__PC),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top.__PVT__my_pc),32);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__top.__PVT__my_update_en));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__top.__PVT__my_update_val));
        bufp->chgIData(oldp+7,(vlSymsp->TOP__top.__PVT__shift_factor),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top.__PVT__unnamedblk10__DOT__x),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__top.__PVT__unnamedblk11__DOT__x),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top.__PVT__unnamedblk12__DOT__x),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__top.__PVT__unnamedblk13__DOT__x),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__top.__PVT__unnamedblk14__DOT__x),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__top.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__top.__PVT__unnamedblk3__DOT__x),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__top.__PVT__unnamedblk4__DOT__x),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__top.__PVT__unnamedblk5__DOT__x),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__top.__PVT__unnamedblk6__DOT__x),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__top.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__top.__PVT__unnamedblk8__DOT__x),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__top.__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+22,(vlSymsp->TOP__top.clk));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__top.linetrace));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__top__DUT.__PVT__clk));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+25,(vlSymsp->TOP__top__DUT.__PVT__reset));
        bufp->chgBit(oldp+26,(vlSymsp->TOP__top__DUT.__PVT__update_en));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__top__DUT.__PVT__update_val));
        bufp->chgIData(oldp+28,(vlSymsp->TOP__top__DUT.__PVT__PC),32);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__top__DUT.__PVT__GHR_update_value));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+30,(vlSymsp->TOP__top.__PVT__prediction));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__top__DUT.__PVT__prediction));
        bufp->chgWData(oldp+32,(vlSymsp->TOP__top__DUT.__PVT__PHT),4096);
        bufp->chgSData(oldp+160,(vlSymsp->TOP__top__DUT.__PVT__GHR),11);
        bufp->chgCData(oldp+161,(vlSymsp->TOP__top__DUT.__PVT__current_PHT),2);
    }
    bufp->chgBit(oldp+162,(vlSelf->clk));
    bufp->chgBit(oldp+163,(vlSelf->linetrace));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
