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
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__memreq_val));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__memreq_type));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__memresp_rdy));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__cache_req_rdy));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__cache_resp_val));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__cache_resp_type));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__tarray_match));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__current_dirty));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__spill_done));
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__refill_req_done));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__refill_resp_done));
        bufp->chgBit(oldp+12,((1U & (~ (IData)(vlSelf->top__DOT__memresp_rdy)))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+13,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_M0)))));
        bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__stall_Y)))));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__DUT__DOT__input_go));
        bufp->chgBit(oldp+16,((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__input_go)))));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__DUT__DOT__stall_Y));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__DUT__DOT__ostall_M0));
        bufp->chgBit(oldp+19,(vlSelf->top__DOT__DUT__DOT__stall_M0));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__memresp_val));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__cache_req_val));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__cache_resp_rdy));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__tarray_wen));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__darray_wen));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__spill_one_word_done));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__refill_one_word_req_sent));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__refill_one_word_resp_received));
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__DUT__DOT__state_next),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__memresp_type));
        bufp->chgBit(oldp+30,(vlSelf->top__DOT__cache_req_type));
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__tarray_en));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__z6b_sel));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__darray_write_mux_sel));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__write_en_sel));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__Spill_or_Refill_sel));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__DUT__DOT__val_M0));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__DUT__DOT__mem_req_type_M0));
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__DUT__DOT__state_reg),2);
    }
    bufp->chgBit(oldp+39,(vlSelf->clk));
    bufp->chgBit(oldp+40,(vlSelf->linetrace));
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
