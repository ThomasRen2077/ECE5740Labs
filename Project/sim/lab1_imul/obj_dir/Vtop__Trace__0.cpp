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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT____Vcellout__imul__istream_rdy));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT____Vcellout__imul__ostream_val));
        bufp->chgIData(oldp+2,(vlSelf->top__DOT____Vcellout__imul__ostream_msg),32);
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__imul__DOT__a_mux_sel));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__imul__DOT__b_mux_sel));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__imul__DOT__result_mux_sel));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__imul__DOT__result_reg_en));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__imul__DOT__add_mux_sel));
        bufp->chgBit(oldp+8,((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgBit(oldp+9,((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)));
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out),32);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next),2);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go));
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go));
        bufp->chgBit(oldp+15,((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))));
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out),32);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out),4);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out),32);
        bufp->chgCData(oldp+26,((0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)),8);
    }
    bufp->chgBit(oldp+27,(vlSelf->clk));
    bufp->chgBit(oldp+28,(vlSelf->linetrace));
    bufp->chgBit(oldp+29,(vlSymsp->TOP__top__DOT__iml_if.clk));
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
}
