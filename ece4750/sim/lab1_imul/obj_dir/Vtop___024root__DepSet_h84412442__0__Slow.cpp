// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop_top___eval_static__TOP__top(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace(Vtop_vc_Trace* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop_top___eval_static__TOP__top((&vlSymsp->TOP__top));
    vlSelf->__Vm_traceActivity[0x10U] = 1U;
    vlSelf->__Vm_traceActivity[0xfU] = 1U;
    vlSelf->__Vm_traceActivity[0xeU] = 1U;
    vlSelf->__Vm_traceActivity[0xdU] = 1U;
    vlSelf->__Vm_traceActivity[0xcU] = 1U;
    vlSelf->__Vm_traceActivity[0xbU] = 1U;
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtop_vc_Trace___eval_static__TOP__top__imul__vc_trace((&vlSymsp->TOP__top__imul__vc_trace));
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

VL_ATTR_COLD void Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__0(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__0(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSink__P20_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__0(Vtop_vc_TestSource__P40_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__1(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__1(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__1(Vtop_vc_TestSource__P40_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P40* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSink__P20_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__2(Vtop_vc_TestRandDelaySource__pi1* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__2(Vtop_vc_TestRandDelaySink__P20_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__2(Vtop_vc_TestSource__P40_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__2(Vtop_vc_TestSink__P20_PB1c* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf);
VL_ATTR_COLD void Vtop_vc_SimpleAdder__P20___stl_comb__TOP__top__imul__Add__0(Vtop_vc_SimpleAdder__P20* vlSelf);
VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__0((&vlSymsp->TOP__top__src));
        Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__0((&vlSymsp->TOP__top__sink));
        Vtop_top___stl_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__0((&vlSymsp->TOP__top__sink__sink));
        Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__0((&vlSymsp->TOP__top__src__src));
        Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__0((&vlSymsp->TOP__top__sink__msg_delay));
        Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__0((&vlSymsp->TOP__top__src__msg_delay));
        Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__1((&vlSymsp->TOP__top__src));
        Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__1((&vlSymsp->TOP__top__sink));
        Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__1((&vlSymsp->TOP__top__src__src));
        Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__1((&vlSymsp->TOP__top__src__msg_delay));
        Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__1((&vlSymsp->TOP__top__sink__msg_delay));
        Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__1((&vlSymsp->TOP__top__sink__sink));
        Vtop_vc_TestRandDelaySource__pi1___stl_sequent__TOP__top__src__2((&vlSymsp->TOP__top__src));
        Vtop_vc_TestRandDelaySink__P20_PB1c___stl_sequent__TOP__top__sink__2((&vlSymsp->TOP__top__sink));
        Vtop_top___stl_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_vc_TestSource__P40_PB1c___stl_sequent__TOP__top__src__src__2((&vlSymsp->TOP__top__src__src));
        Vtop_vc_TestSink__P20_PB1c___stl_sequent__TOP__top__sink__sink__2((&vlSymsp->TOP__top__sink__sink));
        Vtop_lab1_imul_IntMulAlt___stl_sequent__TOP__top__imul__1((&vlSymsp->TOP__top__imul));
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_lab1_imul_IntMulAlt___stl_comb__TOP__top__imul__0((&vlSymsp->TOP__top__imul));
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
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
