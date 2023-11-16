// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

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
    vlSymsp->TOP__top.linetrace = vlSelf->linetrace;
    vlSymsp->TOP__top.clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P10___stl_sequent__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf);
VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_addr_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_data_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P200___stl_sequent__TOP__top__DUT__darray_write_mux__0(Vtop_vc_Mux2__P200* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__Spill_or_Refill_Mux__0(Vtop_vc_Mux2__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__z6b_mux__0(Vtop_vc_Mux2__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P5___stl_sequent__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf);
VL_ATTR_COLD void Vtop_lab3_cache_Mux16__P20___stl_sequent__TOP__top__DUT__output_mux__0(Vtop_lab3_cache_Mux16__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2___stl_sequent__TOP__top__DUT__FLush_dirty_mux__0(Vtop_vc_Mux2* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__0(Vtop_vc_Mux2__P15* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P200___stl_sequent__TOP__top__DUT__way_output_sel_mux__0(Vtop_vc_Mux2__P200* vlSelf);
VL_ATTR_COLD void Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__1(Vtop_lab3_cache_CacheAltDpath* vlSelf);
VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_addr_reg_M0__1(Vtop_vc_EnResetReg__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_data_reg_M0__1(Vtop_vc_EnResetReg__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__Spill_or_Refill_Mux__1(Vtop_vc_Mux2__P20* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2___stl_sequent__TOP__top__DUT__FLush_dirty_mux__1(Vtop_vc_Mux2* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__2(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__1(Vtop_vc_Mux2__P15* vlSelf);
VL_ATTR_COLD void Vtop_lab3_cache_Mux16__P20___stl_sequent__TOP__top__DUT__output_mux__1(Vtop_lab3_cache_Mux16__P20* vlSelf);
VL_ATTR_COLD void Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__2(Vtop_lab3_cache_CacheAltDpath* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__3(Vtop_top* vlSelf);
VL_ATTR_COLD void Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__Spill_or_Refill_Mux__2(Vtop_vc_Mux2__P20* vlSelf);
VL_ATTR_COLD void Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__3(Vtop_lab3_cache_CacheAltDpath* vlSelf);
VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__4(Vtop_top* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop_top___stl_sequent__TOP__top__0((&vlSymsp->TOP__top));
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
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
        Vtop_vc_Mux2__P10___stl_sequent__TOP__top__DUT__word_en_mux__0((&vlSymsp->TOP__top__DUT__word_en_mux));
        Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_addr_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0));
        Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_data_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_data_reg_M0));
        Vtop_top___stl_sequent__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P200___stl_sequent__TOP__top__DUT__darray_write_mux__0((&vlSymsp->TOP__top__DUT__darray_write_mux));
        Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__Spill_or_Refill_Mux__0((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__z6b_mux__0((&vlSymsp->TOP__top__DUT__z6b_mux));
        Vtop_vc_Mux2__P5___stl_sequent__TOP__top__DUT__spill_index_mux__0((&vlSymsp->TOP__top__DUT__spill_index_mux));
        Vtop_lab3_cache_Mux16__P20___stl_sequent__TOP__top__DUT__output_mux__0((&vlSymsp->TOP__top__DUT__output_mux));
        Vtop_vc_Mux2___stl_sequent__TOP__top__DUT__FLush_dirty_mux__0((&vlSymsp->TOP__top__DUT__FLush_dirty_mux));
        Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__0((&vlSymsp->TOP__top__DUT__Spill_tag_mux));
        Vtop_vc_Mux2__P200___stl_sequent__TOP__top__DUT__way_output_sel_mux__0((&vlSymsp->TOP__top__DUT__way_output_sel_mux));
        Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__1((&vlSymsp->TOP__top__DUT));
        Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_addr_reg_M0__1((&vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0));
        Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__DUT__cache_request_data_reg_M0__1((&vlSymsp->TOP__top__DUT__cache_request_data_reg_M0));
        Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__Spill_or_Refill_Mux__1((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_vc_Mux2___stl_sequent__TOP__top__DUT__FLush_dirty_mux__1((&vlSymsp->TOP__top__DUT__FLush_dirty_mux));
        Vtop_top___stl_sequent__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__1((&vlSymsp->TOP__top__DUT__Spill_tag_mux));
        Vtop_lab3_cache_Mux16__P20___stl_sequent__TOP__top__DUT__output_mux__1((&vlSymsp->TOP__top__DUT__output_mux));
        Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__2((&vlSymsp->TOP__top__DUT));
        Vtop_top___stl_sequent__TOP__top__3((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P20___stl_sequent__TOP__top__DUT__Spill_or_Refill_Mux__2((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_lab3_cache_CacheAltDpath___stl_sequent__TOP__top__DUT__3((&vlSymsp->TOP__top__DUT));
        Vtop_top___stl_sequent__TOP__top__4((&vlSymsp->TOP__top));
    }
}
