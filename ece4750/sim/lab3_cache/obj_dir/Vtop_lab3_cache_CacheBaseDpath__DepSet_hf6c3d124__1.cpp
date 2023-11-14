// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab3_cache_CacheBaseDpath.h"

VL_INLINE_OPT void Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__5(Vtop_lab3_cache_CacheBaseDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__5\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    VL_ASSIGN_W(512,__Vtemp_1, vlSelf->__PVT__data_array
                [vlSelf->__PVT__index_M0]);
    VL_ASSIGN_W(512,vlSelf->__PVT__data_array_output, __Vtemp_1);
    vlSelf->__Vcellinp__output_mux__in15 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x1e0U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in14 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x1c0U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in13 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x1a0U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in12 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x180U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in11 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x160U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in10 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x140U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in9 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x120U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in8 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x100U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in7 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0xe0U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in6 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0xc0U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in5 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0xa0U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in4 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x80U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in3 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x60U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in2 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x40U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in1 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0x20U, 0x20U);
    vlSelf->__Vcellinp__output_mux__in0 = VL_SEL_IWII(512, vlSelf->__PVT__data_array_output, 0U, 0x20U);
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in15 
        = vlSelf->__Vcellinp__output_mux__in15;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in14 
        = vlSelf->__Vcellinp__output_mux__in14;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in13 
        = vlSelf->__Vcellinp__output_mux__in13;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in12 
        = vlSelf->__Vcellinp__output_mux__in12;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in11 
        = vlSelf->__Vcellinp__output_mux__in11;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in10 
        = vlSelf->__Vcellinp__output_mux__in10;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in9 = vlSelf->__Vcellinp__output_mux__in9;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in8 = vlSelf->__Vcellinp__output_mux__in8;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in7 = vlSelf->__Vcellinp__output_mux__in7;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in6 = vlSelf->__Vcellinp__output_mux__in6;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in5 = vlSelf->__Vcellinp__output_mux__in5;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in4 = vlSelf->__Vcellinp__output_mux__in4;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in3 = vlSelf->__Vcellinp__output_mux__in3;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in2 = vlSelf->__Vcellinp__output_mux__in2;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in1 = vlSelf->__Vcellinp__output_mux__in1;
    vlSymsp->TOP__top__DUT__output_mux.__PVT__in0 = vlSelf->__Vcellinp__output_mux__in0;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__6(Vtop_lab3_cache_CacheBaseDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__6\n"); );
    // Body
    vlSelf->__PVT__memresp_msg_data = vlSymsp->TOP__top__DUT__output_mux.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__7(Vtop_lab3_cache_CacheBaseDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__7\n"); );
    // Body
    vlSelf->__PVT__z6b_mux_result = vlSymsp->TOP__top__DUT__z6b_mux.__PVT__out;
    vlSelf->__PVT__write_word_enable = vlSymsp->TOP__top__DUT__word_en_mux.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0U)))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 1U)))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 2U)))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 3U)))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 4U)))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 5U)))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 6U)))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 7U)))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 8U)))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 9U)))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xaU)))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xbU)))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xcU)))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xdU)))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xeU)))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xfU)))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x10U)))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x11U)))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x12U)))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x13U)))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x14U)))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x15U)))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x16U)))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x17U)))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x18U)))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x19U)))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1aU)))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1bU)))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1cU)))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1dU)))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1eU)))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1fU)))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0U)))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 1U)))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 2U)))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 3U)))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 4U)))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 5U)))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 6U)))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 7U)))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 8U)))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 9U)))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xaU)))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xbU)))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xcU)))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xdU)))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xeU)))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xfU)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__8(Vtop_lab3_cache_CacheBaseDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__8\n"); );
    // Body
    vlSelf->__PVT__refill_addr = (vlSelf->__PVT__z6b_mux_result 
                                  + VL_CONCAT_III(32,30,2, 
                                                  VL_EXTEND_II(30,4, 
                                                               (0xfU 
                                                                & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 0U, 4U))), 0U));
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0U)))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 1U)))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 2U)))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 3U)))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 4U)))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 5U)))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 6U)))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 7U)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 8U)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 9U)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__in1 
        = vlSelf->__PVT__refill_addr;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__9(Vtop_lab3_cache_CacheBaseDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheBaseDpath___nba_comb__TOP__top__DUT__9\n"); );
    // Body
    vlSelf->__PVT__cache_req_msg_addr = vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU)));
    }
}
