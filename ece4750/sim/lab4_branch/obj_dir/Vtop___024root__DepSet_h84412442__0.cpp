// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Start of Testbench\n");
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchGlobal.v", 
                                       26);
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__update_en = 0U;
    vlSelf->top__DOT__update_val = 0U;
    vlSelf->top__DOT__PC = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchGlobal.v", 
                                       32);
    vlSelf->top__DOT__reset = 0U;
    vlSelf->top__DOT__update_en = 1U;
    vlSelf->top__DOT__update_val = 1U;
    vlSelf->top__DOT__PC = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchGlobal.v", 
                                       43);
    vlSelf->top__DOT__update_en = 1U;
    vlSelf->top__DOT__update_val = 1U;
    vlSelf->top__DOT__PC = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchGlobal.v", 
                                       53);
    vlSelf->top__DOT__update_en = 1U;
    vlSelf->top__DOT__update_val = 1U;
    vlSelf->top__DOT__PC = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                              >> 1U)) != (IData)(vlSelf->top__DOT__update_val)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("Incorrect Prediction. PC: %x, resolution: %b, prediction: %b\n",
                          32,vlSelf->top__DOT__PC,1,
                          (IData)(vlSelf->top__DOT__update_val),
                          1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                                   >> 1U)));
                Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("Correct Prediction. PC: %x, resolution: %b, prediction: %b\n",
                      32,vlSelf->top__DOT__PC,1,(IData)(vlSelf->top__DOT__update_val),
                      1,(1U & ((IData)(vlSelf->top__DOT__DUT__DOT__current_PHT) 
                               >> 1U)));
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
        }
    }
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "utb_BranchGlobal.v", 
                                       66);
    VL_FINISH_MT("utb_BranchGlobal.v", 67, "");
    vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
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

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
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
    vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ (IData)(vlSelf->top__DOT__update_en)))) {
            vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__update_en) {
            vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
            if (vlSelf->top__DOT__update_val) {
                vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__update_val)))) {
                vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
                }
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
                    vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    VL_ASSIGN_W(4096,__Vdly__top__DOT__DUT__DOT__PHT, vlSelf->top__DOT__DUT__DOT__PHT);
    __Vdly__top__DOT__DUT__DOT__GHR = vlSelf->top__DOT__DUT__DOT__GHR;
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
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
}
