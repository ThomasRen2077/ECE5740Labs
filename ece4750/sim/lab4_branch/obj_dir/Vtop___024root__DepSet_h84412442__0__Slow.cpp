// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__update_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_en = vlSelf->top__DOT__update_en;
    }
    if (((IData)(vlSelf->top__DOT__update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__update_val = vlSelf->top__DOT__update_val;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__counter) ^ (IData)(vlSelf->top__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__counter = ((0x3eU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__counter)) 
                                                | (1U 
                                                   & (IData)(vlSelf->top__DOT__counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__counter) ^ (IData)(vlSelf->top__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__counter = ((0x3dU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__counter)) 
                                                | (2U 
                                                   & (IData)(vlSelf->top__DOT__counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__counter) ^ (IData)(vlSelf->top__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__counter = ((0x3bU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__counter)) 
                                                | (4U 
                                                   & (IData)(vlSelf->top__DOT__counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__counter) ^ (IData)(vlSelf->top__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__counter = ((0x37U 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__counter)) 
                                                | (8U 
                                                   & (IData)(vlSelf->top__DOT__counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__counter = ((0x2fU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__counter)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->top__DOT__counter)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__counter) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__counter)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__counter = ((0x1fU 
                                                 & (IData)(vlSelf->top__DOT____Vtogcov__counter)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->top__DOT__counter)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__correct_counter) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__correct_counter 
            = ((0x3eU & (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)) 
               | (1U & (IData)(vlSelf->top__DOT__correct_counter)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__correct_counter) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__correct_counter 
            = ((0x3dU & (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)) 
               | (2U & (IData)(vlSelf->top__DOT__correct_counter)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__correct_counter) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__correct_counter 
            = ((0x3bU & (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)) 
               | (4U & (IData)(vlSelf->top__DOT__correct_counter)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__correct_counter) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__correct_counter 
            = ((0x37U & (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)) 
               | (8U & (IData)(vlSelf->top__DOT__correct_counter)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__correct_counter) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__correct_counter 
            = ((0x2fU & (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)) 
               | (0x10U & (IData)(vlSelf->top__DOT__correct_counter)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__correct_counter) 
                  ^ (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__correct_counter 
            = ((0x1fU & (IData)(vlSelf->top__DOT____Vtogcov__correct_counter)) 
               | (0x20U & (IData)(vlSelf->top__DOT__correct_counter)));
    }
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
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((1U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffeU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (1U & vlSelf->top__DOT__PC));
    }
    if ((2U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffdU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (2U & vlSelf->top__DOT__PC));
    }
    if ((4U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffffbU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (4U & vlSelf->top__DOT__PC));
    }
    if ((8U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffff7U 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (8U & vlSelf->top__DOT__PC));
    }
    if ((0x10U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffefU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffdfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffffbfU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffff7fU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffeffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffdffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffffbffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffff7ffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffefffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffdfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffffbfffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffff7fffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffeffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffdffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfffbffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x80000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfff7ffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x100000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffefffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x100000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x200000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffdfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x200000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x400000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xffbfffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x400000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x800000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xff7fffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x800000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x1000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfeffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x1000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x2000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfdffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x2000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x4000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xfbffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x4000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x8000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xf7ffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x8000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x10000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xefffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x10000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x20000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xdfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x20000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if ((0x40000000U & (vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0xbfffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x40000000U 
                                              & vlSelf->top__DOT__PC));
    }
    if (((vlSelf->top__DOT__PC ^ vlSelf->top__DOT____Vtogcov__PC) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__PC = ((0x7fffffffU 
                                            & vlSelf->top__DOT____Vtogcov__PC) 
                                           | (0x80000000U 
                                              & vlSelf->top__DOT__PC));
    }
    vlSelf->top__DOT__DUT__DOT__GHR_update_value = 
        ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)) 
         | (IData)(vlSelf->top__DOT__update_val));
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR_update_value)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR_update_value)));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchGlobal.v", 7, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchGlobal.v", 7, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchGlobal.v", 9, 19, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchGlobal.v", 10, 19, ".top", "v_toggle/top", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchGlobal.v", 11, 19, ".top", "v_toggle/top", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_BranchGlobal.v", 12, 19, ".top", "v_toggle/top", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_BranchGlobal.v", 13, 19, ".top", "v_toggle/top", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_BranchGlobal.v", 14, 19, ".top", "v_toggle/top", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_BranchGlobal.v", 14, 19, ".top", "v_toggle/top", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_BranchGlobal.v", 14, 19, ".top", "v_toggle/top", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_BranchGlobal.v", 14, 19, ".top", "v_toggle/top", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_BranchGlobal.v", 14, 19, ".top", "v_toggle/top", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_BranchGlobal.v", 14, 19, ".top", "v_toggle/top", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_BranchGlobal.v", 15, 19, ".top", "v_toggle/top", "correct_counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_BranchGlobal.v", 15, 19, ".top", "v_toggle/top", "correct_counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_BranchGlobal.v", 15, 19, ".top", "v_toggle/top", "correct_counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_BranchGlobal.v", 15, 19, ".top", "v_toggle/top", "correct_counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_BranchGlobal.v", 15, 19, ".top", "v_toggle/top", "correct_counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_BranchGlobal.v", 15, 19, ".top", "v_toggle/top", "correct_counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_BranchGlobal.v", 23, 5, ".top", "v_line/top", "block", "23-24,26-30,32-40,43-51,54-62,68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "BranchGlobal.v", 19, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "BranchGlobal.v", 20, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "BranchGlobal.v", 21, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchGlobal.v", 22, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "BranchGlobal.v", 23, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "BranchGlobal.v", 24, 23, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "BranchGlobal.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "BranchGlobal.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "current_PHT[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "BranchGlobal.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "current_PHT[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "BranchGlobal.v", 33, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGlobal", "GHR_update_value[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "BranchGlobal.v", 40, 3, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "if", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "BranchGlobal.v", 40, 4, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "else", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "BranchGlobal.v", 39, 1, ".top.DUT", "v_line/lab4_branch_BranchGlobal", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "BranchGlobal.v", 57, 9, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "if", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "BranchGlobal.v", 57, 10, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "else", "60-61");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "BranchGlobal.v", 65, 9, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "if", "65-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "BranchGlobal.v", 65, 10, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "else", "68-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "BranchGlobal.v", 56, 7, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "if", "56");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "BranchGlobal.v", 56, 8, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "else", "64");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "BranchGlobal.v", 54, 5, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "if", "54-55");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "BranchGlobal.v", 54, 6, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "BranchGlobal.v", 46, 3, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "if", "46-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "BranchGlobal.v", 46, 4, ".top.DUT", "v_branch/lab4_branch_BranchGlobal", "else", "50-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "BranchGlobal.v", 45, 1, ".top.DUT", "v_line/lab4_branch_BranchGlobal", "block", "45");
}
