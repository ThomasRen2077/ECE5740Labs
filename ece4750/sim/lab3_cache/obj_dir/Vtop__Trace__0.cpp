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
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__top.__PVT__in0),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__top.__PVT__in1),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__top.__PVT__in2),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__top.__PVT__in3),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__top.__PVT__in4),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__top.__PVT__in5),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__top.__PVT__in6),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__top.__PVT__in7),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__top.__PVT__in8),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__top.__PVT__in9),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__top.__PVT__in10),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__top.__PVT__in11),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__top.__PVT__in12),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__top.__PVT__in13),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__top.__PVT__in14),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__top.__PVT__in15),32);
        bufp->chgCData(oldp+16,(vlSymsp->TOP__top.__PVT__sel),4);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+17,(vlSymsp->TOP__top.__PVT__out),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__top__output_mux.__PVT__in0),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__top__output_mux.__PVT__in1),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__top__output_mux.__PVT__in2),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__top__output_mux.__PVT__in3),32);
        bufp->chgIData(oldp+22,(vlSymsp->TOP__top__output_mux.__PVT__in4),32);
        bufp->chgIData(oldp+23,(vlSymsp->TOP__top__output_mux.__PVT__in5),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__top__output_mux.__PVT__in6),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__top__output_mux.__PVT__in7),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__top__output_mux.__PVT__in8),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__top__output_mux.__PVT__in9),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__top__output_mux.__PVT__in10),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__top__output_mux.__PVT__in11),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__top__output_mux.__PVT__in12),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__top__output_mux.__PVT__in13),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__top__output_mux.__PVT__in14),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__top__output_mux.__PVT__in15),32);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__top__output_mux.__PVT__sel),4);
        bufp->chgIData(oldp+35,(vlSymsp->TOP__top__output_mux.__PVT__out),32);
    }
    bufp->chgBit(oldp+36,(vlSelf->clk));
    bufp->chgBit(oldp+37,(vlSelf->linetrace));
    bufp->chgBit(oldp+38,(vlSymsp->TOP__top.clk));
    bufp->chgBit(oldp+39,(vlSymsp->TOP__top.linetrace));
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
}
