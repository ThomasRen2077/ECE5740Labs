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
        bufp->chgWData(oldp+0,(vlSelf->top__DOT__dut__DOT__PHT),2048);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__dut__DOT__GHR),10);
    }
    bufp->chgBit(oldp+65,(vlSelf->clk));
    bufp->chgBit(oldp+66,(vlSelf->reset));
    bufp->chgBit(oldp+67,(vlSelf->update_en));
    bufp->chgBit(oldp+68,(vlSelf->update_val));
    bufp->chgIData(oldp+69,(vlSelf->PC),32);
    bufp->chgBit(oldp+70,(vlSelf->prediction));
    bufp->chgSData(oldp+71,((0x3ffU & (vlSelf->PC >> 2U))),10);
    bufp->chgCData(oldp+72,((3U & (((0U == (0x1fU & 
                                            ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                             << 1U)))
                                     ? 0U : (vlSelf->top__DOT__dut__DOT__PHT[
                                             (((IData)(1U) 
                                               + (0x7ffU 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                     << 1U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                     << 1U))))) 
                                   | (vlSelf->top__DOT__dut__DOT__PHT[
                                      (0x3fU & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                >> 4U))] 
                                      >> (0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                   << 1U)))))),2);
    bufp->chgSData(oldp+73,(vlSelf->top__DOT__dut__DOT__PHT_index),10);
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
