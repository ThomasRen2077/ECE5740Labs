// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop_top___eval_initial__TOP__top(Vtop_top* vlSelf);
VlCoroutine Vtop_top___eval_initial__TOP__top__0(Vtop_top* vlSelf);
VlCoroutine Vtop_top___eval_initial__TOP__top__1(Vtop_top* vlSelf);
VlCoroutine Vtop_top___eval_initial__TOP__top__2(Vtop_top* vlSelf);
void Vtop_vc_Trace___eval_initial__TOP__top__imul__vc_trace(Vtop_vc_Trace* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop_top___eval_initial__TOP__top((&vlSymsp->TOP__top));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop_top___eval_initial__TOP__top__0((&vlSymsp->TOP__top));
    Vtop_top___eval_initial__TOP__top__1((&vlSymsp->TOP__top));
    Vtop_top___eval_initial__TOP__top__2((&vlSymsp->TOP__top));
    Vtop_vc_Trace___eval_initial__TOP__top__imul__vc_trace((&vlSymsp->TOP__top__imul__vc_trace));
    vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__i__0 
        = vlSymsp->TOP__top__imul.__PVT__i;
    vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__i__1 
        = vlSymsp->TOP__top__imul.__PVT__i;
    vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__clk__0 
        = vlSymsp->TOP__top__imul.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__imul__vc_trace____PVT__clk__0 
        = vlSymsp->TOP__top__imul__vc_trace.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__src____PVT__clk__0 
        = vlSymsp->TOP__top__src__src.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__msg_delay____PVT__clk__0 
        = vlSymsp->TOP__top__src__msg_delay.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__msg_delay____PVT__clk__0 
        = vlSymsp->TOP__top__sink__msg_delay.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__sink____PVT__clk__0 
        = vlSymsp->TOP__top__sink__sink.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__src__index_reg____PVT__clk__0 
        = vlSymsp->TOP__top__src__src__index_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__sink__index_reg____PVT__clk__0 
        = vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__msg_delay__rand_delay_reg____PVT__clk__0 
        = vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__msg_delay__rand_delay_reg____PVT__clk__0 
        = vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__clk__0 = vlSymsp->TOP__top.clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__top.linetrace = vlSelf->linetrace;
    vlSymsp->TOP__top.clk = vlSelf->clk;
}

