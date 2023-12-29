// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__PHT_index = (0x3ffU 
                                             & ((IData)(vlSelf->top__DOT__dut__DOT__GHR) 
                                                ^ (vlSelf->PC 
                                                   >> 2U)));
    vlSelf->prediction = (1U & (vlSelf->top__DOT__dut__DOT__PHT[
                                (((IData)(1U) + (0x7ffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                    << 1U))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(1U) 
                                                + (0x7ffU 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                      << 1U))))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdly__top__DOT__dut__DOT__GHR;
    __Vdly__top__DOT__dut__DOT__GHR = 0;
    IData/*31:0*/ __Vilp;
    VlWide<64>/*2047:0*/ __Vdly__top__DOT__dut__DOT__PHT;
    VL_ZERO_W(2048, __Vdly__top__DOT__dut__DOT__PHT);
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        __Vdly__top__DOT__dut__DOT__PHT[__Vilp] = vlSelf->top__DOT__dut__DOT__PHT[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vdly__top__DOT__dut__DOT__GHR = vlSelf->top__DOT__dut__DOT__GHR;
    if (vlSelf->reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vdly__top__DOT__dut__DOT__PHT[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        __Vdly__top__DOT__dut__DOT__GHR = 0U;
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            __Vdly__top__DOT__dut__DOT__PHT[__Vilp] 
                = vlSelf->top__DOT__dut__DOT__PHT[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        __Vdly__top__DOT__dut__DOT__GHR = vlSelf->top__DOT__dut__DOT__GHR;
        if (vlSelf->update_en) {
            VL_ASSIGNSEL_WI(2048,2,(0x7ffU & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                              << 1U)), __Vdly__top__DOT__dut__DOT__PHT, 
                            (3U & ((IData)(vlSelf->update_val)
                                    ? ((3U == (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__dut__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__dut__DOT__PHT[
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                       << 1U))))))
                                        ? 3U : ((IData)(1U) 
                                                + (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                         << 1U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->top__DOT__dut__DOT__PHT[
                                                     (((IData)(1U) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                           << 1U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                          << 1U))))) 
                                                   | (vlSelf->top__DOT__dut__DOT__PHT[
                                                      (0x3fU 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                          >> 4U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                          << 1U))))))
                                    : ((0U == (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__dut__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__dut__DOT__PHT[
                                                   (0x3fU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                       << 1U))))))
                                        ? 0U : ((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                       << 1U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->top__DOT__dut__DOT__PHT[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                         << 1U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                        << 1U))))) 
                                                 | (vlSelf->top__DOT__dut__DOT__PHT[
                                                    (0x3fU 
                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                        >> 4U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                        << 1U)))) 
                                                - (IData)(1U))))));
            __Vdly__top__DOT__dut__DOT__GHR = (0x3ffU 
                                               & (((IData)(vlSelf->top__DOT__dut__DOT__GHR) 
                                                   << 1U) 
                                                  + (IData)(vlSelf->update_val)));
        }
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->top__DOT__dut__DOT__PHT[__Vilp] = __Vdly__top__DOT__dut__DOT__PHT[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__dut__DOT__GHR = __Vdly__top__DOT__dut__DOT__GHR;
    vlSelf->top__DOT__dut__DOT__PHT_index = (0x3ffU 
                                             & ((IData)(vlSelf->top__DOT__dut__DOT__GHR) 
                                                ^ (vlSelf->PC 
                                                   >> 2U)));
    vlSelf->prediction = (1U & (vlSelf->top__DOT__dut__DOT__PHT[
                                (((IData)(1U) + (0x7ffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                    << 1U))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(1U) 
                                                + (0x7ffU 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__PHT_index) 
                                                      << 1U))))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tb_Branch.v", 23, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_Branch.v", 23, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_Branch.v", 23, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->update_en & 0xfeU))) {
        Verilated::overWidthError("update_en");}
    if (VL_UNLIKELY((vlSelf->update_val & 0xfeU))) {
        Verilated::overWidthError("update_val");}
}
#endif  // VL_DEBUG
