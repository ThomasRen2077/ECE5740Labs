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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__shift_factor),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__unnamedblk10__DOT__x),32);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__unnamedblk11__DOT__x),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__unnamedblk12__DOT__x),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__unnamedblk13__DOT__x),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__unnamedblk14__DOT__x),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__unnamedblk15__DOT__x),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__unnamedblk15__DOT__unnamedblk16__DOT__y),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__unnamedblk2__DOT__x),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__unnamedblk3__DOT__x),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__unnamedblk4__DOT__x),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__unnamedblk5__DOT__x),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__unnamedblk6__DOT__x),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__y),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__unnamedblk8__DOT__x),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__y),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__update_en));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__update_val));
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__my_pc),32);
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__my_update_en));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__my_update_val));
        bufp->chgSData(oldp+24,((0x7ffU & (vlSelf->top__DOT__PC 
                                           >> 2U))),11);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__unnamedblk17__DOT__x),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__unnamedblk19__DOT__x),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__unnamedblk21__DOT__x),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+31,(vlSelf->top__DOT__DUT__DOT__PHT),4096);
        bufp->chgSData(oldp+159,(vlSelf->top__DOT__DUT__DOT__GHR),11);
    }
    bufp->chgBit(oldp+160,(vlSelf->clk));
    bufp->chgBit(oldp+161,(vlSelf->linetrace));
    bufp->chgBit(oldp+162,((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                  >> 1U))));
    bufp->chgCData(oldp+163,(vlSelf->top__DOT__DUT__DOT__current_PHT),2);
    bufp->chgSData(oldp+164,(vlSelf->top__DOT__DUT__DOT__PHT_index),11);
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
}
