// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root___eval_initial__TOP__0(vlSelf);
    Vtop___024root___eval_initial__TOP__1(vlSelf);
    Vtop___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__iml_if__clk__0 
        = vlSymsp->TOP__top__DOT__iml_if.clk;
}

VlCoroutine Vtop___024root___eval_initial__TOP__0____Vfork_1__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__0____Vfork_1__1(Vtop___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       170);
    VL_WRITEF("Start of Testbench\n");
    Vtop___024root___eval_initial__TOP__0____Vfork_1__0(vlSelf);
    Vtop___024root___eval_initial__TOP__0____Vfork_1__1(vlSelf);
    vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       203);
    VL_FINISH_MT("../lab1_imul/tb_IntMul.v", 204, "");
    vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0xaULL, 
                                           nullptr, 
                                           "../lab1_imul/tb_IntMul.v", 
                                           140);
        vlSymsp->TOP__top__DOT__iml_if.__Vdlyvval__clk__v0 
            = (1U & (~ (IData)(vlSymsp->TOP__top__DOT__iml_if.clk)));
        vlSymsp->TOP__top__DOT__iml_if.__Vdlyvset__clk__v0 = 1U;
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
    }
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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__top__DOT__iml_if.clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__iml_if__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdynSched.evaluate());
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__iml_if__clk__0 
        = vlSymsp->TOP__top__DOT__iml_if.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
    vlSelf->__VdynSched.doPostUpdates();
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
    if (vlSymsp->TOP__top__DOT__iml_if.reset) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg = 0U;
    } else {
        vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top__DOT__iml_if.reset)))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__imul__DOT__result_reg_en) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_reg_en)))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
        = vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out;
    vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
        = vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out;
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
          ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
        = (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
           + vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out);
    if ((1U & (~ ((((((((0U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) 
                        | (1U == (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
                       | (2U == (3U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
                      | (4U == (7U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
                     | (8U == (0xfU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
                    | (0x10U == (0x1fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
                   | (0x20U == (0x3fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
                  | (0x40U == (0x7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)))))) {
        if ((0x80U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
            vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb 
            = (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out);
    }
    if (((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__is_b_zero))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__is_b_zero 
            = (0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out);
    }
    if ((1U & ((~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__do_sh)))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__do_sh 
            = (1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if (((((((((0U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) 
               | (1U == (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
              | (2U == (3U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
             | (4U == (7U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
            | (8U == (0xfU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
           | (0x10U == (0x1fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
          | (0x20U == (0x3fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
         | (0x40U == (0x7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)))) {
        if ((0U != (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
            if ((1U != (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                if ((2U != (3U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                    if ((4U != (7U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                        if ((8U != (0xfU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                            if ((0x10U == (0x1fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                                vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((0x10U != (0x1fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                                if ((0x20U == (0x3fU 
                                               & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                                    vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x20U != (0x3fU 
                                               & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                                    vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                        }
                        if ((8U == (0xfU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                            vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((4U == (7U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((2U == (3U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                    vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U == (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
            vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
            vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
            if ((0U != vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                if ((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                    vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
        vlSelf->top__DOT____Vcellout__imul__istream_rdy = 1U;
        vlSelf->top__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT____Vcellout__imul__ostream_val = 0U;
        vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
            vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
            vlSelf->top__DOT____Vcellout__imul__istream_rdy = 0U;
            vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT____Vcellout__imul__ostream_val = 0U;
            vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
        } else if ((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
            vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
            vlSelf->top__DOT____Vcellout__imul__istream_rdy = 0U;
            vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT____Vcellout__imul__ostream_val = 0U;
            vlSelf->top__DOT__imul__DOT__add_mux_sel = 1U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__result_reg_en = 0U;
        vlSelf->top__DOT____Vcellout__imul__istream_rdy = 0U;
        vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->top__DOT____Vcellout__imul__ostream_val 
            = (2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg));
        vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
    }
    if (((((((((0U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) 
               | (1U == (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
              | (2U == (3U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
             | (4U == (7U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
            | (8U == (0xfU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
           | (0x10U == (0x1fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
          | (0x20U == (0x3fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) 
         | (0x40U == (0x7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)))) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out 
            = ((0U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))
                ? 8U : ((1U == (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))
                         ? 1U : ((2U == (3U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))
                                  ? 1U : ((4U == (7U 
                                                  & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))
                                           ? 2U : (
                                                   (8U 
                                                    == 
                                                    (0xfU 
                                                     & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))
                                                    ? 3U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))
                                                     ? 4U
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0x3fU 
                                                       & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))
                                                      ? 5U
                                                      : 6U)))))));
    } else if (VL_LIKELY((0x80U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)))) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 7U;
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 0U;
        VL_STOP_MT("../lab1_imul/CalcShamt.v", 24, "");
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__result_reg_en) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en 
            = vlSelf->top__DOT__imul__DOT__result_reg_en;
    }
    if (((IData)(vlSelf->top__DOT____Vcellout__imul__istream_rdy) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__istream_rdy 
            = vlSelf->top__DOT____Vcellout__imul__istream_rdy;
    }
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go 
        = ((IData)(vlSymsp->TOP__top__DOT__iml_if.istream_val) 
           & (IData)(vlSelf->top__DOT____Vcellout__imul__istream_rdy));
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel 
            = vlSelf->top__DOT__imul__DOT__result_mux_sel;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel 
            = vlSelf->top__DOT__imul__DOT__a_mux_sel;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel 
            = vlSelf->top__DOT__imul__DOT__b_mux_sel;
    }
    if (((IData)(vlSelf->top__DOT____Vcellout__imul__ostream_val) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_val 
            = vlSelf->top__DOT____Vcellout__imul__ostream_val;
    }
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go 
        = ((IData)(vlSymsp->TOP__top__DOT__iml_if.ostream_rdy) 
           & (IData)(vlSelf->top__DOT____Vcellout__imul__ostream_val));
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) {
                    vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go)))) {
                    vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT____Vcellout__imul__ostream_msg 
        = (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
           & (- (IData)((IData)(vlSelf->top__DOT____Vcellout__imul__ostream_val))));
    if (vlSelf->top__DOT__imul__DOT__add_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                = vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out;
        } else {
            vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out;
    }
    if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out = 0U;
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel 
            = vlSelf->top__DOT__imul__DOT__add_mux_sel;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((7U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
        = (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
           >> (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out));
    if (vlSelf->top__DOT__imul__DOT__b_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                = (IData)(vlSymsp->TOP__top__DOT__iml_if.istream_msg);
        } else {
            vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out;
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
        = (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
           << (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out));
    if (vlSelf->top__DOT__imul__DOT__a_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                = (IData)((vlSymsp->TOP__top__DOT__iml_if.istream_msg 
                           >> 0x20U));
        } else {
            vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out;
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go;
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go;
    }
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next 
        = vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg;
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go) {
            vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) {
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 0U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 0U;
    }
    if ((1U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (1U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (2U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (4U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (8U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x10U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x20U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x40U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x80U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x100U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x200U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x400U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x800U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x1000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x2000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x4000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x8000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x10000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x20000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x40000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x80000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x100000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x200000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x400000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x800000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x1000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x2000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x4000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x8000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x10000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x20000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT____Vcellout__imul__ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x40000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if (((vlSelf->top__DOT____Vcellout__imul__ostream_msg 
          ^ vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg) 
               | (0x80000000U & vlSelf->top__DOT____Vcellout__imul__ostream_msg));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSymsp->TOP__top__DOT__iml_if.__Vdlyvset__clk__v0) {
        vlSymsp->TOP__top__DOT__iml_if.clk = vlSymsp->TOP__top__DOT__iml_if.__Vdlyvval__clk__v0;
        vlSymsp->TOP__top__DOT__iml_if.__Vdlyvset__clk__v0 = 0U;
    }
    if (((IData)(vlSymsp->TOP__top__DOT__iml_if.clk) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__clk 
            = vlSymsp->TOP__top__DOT__iml_if.clk;
    }
}
