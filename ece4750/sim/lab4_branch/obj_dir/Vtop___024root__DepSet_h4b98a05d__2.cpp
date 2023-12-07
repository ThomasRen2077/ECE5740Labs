// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__PHT_index = (0x7ffU 
                                             & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                                                ^ (vlSelf->top__DOT__PC 
                                                   >> 2U)));
    vlSelf->top__DOT__DUT__DOT__current_PHT = (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                      << 1U)))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__DUT__DOT__PHT[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                        << 1U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U))))) 
                                                | (vlSelf->top__DOT__DUT__DOT__PHT[
                                                   (0x7fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       >> 4U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                                                       << 1U)))));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__PHT_index) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index 
            = ((0x3ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__PHT_index)));
    }
    if ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                  >> 1U)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__current_PHT)));
    }
}
