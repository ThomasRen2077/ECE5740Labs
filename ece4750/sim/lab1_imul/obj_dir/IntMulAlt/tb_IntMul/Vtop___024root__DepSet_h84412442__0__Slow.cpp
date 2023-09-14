// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace(Vtop_vc_Trace* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace((&vlSymsp->TOP__top__imul__vc_trace));
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSymsp->TOP__top__imul.__PVT__i) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__i__0)));
    vlSelf->__Vtrigprevexpr___TOP__top__imul____PVT__i__0 
        = vlSymsp->TOP__top__imul.__PVT__i;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
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
    vlSymsp->TOP__top.linetrace = vlSelf->linetrace;
    vlSymsp->TOP__top.clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__0(Vtop_vc_Trace* vlSelf);
VL_ATTR_COLD void Vtop_vc_SimpleAdder__P20___stl_sequent__TOP__top__imul__Add__0(Vtop_vc_SimpleAdder__P20* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf);
VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__1(Vtop_vc_Trace* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
VL_ATTR_COLD void Vtop_vc_SimpleAdder__P20___stl_comb__TOP__top__imul__Add__0(Vtop_vc_SimpleAdder__P20* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_top___stl_sequent__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__0((&vlSymsp->TOP__top__imul__vc_trace));
        Vtop_vc_SimpleAdder__P20___stl_sequent__TOP__top__imul__Add__0((&vlSymsp->TOP__top__imul__Add));
        Vtop_top___stl_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__1((&vlSymsp->TOP__top__imul));
        Vtop_vc_Trace___stl_sequent__TOP__top__imul__vc_trace__1((&vlSymsp->TOP__top__imul__vc_trace));
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtop_vc_SimpleAdder__P20___stl_comb__TOP__top__imul__Add__0((&vlSymsp->TOP__top__imul__Add));
        Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__1((&vlSymsp->TOP__top__imul));
    }
}
