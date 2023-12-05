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
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top.clk));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__top.linetrace));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__top__DUT.__PVT__clk));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+3,(vlSymsp->TOP__top__DUT.__PVT__reset));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__top__DUT.__PVT__update_en));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__top__DUT.__PVT__update_val));
        bufp->chgIData(oldp+6,(vlSymsp->TOP__top__DUT.__PVT__PC),32);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__top__DUT.__PVT__PHT_index_update_value));
        bufp->chgCData(oldp+8,(vlSymsp->TOP__top__DUT.__PVT__BH_index),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+9,(vlSymsp->TOP__top__DUT.__PVT__PHT),4096);
        bufp->chgQData(oldp+137,(vlSymsp->TOP__top__DUT.__PVT__BH),44);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgIData(oldp+139,(vlSymsp->TOP__top.__PVT__shift_factor),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__top.__PVT__unnamedblk1__DOT__x),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__top.__PVT__unnamedblk10__DOT__x),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__top.__PVT__unnamedblk11__DOT__x),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__top.__PVT__unnamedblk12__DOT__x),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__top.__PVT__unnamedblk13__DOT__x),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__top.__PVT__unnamedblk14__DOT__x),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__top.__PVT__unnamedblk15__DOT__x),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__top.__PVT__unnamedblk15__DOT__unnamedblk16__DOT__y),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__top.__PVT__unnamedblk17__DOT__x),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__top.__PVT__unnamedblk17__DOT__unnamedblk18__DOT__y),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__top.__PVT__unnamedblk2__DOT__x),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__top.__PVT__unnamedblk3__DOT__x),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__top.__PVT__unnamedblk4__DOT__x),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__top.__PVT__unnamedblk5__DOT__x),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__top.__PVT__unnamedblk6__DOT__x),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__top.__PVT__unnamedblk6__DOT__unnamedblk7__DOT__y),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__top.__PVT__unnamedblk8__DOT__x),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__top.__PVT__unnamedblk8__DOT__unnamedblk9__DOT__y),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+158,(vlSymsp->TOP__top.__PVT__reset));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__top.__PVT__update_en));
        bufp->chgBit(oldp+160,(vlSymsp->TOP__top.__PVT__update_val));
        bufp->chgIData(oldp+161,(vlSymsp->TOP__top.__PVT__PC),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__top.__PVT__my_pc),32);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__top.__PVT__my_update_en));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__top.__PVT__my_update_val));
        bufp->chgIData(oldp+165,(vlSymsp->TOP__top.__PVT__unnamedblk19__DOT__unnamedblk20__DOT__y),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+166,(vlSymsp->TOP__top.__PVT__unnamedblk19__DOT__x),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__top.__PVT__unnamedblk21__DOT__x),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__top.__PVT__unnamedblk21__DOT__unnamedblk22__DOT__y),32);
    }
    bufp->chgBit(oldp+169,(vlSelf->clk));
    bufp->chgBit(oldp+170,(vlSelf->linetrace));
    bufp->chgBit(oldp+171,(vlSymsp->TOP__top.__PVT__prediction));
    bufp->chgBit(oldp+172,(vlSymsp->TOP__top__DUT.__PVT__prediction));
    bufp->chgCData(oldp+173,(vlSymsp->TOP__top__DUT.__PVT__current_PHT),2);
    bufp->chgSData(oldp+174,(vlSymsp->TOP__top__DUT.__PVT__PHT_index),11);
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
