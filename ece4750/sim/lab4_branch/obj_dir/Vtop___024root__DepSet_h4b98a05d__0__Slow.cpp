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
    vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__my_update_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__my_update_en))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_update_en = vlSelf->top__DOT__my_update_en;
    }
    if (((IData)(vlSelf->top__DOT__my_update_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__my_update_val))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_update_val 
            = vlSelf->top__DOT__my_update_val;
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
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7feU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7fdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7fbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7f7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7efU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7dfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x7bfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x77fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x6ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR 
            = ((0x5ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__GHR)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__GHR) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffeU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (1U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((2U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffdU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (2U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((4U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffffbU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (4U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((8U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffff7U 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (8U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffefU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffdfU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffffbfU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x80U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffff7fU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x100U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffeffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x100U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x200U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffdffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x200U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x400U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffffbffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x400U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x800U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffff7ffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x800U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x1000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffefffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x1000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x2000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffdfffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x2000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x4000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffffbfffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x4000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x8000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffff7fffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x8000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffeffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffdffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfffbffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x80000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfff7ffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x100000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffefffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x100000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x200000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffdfffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x200000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x400000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xffbfffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x400000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x800000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xff7fffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x800000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x1000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfeffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x1000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x2000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfdffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x2000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x4000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xfbffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x4000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x8000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xf7ffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x8000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x10000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xefffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x10000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x20000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xdfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x20000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((0x40000000U & (vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0xbfffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x40000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if (((vlSelf->top__DOT__my_pc ^ vlSelf->top__DOT____Vtogcov__my_pc) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__my_pc = ((0x7fffffffU 
                                               & vlSelf->top__DOT____Vtogcov__my_pc) 
                                              | (0x80000000U 
                                                 & vlSelf->top__DOT__my_pc));
    }
    if ((1U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (1U & vlSelf->top__DOT__shift_factor));
    }
    if ((2U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (2U & vlSelf->top__DOT__shift_factor));
    }
    if ((4U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (4U & vlSelf->top__DOT__shift_factor));
    }
    if ((8U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (8U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x80U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x100U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x100U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x200U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x200U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x400U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x400U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x800U & (vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x800U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x1000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x1000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x2000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x2000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x4000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x4000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x8000U & (vlSelf->top__DOT__shift_factor 
                    ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x8000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x80000U & (vlSelf->top__DOT__shift_factor 
                     ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x100000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x100000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x200000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x200000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x400000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x400000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x800000U & (vlSelf->top__DOT__shift_factor 
                      ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x800000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x1000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x1000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x2000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x2000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x4000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x4000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x8000000U & (vlSelf->top__DOT__shift_factor 
                       ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x8000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x10000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x10000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x20000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x20000000U & vlSelf->top__DOT__shift_factor));
    }
    if ((0x40000000U & (vlSelf->top__DOT__shift_factor 
                        ^ vlSelf->top__DOT____Vtogcov__shift_factor))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x40000000U & vlSelf->top__DOT__shift_factor));
    }
    if (((vlSelf->top__DOT__shift_factor ^ vlSelf->top__DOT____Vtogcov__shift_factor) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__shift_factor = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__shift_factor) 
             | (0x80000000U & vlSelf->top__DOT__shift_factor));
    }
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

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchGShare.v", 7, 26, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchGShare.v", 7, 43, ".top", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchGShare.v", 9, 19, ".top", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchGShare.v", 10, 19, ".top", "v_toggle/top", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchGShare.v", 11, 19, ".top", "v_toggle/top", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_BranchGShare.v", 12, 19, ".top", "v_toggle/top", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_BranchGShare.v", 13, 19, ".top", "v_toggle/top", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_BranchGShare.v", 14, 19, ".top", "v_toggle/top", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_BranchGShare.v", 14, 19, ".top", "v_toggle/top", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_BranchGShare.v", 14, 19, ".top", "v_toggle/top", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_BranchGShare.v", 14, 19, ".top", "v_toggle/top", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_BranchGShare.v", 14, 19, ".top", "v_toggle/top", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_BranchGShare.v", 14, 19, ".top", "v_toggle/top", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_BranchGShare.v", 15, 19, ".top", "v_toggle/top", "correct_counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_BranchGShare.v", 15, 19, ".top", "v_toggle/top", "correct_counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_BranchGShare.v", 15, 19, ".top", "v_toggle/top", "correct_counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_BranchGShare.v", 15, 19, ".top", "v_toggle/top", "correct_counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_BranchGShare.v", 15, 19, ".top", "v_toggle/top", "correct_counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_BranchGShare.v", 15, 19, ".top", "v_toggle/top", "correct_counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "utb_BranchGShare.v", 16, 19, ".top", "v_toggle/top", "my_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "utb_BranchGShare.v", 17, 19, ".top", "v_toggle/top", "my_update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "utb_BranchGShare.v", 18, 19, ".top", "v_toggle/top", "my_update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "utb_BranchGShare.v", 19, 19, ".top", "v_toggle/top", "shift_factor[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "utb_BranchGShare.v", 79, 9, ".top", "v_line/top", "block", "79-83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "utb_BranchGShare.v", 96, 9, ".top", "v_line/top", "block", "96-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "utb_BranchGShare.v", 113, 9, ".top", "v_line/top", "block", "113-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "utb_BranchGShare.v", 133, 13, ".top", "v_branch/top", "if", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "utb_BranchGShare.v", 133, 14, ".top", "v_branch/top", "else", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "utb_BranchGShare.v", 130, 9, ".top", "v_line/top", "block", "130-132,135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "utb_BranchGShare.v", 153, 18, ".top", "v_line/top", "if", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "utb_BranchGShare.v", 153, 19, ".top", "v_line/top", "else", "154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "utb_BranchGShare.v", 152, 18, ".top", "v_line/top", "elsif", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "utb_BranchGShare.v", 151, 13, ".top", "v_line/top", "elsif", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "utb_BranchGShare.v", 148, 9, ".top", "v_line/top", "block", "148-150,155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "utb_BranchGShare.v", 169, 13, ".top", "v_line/top", "block", "169-173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "utb_BranchGShare.v", 168, 9, ".top", "v_line/top", "block", "168-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "utb_BranchGShare.v", 191, 17, ".top", "v_branch/top", "if", "191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "utb_BranchGShare.v", 191, 18, ".top", "v_branch/top", "else", "192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "utb_BranchGShare.v", 188, 13, ".top", "v_line/top", "block", "188-190,193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "utb_BranchGShare.v", 187, 9, ".top", "v_line/top", "block", "187-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "utb_BranchGShare.v", 207, 9, ".top", "v_line/top", "block", "207-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "utb_BranchGShare.v", 224, 9, ".top", "v_line/top", "block", "224-228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "utb_BranchGShare.v", 244, 13, ".top", "v_branch/top", "if", "244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "utb_BranchGShare.v", 244, 14, ".top", "v_branch/top", "else", "245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "utb_BranchGShare.v", 241, 9, ".top", "v_line/top", "block", "241-243,246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "utb_BranchGShare.v", 262, 13, ".top", "v_branch/top", "if", "262");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "utb_BranchGShare.v", 262, 14, ".top", "v_branch/top", "else", "263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "utb_BranchGShare.v", 259, 9, ".top", "v_line/top", "block", "259-261,264");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "utb_BranchGShare.v", 278, 9, ".top", "v_line/top", "block", "278-282");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "utb_BranchGShare.v", 298, 13, ".top", "v_line/top", "block", "298-302");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "utb_BranchGShare.v", 296, 9, ".top", "v_line/top", "block", "296-298");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "utb_BranchGShare.v", 319, 13, ".top", "v_line/top", "block", "319-323");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "utb_BranchGShare.v", 317, 9, ".top", "v_line/top", "block", "317-319");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "utb_BranchGShare.v", 343, 17, ".top", "v_branch/top", "if", "343");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "utb_BranchGShare.v", 343, 18, ".top", "v_branch/top", "else", "344");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "utb_BranchGShare.v", 340, 13, ".top", "v_line/top", "block", "340-342,345");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "utb_BranchGShare.v", 338, 9, ".top", "v_line/top", "block", "338-340");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "utb_BranchGShare.v", 366, 22, ".top", "v_line/top", "if", "366");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "utb_BranchGShare.v", 366, 23, ".top", "v_line/top", "else", "367");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "utb_BranchGShare.v", 365, 22, ".top", "v_line/top", "elsif", "365");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "utb_BranchGShare.v", 364, 17, ".top", "v_line/top", "elsif", "364");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "utb_BranchGShare.v", 361, 13, ".top", "v_line/top", "block", "361-363,368");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "utb_BranchGShare.v", 359, 9, ".top", "v_line/top", "block", "359-361");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "utb_BranchGShare.v", 27, 5, ".top", "v_line/top", "block", "27-28,30-34,36-44,47-54,57-64,71,73,75,77,79,88,90,92,94,96,105,107,109,111,113,122,124,126,128,130,140,142,144,146,148,160,162,164,166,168,179,181,183,185,187,199,201,203,205,207,216,218,220,222,224,233,235,237,239,241,251,253,255,257,259,269,271,273,275-278,287,289,291,293,296,308,310,312,314,317,329,331,333,335,338,351,353,355,357,359,376-377");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "utb_BranchGShare.v", 384, 10, ".top", "v_line/top", "block", "384-385,388,391-393,399-402,405");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "BranchGShare.v", 16, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "BranchGShare.v", 17, 24, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "BranchGShare.v", 18, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchGShare.v", 19, 15, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "BranchGShare.v", 20, 22, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "BranchGShare.v", 21, 16, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "BranchGShare.v", 28, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "BranchGShare.v", 29, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PC_factor[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "BranchGShare.v", 30, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "current_PHT[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "BranchGShare.v", 30, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "current_PHT[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "BranchGShare.v", 31, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "GHR_update_value", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "BranchGShare.v", 32, 29, ".top.DUT", "v_toggle/lab4_branch_BranchGshare", "PHT_index[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "BranchGShare.v", 42, 3, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "if", "42");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "BranchGShare.v", 42, 4, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "else", "43");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "BranchGShare.v", 41, 1, ".top.DUT", "v_line/lab4_branch_BranchGshare", "block", "41");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "BranchGShare.v", 59, 9, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "if", "59-60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "BranchGShare.v", 59, 10, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "else", "62-63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "BranchGShare.v", 67, 9, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "if", "67-68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "BranchGShare.v", 67, 10, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "else", "70-71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "BranchGShare.v", 58, 7, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "if", "58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "BranchGShare.v", 58, 8, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "else", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "BranchGShare.v", 56, 5, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "if", "56-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "BranchGShare.v", 56, 6, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "BranchGShare.v", 48, 3, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "if", "48-50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "BranchGShare.v", 48, 4, ".top.DUT", "v_branch/lab4_branch_BranchGshare", "else", "52-54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "BranchGShare.v", 47, 1, ".top.DUT", "v_line/lab4_branch_BranchGshare", "block", "47");
}
