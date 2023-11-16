// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab3_cache_CacheAltDpath.h"

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__1(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__1\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__cache_request_data_M0 = vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__q;
    VL_REPLICATE_WII(32, __Vtemp_1, vlSelf->__PVT__cache_request_data_M0, 0x10U);
    VL_ASSIGN_W(512,vlSelf->__PVT__repl_cachereq_data, __Vtemp_1);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0U)))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 1U)))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 2U)))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 3U)))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 4U)))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 5U)))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 6U)))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 7U)))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 8U)))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 9U)))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0xaU)))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0xbU)))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0xcU)))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0xdU)))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0xeU)))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0xfU)))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x10U)))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x11U)))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x12U)))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x13U)))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x14U)))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x15U)))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x16U)))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x17U)))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x18U)))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x19U)))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x1aU)))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x1bU)))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x1cU)))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x1dU)))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x1eU)))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_data_M0, 0x1fU)))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_request_data_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_data_M0, 0x1fU)));
    }
    VL_ASSIGN_W(512,vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__in0, vlSelf->__PVT__repl_cachereq_data);
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__2(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__2\n"); );
    // Body
    vlSelf->__PVT__cache_request_addr_M0 = vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0U)))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 1U)))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 2U)))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 3U)))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 4U)))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 5U)))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 6U)))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 7U)))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 8U)))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 9U)))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0xaU)))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0xbU)))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0xcU)))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0xdU)))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0xeU)))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0xfU)))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x10U)))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x11U)))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x12U)))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x13U)))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x14U)))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x15U)))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x16U)))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x17U)))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x18U)))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x19U)))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x1aU)))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x1bU)))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x1cU)))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x1dU)))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x1eU)))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_request_addr_M0, 0x1fU)))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_request_addr_M0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0x1fU)));
    }
    vlSelf->__PVT__offset_M0 = (0xfU & VL_SEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 2U, 4U));
    vlSymsp->TOP__top__DUT__z6b_mux.__PVT__in0 = vlSelf->__PVT__cache_request_addr_M0;
    vlSelf->__PVT__z6b_result = (0xffffffc0U & vlSelf->__PVT__cache_request_addr_M0);
    vlSelf->__PVT__current_tag = (0x1fffffU & VL_SEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 0xbU, 0x15U));
    vlSelf->__PVT__index_M0 = (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__cache_request_addr_M0, 6U, 5U));
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__offset_M0), 0U)))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__offset_M0, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__offset_M0), 1U)))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__offset_M0, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__offset_M0), 2U)))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__offset_M0, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__offset_M0), 3U)))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__offset_M0, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__offset_M0), 3U)));
    }
    vlSelf->__PVT__offset_write = (0xffffU & ((IData)(1U) 
                                              << (IData)(vlSelf->__PVT__offset_M0)));
    vlSymsp->TOP__top__DUT__output_mux.__PVT__sel = vlSelf->__PVT__offset_M0;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0U)))) {
        vlSymsp->__Vcoverage[710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 1U)))) {
        vlSymsp->__Vcoverage[711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 2U)))) {
        vlSymsp->__Vcoverage[712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 3U)))) {
        vlSymsp->__Vcoverage[713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 4U)))) {
        vlSymsp->__Vcoverage[714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 5U)))) {
        vlSymsp->__Vcoverage[715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 6U)))) {
        vlSymsp->__Vcoverage[716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 7U)))) {
        vlSymsp->__Vcoverage[717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 8U)))) {
        vlSymsp->__Vcoverage[718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 9U)))) {
        vlSymsp->__Vcoverage[719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0xaU)))) {
        vlSymsp->__Vcoverage[720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0xbU)))) {
        vlSymsp->__Vcoverage[721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0xcU)))) {
        vlSymsp->__Vcoverage[722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0xdU)))) {
        vlSymsp->__Vcoverage[723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0xeU)))) {
        vlSymsp->__Vcoverage[724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0xfU)))) {
        vlSymsp->__Vcoverage[725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x10U)))) {
        vlSymsp->__Vcoverage[726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x11U)))) {
        vlSymsp->__Vcoverage[727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x12U)))) {
        vlSymsp->__Vcoverage[728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x13U)))) {
        vlSymsp->__Vcoverage[729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x14U)))) {
        vlSymsp->__Vcoverage[730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x15U)))) {
        vlSymsp->__Vcoverage[731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x16U)))) {
        vlSymsp->__Vcoverage[732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x17U)))) {
        vlSymsp->__Vcoverage[733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x18U)))) {
        vlSymsp->__Vcoverage[734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x19U)))) {
        vlSymsp->__Vcoverage[735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x1aU)))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x1bU)))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x1cU)))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x1dU)))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x1eU)))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_result, 0x1fU)))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__z6b_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_result, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__z6b_mux.__PVT__in1 = vlSelf->__PVT__z6b_result;
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0U)))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 1U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 1U)))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 2U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 2U)))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 3U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 3U)))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 4U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 4U)))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 5U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 5U)))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 6U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 6U)))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 7U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 7U)))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 8U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 8U)))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 9U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 9U)))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xaU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0xaU)))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xbU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0xbU)))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xcU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0xcU)))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xdU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0xdU)))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xeU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0xeU)))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xfU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0xfU)))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x10U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0x10U)))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x11U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0x11U)))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x12U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0x12U)))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x13U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0x13U)))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x14U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__current_tag, 0x14U)))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__current_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__current_tag, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_M0), 0U)))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_M0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_M0), 1U)))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_M0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_M0), 2U)))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_M0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_M0), 3U)))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_M0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_M0), 4U)))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__index_M0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_M0), 4U)));
    }
    vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__in0 
        = vlSelf->__PVT__index_M0;
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 0U)))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 1U)))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 2U)))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 3U)))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 4U)))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 5U)))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 6U)))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 7U)))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 8U)))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 9U)))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 0xaU)))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 0xbU)))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 0xcU)))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 0xdU)))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 0xeU)))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__offset_write), 0xfU)))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__offset_write, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__offset_write), 0xfU)));
    }
    vlSymsp->TOP__top__DUT__word_en_mux.__PVT__in1 
        = vlSelf->__PVT__offset_write;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__1(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__1\n"); );
    // Body
    vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__en 
        = vlSelf->__PVT__reg_en_M0;
    vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__d 
        = vlSelf->__PVT__memreq_msg_data;
    vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__en 
        = vlSelf->__PVT__reg_en_M0;
    vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__d 
        = vlSelf->__PVT__memreq_msg_addr;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__2(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__2\n"); );
    // Body
    VL_ASSIGN_W(512,vlSelf->__PVT__write_data, vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__out);
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__3(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__3\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    VL_ASSIGN_W(512,__Vtemp_1, vlSelf->__PVT__data_array2
                [vlSelf->__PVT__index_M0]);
    VL_ASSIGN_W(512,vlSelf->__Vcellinp__way_output_sel_mux__in1, __Vtemp_1);
    VL_ASSIGN_W(512,__Vtemp_2, vlSelf->__PVT__data_array
                [vlSelf->__PVT__index_M0]);
    VL_ASSIGN_W(512,vlSelf->__Vcellinp__way_output_sel_mux__in0, __Vtemp_2);
    VL_ASSIGN_W(512,vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__in1, vlSelf->__Vcellinp__way_output_sel_mux__in1);
    VL_ASSIGN_W(512,vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__in0, vlSelf->__Vcellinp__way_output_sel_mux__in0);
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__4(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__4\n"); );
    // Body
    if ((((IData)(vlSelf->__PVT__tarray_en) & vlSelf->__PVT__valid_array
          [vlSelf->__PVT__index_M0]) & (vlSelf->__PVT__current_tag 
                                        == vlSelf->__PVT__tag_array
                                        [vlSelf->__PVT__index_M0]))) {
        vlSelf->__PVT__tarray_match1 = 1U;
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__tarray_match1 = 0U;
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
    }
    if ((((IData)(vlSelf->__PVT__tarray_en2) & vlSelf->__PVT__valid_array2
          [vlSelf->__PVT__index_M0]) & (vlSelf->__PVT__current_tag 
                                        == vlSelf->__PVT__tag_array2
                                        [vlSelf->__PVT__index_M0]))) {
        vlSelf->__PVT__tarray_match2 = 1U;
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__tarray_match2 = 0U;
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->__PVT__tarray_match1) {
        vlSelf->__PVT__tarray_match = 1U;
        vlSelf->__PVT__current_lru = 0U;
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__tarray_match2) {
        vlSelf->__PVT__tarray_match = 1U;
        vlSelf->__PVT__current_lru = 1U;
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__flush) {
        vlSelf->__PVT__tarray_match = 0U;
        vlSelf->__PVT__current_lru = (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 5U));
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__tarray_match = 0U;
        vlSelf->__PVT__current_lru = vlSelf->__PVT__lru_array
            [vlSelf->__PVT__index_M0];
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->__PVT__current_lru) {
        vlSelf->__PVT__current_dirty = vlSelf->__PVT__dirty_array2
            [vlSelf->__PVT__index_M0];
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__current_dirty = vlSelf->__PVT__dirty_array
            [vlSelf->__PVT__index_M0];
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__tarray_match1) ^ (IData)(vlSelf->__Vtogcov__tarray_match1))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_match1 = vlSelf->__PVT__tarray_match1;
    }
    if (((IData)(vlSelf->__PVT__tarray_match2) ^ (IData)(vlSelf->__Vtogcov__tarray_match2))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_match2 = vlSelf->__PVT__tarray_match2;
    }
    if (((IData)(vlSelf->__PVT__tarray_match) ^ (IData)(vlSelf->__Vtogcov__tarray_match))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_match = vlSelf->__PVT__tarray_match;
    }
    if (((IData)(vlSelf->__PVT__current_dirty) ^ (IData)(vlSelf->__Vtogcov__current_dirty))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__current_dirty = vlSelf->__PVT__current_dirty;
    }
    if (((IData)(vlSelf->__PVT__current_lru) ^ (IData)(vlSelf->__Vtogcov__current_lru))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__current_lru = vlSelf->__PVT__current_lru;
    }
    vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__sel 
        = vlSelf->__PVT__current_lru;
    vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__sel 
        = vlSelf->__PVT__current_lru;
    vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__sel 
        = vlSelf->__PVT__current_lru;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__5(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__5\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_4;
    VlWide<16>/*511:0*/ __Vtemp_5;
    VlWide<16>/*511:0*/ __Vtemp_6;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<16>/*511:0*/ __Vtemp_8;
    VlWide<16>/*511:0*/ __Vtemp_9;
    VlWide<16>/*511:0*/ __Vtemp_10;
    VlWide<16>/*511:0*/ __Vtemp_11;
    VlWide<16>/*511:0*/ __Vtemp_12;
    VlWide<16>/*511:0*/ __Vtemp_13;
    VlWide<16>/*511:0*/ __Vtemp_14;
    VlWide<16>/*511:0*/ __Vtemp_15;
    VlWide<16>/*511:0*/ __Vtemp_16;
    VlWide<16>/*511:0*/ __Vtemp_17;
    VlWide<16>/*511:0*/ __Vtemp_18;
    VlWide<16>/*511:0*/ __Vtemp_19;
    VlWide<16>/*511:0*/ __Vtemp_20;
    VlWide<16>/*511:0*/ __Vtemp_21;
    VlWide<16>/*511:0*/ __Vtemp_22;
    VlWide<16>/*511:0*/ __Vtemp_23;
    VlWide<16>/*511:0*/ __Vtemp_24;
    VlWide<16>/*511:0*/ __Vtemp_25;
    VlWide<16>/*511:0*/ __Vtemp_26;
    VlWide<16>/*511:0*/ __Vtemp_27;
    VlWide<16>/*511:0*/ __Vtemp_28;
    VlWide<16>/*511:0*/ __Vtemp_29;
    VlWide<16>/*511:0*/ __Vtemp_30;
    VlWide<16>/*511:0*/ __Vtemp_31;
    VlWide<16>/*511:0*/ __Vtemp_32;
    // Body
    vlSelf->__PVT__index_spill = vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__out;
    VL_ASSIGN_W(512,vlSelf->__PVT__data_array_output, vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__out);
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_spill), 0U)))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_spill, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_spill), 1U)))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_spill, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_spill), 2U)))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_spill, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_spill), 3U)))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_spill, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__index_spill), 4U)))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__index_spill, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__index_spill), 4U)));
    }
    vlSelf->__Vcellinp__FLush_dirty_mux__in1 = vlSelf->__PVT__dirty_array
        [vlSelf->__PVT__index_spill];
    vlSelf->__Vcellinp__FLush_dirty_mux__in0 = vlSelf->__PVT__dirty_array2
        [vlSelf->__PVT__index_spill];
    if (vlSelf->__PVT__current_lru) {
        if ((0U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_1, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_1, 0U, 0x20U);
            vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        } else if ((1U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_2, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_2, 0x20U, 0x20U);
            vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        } else if ((2U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_3, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_3, 0x40U, 0x20U);
            vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        } else if ((3U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_4, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_4, 0x60U, 0x20U);
            vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        } else if ((4U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_5, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_5, 0x80U, 0x20U);
            vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        } else if ((5U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_6, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_6, 0xa0U, 0x20U);
            vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        } else if ((6U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_7, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_7, 0xc0U, 0x20U);
            vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        } else if ((7U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_8, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_8, 0xe0U, 0x20U);
            vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        } else if ((8U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_9, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_9, 0x100U, 0x20U);
            vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        } else if ((9U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_10, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_10, 0x120U, 0x20U);
            vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xaU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_11, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_11, 0x140U, 0x20U);
            vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xbU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_12, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_12, 0x160U, 0x20U);
            vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xcU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_13, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_13, 0x180U, 0x20U);
            vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xdU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_14, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_14, 0x1a0U, 0x20U);
            vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xeU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_15, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_15, 0x1c0U, 0x20U);
            vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xfU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_16, vlSelf->__PVT__data_array
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_16, 0x1e0U, 0x20U);
            vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__cache_to_mem_data = 0U;
            vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
    } else {
        if ((0U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_17, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_17, 0U, 0x20U);
            vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        } else if ((1U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_18, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_18, 0x20U, 0x20U);
            vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        } else if ((2U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_19, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_19, 0x40U, 0x20U);
            vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        } else if ((3U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_20, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_20, 0x60U, 0x20U);
            vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        } else if ((4U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_21, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_21, 0x80U, 0x20U);
            vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        } else if ((5U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_22, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_22, 0xa0U, 0x20U);
            vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        } else if ((6U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_23, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_23, 0xc0U, 0x20U);
            vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        } else if ((7U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_24, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_24, 0xe0U, 0x20U);
            vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        } else if ((8U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_25, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_25, 0x100U, 0x20U);
            vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        } else if ((9U == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_26, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_26, 0x120U, 0x20U);
            vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xaU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_27, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_27, 0x140U, 0x20U);
            vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xbU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_28, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_28, 0x160U, 0x20U);
            vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xcU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_29, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_29, 0x180U, 0x20U);
            vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xdU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_30, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_30, 0x1a0U, 0x20U);
            vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xeU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_31, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_31, 0x1c0U, 0x20U);
            vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        } else if ((0xfU == (IData)(vlSelf->__PVT__spill_counter))) {
            VL_ASSIGN_W(512,__Vtemp_32, vlSelf->__PVT__data_array2
                        [vlSelf->__PVT__index_spill]);
            vlSelf->__PVT__cache_to_mem_data = VL_SEL_IWII(512, __Vtemp_32, 0x1e0U, 0x20U);
            vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__cache_to_mem_data = 0U;
            vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vcellinp__Spill_tag_mux__in1 = vlSelf->__PVT__tag_array
        [vlSelf->__PVT__index_spill];
    vlSelf->__Vcellinp__Spill_tag_mux__in0 = vlSelf->__PVT__tag_array2
        [vlSelf->__PVT__index_spill];
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
    vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__in1 
        = vlSelf->__Vcellinp__FLush_dirty_mux__in1;
    vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__in0 
        = vlSelf->__Vcellinp__FLush_dirty_mux__in0;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0U)))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 1U)))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 2U)))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 3U)))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 4U)))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 5U)))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 6U)))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 7U)))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 8U)))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 9U)))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0xaU)))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0xbU)))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0xcU)))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0xdU)))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0xeU)))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0xfU)))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x10U)))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x11U)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x12U)))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x13U)))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x14U)))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x15U)))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x16U)))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x17U)))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x18U)))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x19U)))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_to_mem_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_to_mem_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_to_mem_data, 0x1fU)));
    }
    vlSelf->__PVT__cache_req_msg_data = vlSelf->__PVT__cache_to_mem_data;
    vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__in1 
        = vlSelf->__Vcellinp__Spill_tag_mux__in1;
    vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__in0 
        = vlSelf->__Vcellinp__Spill_tag_mux__in0;
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
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_req_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__6(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__6\n"); );
    // Body
    vlSelf->__PVT__flush_dirty = vlSymsp->TOP__top__DUT__FLush_dirty_mux.__PVT__out;
    vlSelf->__PVT__Spill_tag = vlSymsp->TOP__top__DUT__Spill_tag_mux.__PVT__out;
    vlSelf->__PVT__memresp_msg_data = vlSymsp->TOP__top__DUT__output_mux.__PVT__out;
    if (((IData)(vlSelf->__PVT__flush_dirty) ^ (IData)(vlSelf->__Vtogcov__flush_dirty))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__flush_dirty = vlSelf->__PVT__flush_dirty;
    }
    if ((0x10U <= (IData)(vlSelf->__PVT__spill_counter))) {
        vlSelf->__PVT__spill_done = 1U;
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
    } else if (((IData)(vlSelf->__PVT__flush) & (~ (IData)(vlSelf->__PVT__flush_dirty)))) {
        vlSelf->__PVT__spill_done = 1U;
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__spill_done = 0U;
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0U)))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 1U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 1U)))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 2U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 2U)))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 3U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 3U)))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 4U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 4U)))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 5U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 5U)))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 6U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 6U)))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 7U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 7U)))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 8U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 8U)))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 9U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 9U)))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xaU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0xaU)))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xbU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0xbU)))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xcU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0xcU)))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xdU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0xdU)))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xeU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0xeU)))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xfU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0xfU)))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x10U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0x10U)))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x11U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0x11U)))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x12U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0x12U)))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x13U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0x13U)))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x14U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__Spill_tag, 0x14U)))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__Spill_tag, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__Spill_tag, 0x14U)));
    }
    vlSelf->__PVT__spill_initial_addr = VL_CONCAT_III(32,21,11, vlSelf->__PVT__Spill_tag, 
                                                      VL_CONCAT_III(11,5,6, (IData)(vlSelf->__PVT__index_spill), 0U));
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memresp_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memresp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memresp_msg_data, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__spill_done) ^ (IData)(vlSelf->__Vtogcov__spill_done))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__spill_done = vlSelf->__PVT__spill_done;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0U)))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 1U)))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 2U)))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 3U)))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 4U)))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 5U)))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 6U)))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 7U)))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 8U)))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 9U)))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_initial_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__spill_initial_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_initial_addr, 0x1fU)));
    }
    vlSelf->__PVT__spill_addr = (vlSelf->__PVT__spill_initial_addr 
                                 + VL_CONCAT_III(32,30,2, 
                                                 VL_EXTEND_II(30,4, 
                                                              (0xfU 
                                                               & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 0U, 4U))), 0U));
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0U)))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 1U)))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 2U)))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 3U)))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 4U)))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 5U)))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 6U)))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 7U)))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 8U)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 9U)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__spill_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__spill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__spill_addr, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__in0 
        = vlSelf->__PVT__spill_addr;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__7(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__7\n"); );
    // Body
    vlSelf->__PVT__z6b_mux_result = vlSymsp->TOP__top__DUT__z6b_mux.__PVT__out;
    vlSelf->__PVT__write_word_enable = vlSymsp->TOP__top__DUT__word_en_mux.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0U)))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 1U)))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 2U)))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 3U)))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 4U)))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 5U)))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 6U)))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 7U)))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 8U)))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 9U)))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xaU)))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xbU)))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xcU)))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xdU)))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xeU)))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0xfU)))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x10U)))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x11U)))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x12U)))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x13U)))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x14U)))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x15U)))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x16U)))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x17U)))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x18U)))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x19U)))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1aU)))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1bU)))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1cU)))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1dU)))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1eU)))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__z6b_mux_result, 0x1fU)))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__z6b_mux_result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__z6b_mux_result, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0U)))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 1U)))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 2U)))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 3U)))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 4U)))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 5U)))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 6U)))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 7U)))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 8U)))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 9U)))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xaU)))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xbU)))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xcU)))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xdU)))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xeU)))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__write_word_enable), 0xfU)))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__write_word_enable, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__8(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__8\n"); );
    // Body
    vlSelf->__PVT__refill_addr = (vlSelf->__PVT__z6b_mux_result 
                                  + VL_CONCAT_III(32,30,2, 
                                                  VL_EXTEND_II(30,4, 
                                                               (0xfU 
                                                                & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 0U, 4U))), 0U));
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0U)))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 1U)))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 2U)))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 3U)))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 4U)))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 5U)))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 6U)))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 7U)))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 8U)))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 9U)))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__refill_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__refill_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__refill_addr, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__in1 
        = vlSelf->__PVT__refill_addr;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__9(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__9\n"); );
    // Body
    vlSelf->__PVT__cache_req_msg_addr = vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_req_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_req_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_req_msg_addr, 0x1fU)));
    }
}
