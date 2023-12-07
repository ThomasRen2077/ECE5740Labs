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
                VL_FATAL_MT("utb_BranchGShare.v", 7, "", "Settle region did not converge.");
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
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
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__update_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__update_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__correct_counter = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__my_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__my_update_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__my_update_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__shift_factor = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__update_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__update_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__prediction = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__counter = VL_RAND_RESET_I(6);
    vlSelf->top__DOT____Vtogcov__correct_counter = VL_RAND_RESET_I(6);
    vlSelf->top__DOT____Vtogcov__my_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT____Vtogcov__my_update_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__my_update_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__shift_factor = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk1__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk2__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk3__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk4__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk5__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk6__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk8__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk8__DOT__unnamedblk9__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk10__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk11__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk12__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk13__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk14__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk15__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk15__DOT__unnamedblk16__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk17__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk17__DOT__unnamedblk18__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk19__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk19__DOT__unnamedblk20__DOT__y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk21__DOT__x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__unnamedblk21__DOT__unnamedblk22__DOT__y = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, vlSelf->top__DOT__DUT__DOT__PHT);
    vlSelf->top__DOT__DUT__DOT__GHR = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__DUT__DOT__current_PHT = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__PHT_index = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__GHR = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__current_PHT = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__PHT_index = VL_RAND_RESET_I(11);
    vlSelf->__Vtask_top__DOT__test_task__45__PC_f = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_top__DOT__test_task__45__update_en_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__test_task__45__update_val_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
