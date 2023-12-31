// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../lab1_imul/tb_IntMul.v", 131, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top.iml_if.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top.iml_if.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__imul__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vcellout__imul__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__imul__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__result_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__istream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__is_b_zero = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT____Vtogcov__product = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux__DOT____Vtogcov__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__do_sh = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__iml_if__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
