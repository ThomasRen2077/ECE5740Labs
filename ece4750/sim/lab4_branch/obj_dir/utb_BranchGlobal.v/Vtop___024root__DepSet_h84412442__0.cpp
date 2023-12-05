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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop_top___eval_initial__TOP__top((&vlSymsp->TOP__top));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop_top___eval_initial__TOP__top__0((&vlSymsp->TOP__top));
    vlSelf->__Vtrigprevexpr___TOP__top__DUT____PVT__clk__0 
        = vlSymsp->TOP__top__DUT.__PVT__clk;
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
void Vtop_lab4_branch_BranchGlobal___ico_sequent__TOP__top__DUT__0(Vtop_lab4_branch_BranchGlobal* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_lab4_branch_BranchGlobal___ico_sequent__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
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
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__top__DUT.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DUT____PVT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSymsp->TOP__top.clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__top__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__top__DUT____PVT__clk__0 
        = vlSymsp->TOP__top__DUT.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__clk__0 = vlSymsp->TOP__top.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_lab4_branch_BranchGlobal___act_comb__TOP__top__DUT__0(Vtop_lab4_branch_BranchGlobal* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_top___act_comb__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop_lab4_branch_BranchGlobal___act_comb__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
    }
}

void Vtop_lab4_branch_BranchGlobal___nba_sequent__TOP__top__DUT__0(Vtop_lab4_branch_BranchGlobal* vlSelf);
void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_lab4_branch_BranchGlobal___nba_comb__TOP__top__DUT__0(Vtop_lab4_branch_BranchGlobal* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab4_branch_BranchGlobal___nba_sequent__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtop_top___nba_sequent__TOP__top__0((&vlSymsp->TOP__top));
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_comb__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtop_lab4_branch_BranchGlobal___nba_comb__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
    }
}
