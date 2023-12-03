// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Start of Testbench\n");
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchGlobal.v", 
                                       22);
    VL_FINISH_MT("utb_BranchGlobal.v", 23, "");
    vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vdly__top__DOT__DUT__DOT__PHT;
    VL_ZERO_W(4096, __Vdly__top__DOT__DUT__DOT__PHT);
    SData/*10:0*/ __Vdly__top__DOT__DUT__DOT__GHR;
    __Vdly__top__DOT__DUT__DOT__GHR = 0;
    // Body
    vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        if (vlSelf->top__DOT__update_en) {
            vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
            if (vlSelf->top__DOT__update_val) {
                vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
                if ((3U == (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
                }
                if ((3U != (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__update_val)))) {
                vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
                if ((0U == (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0U != (3U & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                            << 1U)))
                                    ? 0U : (vlSelf->top__DOT__DUT__DOT__PHT[
                                            (((IData)(1U) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                    << 1U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                      << 1U))))) 
                                  | (vlSelf->top__DOT__DUT__DOT__PHT[
                                     (0x7fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                               >> 4U))] 
                                     >> (0x1fU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                  << 1U))))))) {
                    vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__update_en)))) {
            vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        }
    }
    VL_ASSIGN_W(4096,__Vdly__top__DOT__DUT__DOT__PHT, vlSelf->top__DOT__DUT__DOT__PHT);
    __Vdly__top__DOT__DUT__DOT__GHR = vlSelf->top__DOT__DUT__DOT__GHR;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_CONST_W_1X(4096,__Vdly__top__DOT__DUT__DOT__PHT,0x00000000);
        __Vdly__top__DOT__DUT__DOT__GHR = 0U;
    } else {
        VL_ASSIGN_W(4096,__Vdly__top__DOT__DUT__DOT__PHT, vlSelf->top__DOT__DUT__DOT__PHT);
        __Vdly__top__DOT__DUT__DOT__GHR = vlSelf->top__DOT__DUT__DOT__GHR;
        if (vlSelf->top__DOT__update_en) {
            __Vdly__top__DOT__DUT__DOT__GHR = (0x7ffU 
                                               & (((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                   << 1U) 
                                                  + (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
            VL_ASSIGNSEL_WI(4096,2,(0xfffU & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                              << 1U)), __Vdly__top__DOT__DUT__DOT__PHT, 
                            (3U & ((IData)(vlSelf->top__DOT__update_val)
                                    ? ((3U == (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       << 1U))))))
                                        ? 3U : ((IData)(1U) 
                                                + (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                         << 1U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->top__DOT__DUT__DOT__PHT[
                                                     (((IData)(1U) 
                                                       + 
                                                       (0xfffU 
                                                        & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                           << 1U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                          << 1U))))) 
                                                   | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                      (0x7fU 
                                                       & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                          >> 4U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                          << 1U))))))
                                    : ((0U == (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       << 1U))))))
                                        ? 0U : ((((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       << 1U)))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0xfffU 
                                                      & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                         << 1U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                        << 1U))))) 
                                                 | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                        >> 4U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                        << 1U)))) 
                                                - (IData)(1U))))));
        }
    }
    VL_ASSIGN_W(4096,vlSelf->top__DOT__DUT__DOT__PHT, __Vdly__top__DOT__DUT__DOT__PHT);
    vlSelf->top__DOT__DUT__DOT__GHR = __Vdly__top__DOT__DUT__DOT__GHR;
    vlSelf->top__DOT__DUT__DOT__current_PHT = (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                       << 1U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
    }
    if ((IData)((((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U) ^ (IData)(vlSelf->top__DOT____Vtogcov__prediction)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__prediction = (1U 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                                      >> 1U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT)));
    }
}
