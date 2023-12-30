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
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__istream_val));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__ostream_rdy));
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__istream_msg_a),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__istream_msg_b),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__unnamedblk1__DOT__x),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__imul__DOT__nextstate),2);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__imul__DOT__next_a),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__imul__DOT__next_b),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__imul__DOT__next_ostream_msg),32);
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__imul__DOT__next_ostream_val));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__istream_rdy));
        bufp->chgBit(oldp+12,(vlSelf->top__DOT__ostream_val));
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ostream_msg),32);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__imul__DOT__state),2);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__imul__DOT__a),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__imul__DOT__b),32);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__imul__DOT__counter),6);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__imul__DOT__add_result),32);
    }
    bufp->chgBit(oldp+19,(vlSelf->clk));
    bufp->chgBit(oldp+20,(vlSelf->linetrace));
    bufp->chgQData(oldp+21,(vlSelf->top__DOT__istream_msg),64);
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
}
