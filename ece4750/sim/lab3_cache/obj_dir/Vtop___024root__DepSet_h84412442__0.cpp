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
void Vtop_lab3_cache_CacheAltDpath___eval_initial__TOP__top__DUT(Vtop_lab3_cache_CacheAltDpath* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop_top___eval_initial__TOP__top((&vlSymsp->TOP__top));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop_top___eval_initial__TOP__top__0((&vlSymsp->TOP__top));
    Vtop_lab3_cache_CacheAltDpath___eval_initial__TOP__top__DUT((&vlSymsp->TOP__top__DUT));
    vlSelf->__Vtrigprevexpr___TOP__top__DUT____PVT__clk__0 
        = vlSymsp->TOP__top__DUT.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DUT__cache_request_addr_reg_M0____PVT__clk__0 
        = vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DUT__cache_request_data_reg_M0____PVT__clk__0 
        = vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__clk;
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
void Vtop_lab3_cache_CacheAltDpath___ico_sequent__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_EnResetReg__P20___ico_sequent__TOP__top__DUT__cache_request_addr_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_vc_EnResetReg__P20___ico_sequent__TOP__top__DUT__cache_request_data_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtop_top___ico_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_lab3_cache_CacheAltDpath___ico_sequent__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
        Vtop_vc_EnResetReg__P20___ico_sequent__TOP__top__DUT__cache_request_addr_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0));
        Vtop_vc_EnResetReg__P20___ico_sequent__TOP__top__DUT__cache_request_data_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_data_reg_M0));
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
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DUT__cache_request_addr_reg_M0____PVT__clk__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DUT__cache_request_data_reg_M0____PVT__clk__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(4U, ((~ (IData)(vlSymsp->TOP__top.clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__top__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__top__DUT____PVT__clk__0 
        = vlSymsp->TOP__top__DUT.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DUT__cache_request_addr_reg_M0____PVT__clk__0 
        = vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DUT__cache_request_data_reg_M0____PVT__clk__0 
        = vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__top__clk__0 = vlSymsp->TOP__top.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_EnResetReg__P20___act_comb__TOP__top__DUT__cache_request_addr_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_vc_EnResetReg__P20___act_comb__TOP__top__DUT__cache_request_data_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__darray_write_mux__0(Vtop_vc_Mux2__P200* vlSelf);
void Vtop_vc_Mux2__P10___act_comb__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf);
void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__0(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__z6b_mux__0(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2__P5___act_comb__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf);
void Vtop_top___act_comb__TOP__top__1(Vtop_top* vlSelf);
void Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__0(Vtop_vc_Mux2* vlSelf);
void Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__0(Vtop_vc_Mux2__P15* vlSelf);
void Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__way_output_sel_mux__0(Vtop_vc_Mux2__P200* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__1(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__1(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__1(Vtop_vc_Mux2* vlSelf);
void Vtop_top___act_comb__TOP__top__2(Vtop_top* vlSelf);
void Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__1(Vtop_vc_Mux2__P15* vlSelf);
void Vtop_lab3_cache_Mux16__P20___act_comb__TOP__top__DUT__output_mux__0(Vtop_lab3_cache_Mux16__P20* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__2(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_top___act_comb__TOP__top__3(Vtop_top* vlSelf);
void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__2(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__3(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_top___act_comb__TOP__top__4(Vtop_top* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((0x18ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop_top___act_comb__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
        Vtop_vc_EnResetReg__P20___act_comb__TOP__top__DUT__cache_request_addr_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0));
        Vtop_vc_EnResetReg__P20___act_comb__TOP__top__DUT__cache_request_data_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_data_reg_M0));
        Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__darray_write_mux__0((&vlSymsp->TOP__top__DUT__darray_write_mux));
        Vtop_vc_Mux2__P10___act_comb__TOP__top__DUT__word_en_mux__0((&vlSymsp->TOP__top__DUT__word_en_mux));
        Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__0((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__z6b_mux__0((&vlSymsp->TOP__top__DUT__z6b_mux));
        Vtop_vc_Mux2__P5___act_comb__TOP__top__DUT__spill_index_mux__0((&vlSymsp->TOP__top__DUT__spill_index_mux));
        Vtop_top___act_comb__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__0((&vlSymsp->TOP__top__DUT__FLush_dirty_mux));
        Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__0((&vlSymsp->TOP__top__DUT__Spill_tag_mux));
        Vtop_vc_Mux2__P200___act_comb__TOP__top__DUT__way_output_sel_mux__0((&vlSymsp->TOP__top__DUT__way_output_sel_mux));
        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__1((&vlSymsp->TOP__top__DUT));
        Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__1((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_vc_Mux2___act_comb__TOP__top__DUT__FLush_dirty_mux__1((&vlSymsp->TOP__top__DUT__FLush_dirty_mux));
        Vtop_top___act_comb__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__1((&vlSymsp->TOP__top__DUT__Spill_tag_mux));
        Vtop_lab3_cache_Mux16__P20___act_comb__TOP__top__DUT__output_mux__0((&vlSymsp->TOP__top__DUT__output_mux));
        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__2((&vlSymsp->TOP__top__DUT));
        Vtop_top___act_comb__TOP__top__3((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__2((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__3((&vlSymsp->TOP__top__DUT));
        Vtop_top___act_comb__TOP__top__4((&vlSymsp->TOP__top));
    }
}

void Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf);
void Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf);
void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__0(Vtop_vc_Mux2__P200* vlSelf);
void Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf);
void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__0(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__0(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf);
void Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__DUT__cache_request_data_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__1(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__DUT__cache_request_addr_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__2(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__z6b_mux__0(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_lab3_cache_Mux16__P20___nba_sequent__TOP__top__DUT__output_mux__0(Vtop_lab3_cache_Mux16__P20* vlSelf);
void Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__1(Vtop_vc_Mux2__P5* vlSelf);
void Vtop_vc_Mux2__P10___nba_sequent__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__1(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_EnResetReg__P20___nba_comb__TOP__top__DUT__cache_request_data_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_vc_EnResetReg__P20___nba_comb__TOP__top__DUT__cache_request_addr_reg_M0__0(Vtop_vc_EnResetReg__P20* vlSelf);
void Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__1(Vtop_vc_Mux2__P200* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__2(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__3(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__4(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__1(Vtop_vc_Mux2__P5* vlSelf);
void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf);
void Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__0(Vtop_vc_Mux2* vlSelf);
void Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__0(Vtop_vc_Mux2__P15* vlSelf);
void Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__way_output_sel_mux__0(Vtop_vc_Mux2__P200* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__5(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__1(Vtop_vc_Mux2* vlSelf);
void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf);
void Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__1(Vtop_vc_Mux2__P15* vlSelf);
void Vtop_lab3_cache_Mux16__P20___nba_comb__TOP__top__DUT__output_mux__0(Vtop_lab3_cache_Mux16__P20* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__6(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_top___nba_comb__TOP__top__3(Vtop_top* vlSelf);
void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__1(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__1(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__1(Vtop_vc_Mux2__P10* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__7(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__8(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__2(Vtop_vc_Mux2__P20* vlSelf);
void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__9(Vtop_lab3_cache_CacheAltDpath* vlSelf);
void Vtop_top___nba_comb__TOP__top__4(Vtop_top* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vtop_top___nba_sequent__TOP__top__0((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__0((&vlSymsp->TOP__top__DUT__spill_index_mux));
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_top___nba_comb__TOP__top__0((&vlSymsp->TOP__top));
        vlSelf->__Vm_traceActivity[5U] = 1U;
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__0((&vlSymsp->TOP__top__DUT));
        Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__0((&vlSymsp->TOP__top__DUT__darray_write_mux));
        Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__0((&vlSymsp->TOP__top__DUT__word_en_mux));
        Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__0((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__0((&vlSymsp->TOP__top__DUT__z6b_mux));
        Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__0((&vlSymsp->TOP__top__DUT__spill_index_mux));
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__DUT__cache_request_data_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_data_reg_M0));
        vlSelf->__Vm_traceActivity[6U] = 1U;
        Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__1((&vlSymsp->TOP__top__DUT));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__DUT__cache_request_addr_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0));
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__2((&vlSymsp->TOP__top__DUT));
        Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__z6b_mux__0((&vlSymsp->TOP__top__DUT__z6b_mux));
        Vtop_lab3_cache_Mux16__P20___nba_sequent__TOP__top__DUT__output_mux__0((&vlSymsp->TOP__top__DUT__output_mux));
        Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__1((&vlSymsp->TOP__top__DUT__spill_index_mux));
        Vtop_vc_Mux2__P10___nba_sequent__TOP__top__DUT__word_en_mux__0((&vlSymsp->TOP__top__DUT__word_en_mux));
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__1((&vlSymsp->TOP__top__DUT));
        vlSelf->__Vm_traceActivity[8U] = 1U;
        Vtop_vc_EnResetReg__P20___nba_comb__TOP__top__DUT__cache_request_data_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_data_reg_M0));
        Vtop_vc_EnResetReg__P20___nba_comb__TOP__top__DUT__cache_request_addr_reg_M0__0((&vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0));
    }
    if ((0x1dULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__darray_write_mux__1((&vlSymsp->TOP__top__DUT__darray_write_mux));
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__2((&vlSymsp->TOP__top__DUT));
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__3((&vlSymsp->TOP__top__DUT));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x1bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__4((&vlSymsp->TOP__top__DUT));
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__1((&vlSymsp->TOP__top__DUT__spill_index_mux));
        Vtop_top___nba_comb__TOP__top__1((&vlSymsp->TOP__top));
        Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__0((&vlSymsp->TOP__top__DUT__FLush_dirty_mux));
        Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__0((&vlSymsp->TOP__top__DUT__Spill_tag_mux));
        Vtop_vc_Mux2__P200___nba_comb__TOP__top__DUT__way_output_sel_mux__0((&vlSymsp->TOP__top__DUT__way_output_sel_mux));
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__5((&vlSymsp->TOP__top__DUT));
        Vtop_vc_Mux2___nba_comb__TOP__top__DUT__FLush_dirty_mux__1((&vlSymsp->TOP__top__DUT__FLush_dirty_mux));
        Vtop_top___nba_comb__TOP__top__2((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__1((&vlSymsp->TOP__top__DUT__Spill_tag_mux));
        Vtop_lab3_cache_Mux16__P20___nba_comb__TOP__top__DUT__output_mux__0((&vlSymsp->TOP__top__DUT__output_mux));
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__6((&vlSymsp->TOP__top__DUT));
        Vtop_top___nba_comb__TOP__top__3((&vlSymsp->TOP__top));
        Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__1((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
    }
    if ((0x1aULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__1((&vlSymsp->TOP__top__DUT__z6b_mux));
        Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__1((&vlSymsp->TOP__top__DUT__word_en_mux));
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__7((&vlSymsp->TOP__top__DUT));
    }
    if ((0x1bULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__8((&vlSymsp->TOP__top__DUT));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__2((&vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux));
        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__9((&vlSymsp->TOP__top__DUT));
        Vtop_top___nba_comb__TOP__top__4((&vlSymsp->TOP__top));
    }
}