void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_lab1_imul_IntMulAlt___ico_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___ico_sequent__TOP__top__src__0(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_vc_TestRandDelaySink__P20_PB1c___ico_sequent__TOP__top__sink__0(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
void Vtop_vc_TestSource__P40_PB1c___ico_sequent__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf);
void Vtop_vc_TestRandDelay__P40___ico_sequent__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_vc_TestRandDelay__P20___ico_sequent__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf);
void Vtop_vc_TestSink__P20_PB1c___ico_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_lab1_imul_IntMulAlt___ico_sequent__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        Vtop_vc_TestRandDelaySource__pi1___ico_sequent__TOP__top__src__0((&vlSymsp->TOP__top__src));
        Vtop_vc_TestRandDelaySink__P20_PB1c___ico_sequent__TOP__top__sink__0((&vlSymsp->TOP__top__sink));
        Vtop_vc_TestSource__P40_PB1c___ico_sequent__TOP__top__src__src__0((&vlSymsp->TOP__top__src__src));
        Vtop_vc_TestRandDelay__P40___ico_sequent__TOP__top__src__msg_delay__0((&vlSymsp->TOP__top__src__msg_delay));
        Vtop_vc_TestRandDelay__P20___ico_sequent__TOP__top__sink__msg_delay__0((&vlSymsp->TOP__top__sink__msg_delay));
        Vtop_vc_TestSink__P20_PB1c___ico_sequent__TOP__top__sink__sink__0((&vlSymsp->TOP__top__sink__sink));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__top__imul.__PVT__i) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__i__1)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__top__imul.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__top__imul__vc_trace.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__imul__vc_trace____PVT__clk__0))));
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__top__src__src.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__src__src____PVT__clk__0))));
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSymsp->TOP__top__src__msg_delay.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__src__msg_delay____PVT__clk__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSymsp->TOP__top__sink__msg_delay.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__sink__msg_delay____PVT__clk__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSymsp->TOP__top__sink__sink.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__sink__sink____PVT__clk__0))));
    vlSelf->__VactTriggered.set(7U, ((IData)(vlSymsp->TOP__top__src__src__index_reg.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__src__src__index_reg____PVT__clk__0))));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__sink__sink__index_reg____PVT__clk__0))));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__src__msg_delay__rand_delay_reg____PVT__clk__0))));
    vlSelf->__VactTriggered.set(0xaU, ((IData)(vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__sink__msg_delay__rand_delay_reg____PVT__clk__0))));
    vlSelf->__VactTriggered.set(0xbU, ((~ (IData)(vlSymsp->TOP__top.clk)) 
                                       & (IData)(vlSelf->__Vtrigprevexpr___TOP__top__clk__0)));
    vlSelf->__VactTriggered.set(0xcU, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__i__1 
        = vlSymsp->TOP__top__imul.__PVT__i;
    vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__clk__0 
        = vlSymsp->TOP__top__imul.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__imul__vc_trace____PVT__clk__0 
        = vlSymsp->TOP__top__imul__vc_trace.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__src____PVT__clk__0 
        = vlSymsp->TOP__top__src__src.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__msg_delay____PVT__clk__0 
        = vlSymsp->TOP__top__src__msg_delay.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__msg_delay____PVT__clk__0 
        = vlSymsp->TOP__top__sink__msg_delay.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__sink____PVT__clk__0 
        = vlSymsp->TOP__top__sink__sink.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__src__index_reg____PVT__clk__0 
        = vlSymsp->TOP__top__src__src__index_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__sink__index_reg____PVT__clk__0 
        = vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__src__msg_delay__rand_delay_reg____PVT__clk__0 
        = vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__sink__msg_delay__rand_delay_reg____PVT__clk__0 
        = vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__clk__0 = vlSymsp->TOP__top.clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_lab1_imul_IntMulAlt___act_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___act_comb__TOP__top__src__0(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_vc_TestRandDelaySink__P20_PB1c___act_comb__TOP__top__sink__0(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
void Vtop_vc_TestSource__P40_PB1c___act_comb__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf);
void Vtop_vc_TestRandDelay__P40___act_comb__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_vc_TestRandDelay__P20___act_comb__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf);
void Vtop_vc_TestSink__P20_PB1c___act_comb__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf);
void Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_vc_SimpleAdder__P20___act_sequent__TOP__top__imul__Add__0(Vtop_vc_SimpleAdder__P20* vlSelf);
void Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((0x1800ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_top___act_comb__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop_lab1_imul_IntMulAlt___act_comb__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        Vtop_vc_TestRandDelaySource__pi1___act_comb__TOP__top__src__0((&vlSymsp->TOP__top__src));
        Vtop_vc_TestRandDelaySink__P20_PB1c___act_comb__TOP__top__sink__0((&vlSymsp->TOP__top__sink));
        Vtop_vc_TestSource__P40_PB1c___act_comb__TOP__top__src__src__0((&vlSymsp->TOP__top__src__src));
        Vtop_vc_TestRandDelay__P40___act_comb__TOP__top__src__msg_delay__0((&vlSymsp->TOP__top__src__msg_delay));
        Vtop_vc_TestRandDelay__P20___act_comb__TOP__top__sink__msg_delay__0((&vlSymsp->TOP__top__sink__msg_delay));
        Vtop_vc_TestSink__P20_PB1c___act_comb__TOP__top__sink__sink__0((&vlSymsp->TOP__top__sink__sink));
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtop_vc_SimpleAdder__P20___act_sequent__TOP__top__imul__Add__0((&vlSymsp->TOP__top__imul__Add));
        Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__1((&vlSymsp->TOP__top__imul));
    }
}

void Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___nba_sequent__TOP__top__src__0(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf);
void Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf);
void Vtop_vc_TestRandDelaySink__P20_PB1c___nba_sequent__TOP__top__sink__0(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf);
void Vtop_lab1_imul_IntMulAlt___nba_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf);
void Vtop_vc_TestRandDelaySink__P20_PB1c___nba_sequent__TOP__top__sink__1(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___nba_sequent__TOP__top__src__1(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___nba_comb__TOP__top__src__0(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_vc_TestRandDelaySink__P20_PB1c___nba_comb__TOP__top__sink__0(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
void Vtop_vc_Trace___nba_sequent__TOP__top__imul__vc_trace__0(Vtop_vc_Trace* vlSelf);
void Vtop_vc_EnResetReg__P5_PBz1___nba_sequent__TOP__top__sink__sink__index_reg__0(Vtop_vc_EnResetReg__P5_PBz1* vlSelf);
void Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSink__P20_PB1c* vlSelf);
void Vtop_vc_EnResetReg__P5_PBz1___nba_sequent__TOP__top__src__src__index_reg__0(Vtop_vc_EnResetReg__P5_PBz1* vlSelf);
void Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__1(Vtop_vc_TestSource__P40_PB1c* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___nba_sequent__TOP__top__src__2(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__sink__msg_delay__rand_delay_reg__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf);
void Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__src__msg_delay__rand_delay_reg__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_vc_SimpleAdder__P20___nba_comb__TOP__top__imul__Add__0(Vtop_vc_SimpleAdder__P20* vlSelf);
void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf);
void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__2(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf);
void Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf);
void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf);
void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__1(Vtop_vc_TestSink__P20_PB1c* vlSelf);
void Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__1(Vtop_vc_TestSource__P40_PB1c* vlSelf);
void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__2(Vtop_vc_TestRandDelay__P20* vlSelf);
void Vtop_vc_TestRandDelaySink__P20_PB1c___nba_comb__TOP__top__sink__1(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf);
void Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__2(Vtop_vc_TestSink__P20_PB1c* vlSelf);
void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__2(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___nba_comb__TOP__top__src__1(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf);
void Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__2(Vtop_vc_TestSource__P40_PB1c* vlSelf);
void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__3(Vtop_vc_TestRandDelay__P40* vlSelf);
void Vtop_vc_TestRandDelaySource__pi1___nba_comb__TOP__top__src__2(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
void Vtop_top___nba_comb__TOP__top__3(Vtop_top* vlSelf);
void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__3(Vtop_lab1_imul_IntMulAlt* vlSelf);
void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__4(Vtop_lab1_imul_IntMulAlt* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__0((&vlSymsp->TOP__top__src__src));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtop_vc_TestRandDelaySource__pi1___nba_sequent__TOP__top__src__0((&vlSymsp->TOP__top__src));
        Vtop_top___nba_sequent__TOP__top__0((&vlSymsp->TOP__top));
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__0((&vlSymsp->TOP__top__src__msg_delay));
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__0((&vlSymsp->TOP__top__sink__msg_delay));
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__0((&vlSymsp->TOP__top__sink__sink));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vtop_vc_TestRandDelaySink__P20_PB1c___nba_sequent__TOP__top__sink__0((&vlSymsp->TOP__top__sink));
        Vtop_top___nba_sequent__TOP__top__1((&vlSymsp->TOP__top));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___nba_sequent__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vtop_top___nba_sequent__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_vc_TestRandDelaySink__P20_PB1c___nba_sequent__TOP__top__sink__1((&vlSymsp->TOP__top__sink));
        Vtop_vc_TestRandDelaySource__pi1___nba_sequent__TOP__top__src__1((&vlSymsp->TOP__top__src));
    }
    if ((0x1800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_comb__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vtop_vc_TestRandDelaySource__pi1___nba_comb__TOP__top__src__0((&vlSymsp->TOP__top__src));
        Vtop_vc_TestRandDelaySink__P20_PB1c___nba_comb__TOP__top__sink__0((&vlSymsp->TOP__top__sink));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_Trace___nba_sequent__TOP__top__imul__vc_trace__0((&vlSymsp->TOP__top__imul__vc_trace));
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_EnResetReg__P5_PBz1___nba_sequent__TOP__top__sink__sink__index_reg__0((&vlSymsp->TOP__top__sink__sink__index_reg));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vtop_vc_TestSink__P20_PB1c___nba_sequent__TOP__top__sink__sink__1((&vlSymsp->TOP__top__sink__sink));
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_EnResetReg__P5_PBz1___nba_sequent__TOP__top__src__src__index_reg__0((&vlSymsp->TOP__top__src__src__index_reg));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        Vtop_vc_TestSource__P40_PB1c___nba_sequent__TOP__top__src__src__1((&vlSymsp->TOP__top__src__src));
        Vtop_vc_TestRandDelaySource__pi1___nba_sequent__TOP__top__src__2((&vlSymsp->TOP__top__src));
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__sink__msg_delay__rand_delay_reg__0((&vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg));
        Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__1((&vlSymsp->TOP__top__sink__msg_delay));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__src__msg_delay__rand_delay_reg__0((&vlSymsp->TOP__top__src__msg_delay__rand_delay_reg));
        Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__1((&vlSymsp->TOP__top__src__msg_delay));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        Vtop_vc_SimpleAdder__P20___nba_comb__TOP__top__imul__Add__0((&vlSymsp->TOP__top__imul__Add));
        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__1((&vlSymsp->TOP__top__imul));
    }
    if ((0x62ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__0((&vlSymsp->TOP__top__sink__msg_delay));
    }
    if ((0x1aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__0((&vlSymsp->TOP__top__src__msg_delay));
    }
    if ((0x1800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__2((&vlSymsp->TOP__top__imul));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__0((&vlSymsp->TOP__top__sink__sink));
        Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__0((&vlSymsp->TOP__top__src__src));
        Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__1((&vlSymsp->TOP__top__sink__msg_delay));
        Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__1((&vlSymsp->TOP__top__src__msg_delay));
    }
    if ((0x140ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__1((&vlSymsp->TOP__top__sink__sink));
    }
    if ((0x88ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__1((&vlSymsp->TOP__top__src__src));
    }
    if ((0x462ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__2((&vlSymsp->TOP__top__sink__msg_delay));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        Vtop_vc_TestRandDelaySink__P20_PB1c___nba_comb__TOP__top__sink__1((&vlSymsp->TOP__top__sink));
        Vtop_top___nba_comb__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_vc_TestSink__P20_PB1c___nba_comb__TOP__top__sink__sink__2((&vlSymsp->TOP__top__sink__sink));
    }
    if ((0x21aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__2((&vlSymsp->TOP__top__src__msg_delay));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        Vtop_vc_TestRandDelaySource__pi1___nba_comb__TOP__top__src__1((&vlSymsp->TOP__top__src));
        Vtop_top___nba_comb__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_vc_TestSource__P40_PB1c___nba_comb__TOP__top__src__src__2((&vlSymsp->TOP__top__src__src));
    }
    if ((0x29aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__3((&vlSymsp->TOP__top__src__msg_delay));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        Vtop_vc_TestRandDelaySource__pi1___nba_comb__TOP__top__src__2((&vlSymsp->TOP__top__src));
        Vtop_top___nba_comb__TOP__top__3((&vlSymsp->TOP__top));
    }
    if ((0x67aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__3((&vlSymsp->TOP__top__imul));
    }
    if ((0x6fbULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__4((&vlSymsp->TOP__top__imul));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
}
