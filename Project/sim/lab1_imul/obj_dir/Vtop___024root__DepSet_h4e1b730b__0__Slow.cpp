// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"
#include "Vtop___024unit__03a__03adriver__Vclpkg.h"
#include "Vtop___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtop_std__03a__03amailbox__Tz1__Vclpkg.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlClassRef<Vtop_std__03a__03amailbox__Tz1> top__DOT__mbx;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
    if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux__DOT____Vtogcov__in1)) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux__DOT____Vtogcov__in1 
            = (0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux__DOT____Vtogcov__in1);
    }
    vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__DOT__iml_if.clk = 0U;
    vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
    top__DOT__mbx = VL_NEW(Vtop_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    vlSelf->top__DOT__gen = VL_NEW(Vtop___024unit__03a__03agenerator, vlSymsp, top__DOT__mbx);
    vlSelf->top__DOT__drv = VL_NEW(Vtop___024unit__03a__03adriver, vlSymsp, top__DOT__mbx);
    VL_NULL_CHECK(vlSelf->top__DOT__drv, "../lab1_imul/tb_IntMul.v", 165)->__PVT__iml_if 
        = (&vlSymsp->TOP__top__DOT__iml_if);
    VL_NULL_CHECK(vlSelf->top__DOT__drv, "../lab1_imul/tb_IntMul.v", 166)->__VnoInFunc_reset(vlSymsp);
    vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x64756d70U;
    __Vtemp_1[2U] = 0x7665732fU;
    __Vtemp_1[3U] = 0x7761U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
}
