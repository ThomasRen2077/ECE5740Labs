// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab3_cache_CacheAltDpath.h"

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___eval_initial__TOP__top__DUT(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___eval_initial__TOP__top__DUT\n"); );
    // Body
    vlSymsp->TOP__top__DUT__word_en_mux.__PVT__in0 = 0xffffU;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___ico_sequent__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___ico_sequent__TOP__top__DUT__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_resp_received 
            = vlSelf->__PVT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->__PVT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_req_sent 
            = vlSelf->__PVT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->__PVT__spill_one_word_done) 
         ^ (IData)(vlSelf->__Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__spill_one_word_done = vlSelf->__PVT__spill_one_word_done;
    }
    if (((IData)(vlSelf->__PVT__darray_wen2) ^ (IData)(vlSelf->__Vtogcov__darray_wen2))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_wen2 = vlSelf->__PVT__darray_wen2;
    }
    if (((IData)(vlSelf->__PVT__darray_wen) ^ (IData)(vlSelf->__Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_wen = vlSelf->__PVT__darray_wen;
    }
    if (((IData)(vlSelf->__PVT__tarray_wen2) ^ (IData)(vlSelf->__Vtogcov__tarray_wen2))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_wen2 = vlSelf->__PVT__tarray_wen2;
    }
    if (((IData)(vlSelf->__PVT__tarray_wen) ^ (IData)(vlSelf->__Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_wen = vlSelf->__PVT__tarray_wen;
    }
    if (((IData)(vlSelf->__PVT__reg_en_M0) ^ (IData)(vlSelf->__Vtogcov__reg_en_M0))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_M0 = vlSelf->__PVT__reg_en_M0;
    }
    vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__en 
        = vlSelf->__PVT__reg_en_M0;
    vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__en 
        = vlSelf->__PVT__reg_en_M0;
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__reset 
        = vlSelf->__PVT__reset;
    if (((IData)(vlSelf->__PVT__darray_write_mux_sel) 
         ^ (IData)(vlSelf->__Vtogcov__darray_write_mux_sel))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_write_mux_sel = vlSelf->__PVT__darray_write_mux_sel;
    }
    vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__sel 
        = vlSelf->__PVT__darray_write_mux_sel;
    if (((IData)(vlSelf->__PVT__write_en_sel) ^ (IData)(vlSelf->__Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en_sel = vlSelf->__PVT__write_en_sel;
    }
    vlSymsp->TOP__top__DUT__word_en_mux.__PVT__sel 
        = vlSelf->__PVT__write_en_sel;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__cache_request_data_reg_M0.__PVT__d 
        = vlSelf->__PVT__memreq_msg_data;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__cache_request_addr_reg_M0.__PVT__d 
        = vlSelf->__PVT__memreq_msg_addr;
    if (((IData)(vlSelf->__PVT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->__Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__Spill_or_Refill_sel = vlSelf->__PVT__Spill_or_Refill_sel;
    }
    vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__sel 
        = vlSelf->__PVT__Spill_or_Refill_sel;
    if (((IData)(vlSelf->__PVT__z6b_sel) ^ (IData)(vlSelf->__Vtogcov__z6b_sel))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__z6b_sel = vlSelf->__PVT__z6b_sel;
    }
    vlSymsp->TOP__top__DUT__z6b_mux.__PVT__sel = vlSelf->__PVT__z6b_sel;
    if (((IData)(vlSelf->__PVT__tarray_en2) ^ (IData)(vlSelf->__Vtogcov__tarray_en2))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_en2 = vlSelf->__PVT__tarray_en2;
    }
    if (((IData)(vlSelf->__PVT__tarray_en) ^ (IData)(vlSelf->__Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_en = vlSelf->__PVT__tarray_en;
    }
    if (((IData)(vlSelf->__PVT__flush) ^ (IData)(vlSelf->__Vtogcov__flush))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__flush = vlSelf->__PVT__flush;
    }
    vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__sel 
        = vlSelf->__PVT__flush;
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

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__1(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__1\n"); );
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
    VL_ASSIGN_W(512,vlSelf->__PVT__write_data, vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__out);
    vlSelf->__PVT__write_word_enable = vlSymsp->TOP__top__DUT__word_en_mux.__PVT__out;
    vlSelf->__PVT__z6b_mux_result = vlSymsp->TOP__top__DUT__z6b_mux.__PVT__out;
    vlSelf->__PVT__index_spill = vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__out;
    VL_ASSIGN_W(512,vlSelf->__PVT__data_array_output, vlSymsp->TOP__top__DUT__way_output_sel_mux.__PVT__out);
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
    vlSelf->__PVT__refill_addr = (vlSelf->__PVT__z6b_mux_result 
                                  + VL_CONCAT_III(32,30,2, 
                                                  VL_EXTEND_II(30,4, 
                                                               (0xfU 
                                                                & VL_SEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 0U, 4U))), 0U));
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

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__2(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__2\n"); );
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

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__3(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___act_comb__TOP__top__DUT__3\n"); );
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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_sequent__TOP__top__DUT__0\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_1;
    VlWide<16>/*511:0*/ __Vtemp_2;
    // Body
    vlSelf->__Vdly__refill_resp_counter = vlSelf->__PVT__refill_resp_counter;
    VL_ASSIGN_W(512,vlSelf->__Vdly__refill_data, vlSelf->__PVT__refill_data);
    vlSelf->__Vdly__refill_req_counter = vlSelf->__PVT__refill_req_counter;
    vlSelf->__Vdly__spill_counter = vlSelf->__PVT__spill_counter;
    vlSelf->__Vdly__flush_counter = vlSelf->__PVT__flush_counter;
    vlSelf->__Vdlyvset__lru_array__v0 = 0U;
    vlSelf->__Vdlyvset__lru_array__v1 = 0U;
    vlSelf->__Vdlyvset__lru_array__v2 = 0U;
    vlSelf->__Vdlyvset__lru_array__v3 = 0U;
    vlSelf->__Vdlyvset__lru_array__v4 = 0U;
    vlSelf->__Vdlyvset__lru_array__v5 = 0U;
    vlSelf->__Vdlyvset__lru_array__v6 = 0U;
    vlSelf->__Vdlyvset__lru_array__v7 = 0U;
    vlSelf->__Vdlyvset__lru_array__v8 = 0U;
    vlSelf->__Vdlyvset__lru_array__v9 = 0U;
    vlSelf->__Vdlyvset__lru_array__v10 = 0U;
    vlSelf->__Vdlyvset__lru_array__v11 = 0U;
    vlSelf->__Vdlyvset__lru_array__v12 = 0U;
    vlSelf->__Vdlyvset__lru_array__v13 = 0U;
    vlSelf->__Vdlyvset__lru_array__v14 = 0U;
    vlSelf->__Vdlyvset__lru_array__v15 = 0U;
    vlSelf->__Vdlyvset__lru_array__v16 = 0U;
    vlSelf->__Vdlyvset__lru_array__v17 = 0U;
    vlSelf->__Vdlyvset__lru_array__v18 = 0U;
    vlSelf->__Vdlyvset__lru_array__v19 = 0U;
    vlSelf->__Vdlyvset__lru_array__v20 = 0U;
    vlSelf->__Vdlyvset__lru_array__v21 = 0U;
    vlSelf->__Vdlyvset__lru_array__v22 = 0U;
    vlSelf->__Vdlyvset__lru_array__v23 = 0U;
    vlSelf->__Vdlyvset__lru_array__v24 = 0U;
    vlSelf->__Vdlyvset__lru_array__v25 = 0U;
    vlSelf->__Vdlyvset__lru_array__v26 = 0U;
    vlSelf->__Vdlyvset__lru_array__v27 = 0U;
    vlSelf->__Vdlyvset__lru_array__v28 = 0U;
    vlSelf->__Vdlyvset__lru_array__v29 = 0U;
    vlSelf->__Vdlyvset__lru_array__v30 = 0U;
    vlSelf->__Vdlyvset__lru_array__v31 = 0U;
    vlSelf->__Vdlyvset__lru_array__v32 = 0U;
    vlSelf->__Vdlyvset__tag_array2__v32 = 0U;
    vlSelf->__Vdlyvset__tag_array__v32 = 0U;
    vlSelf->__Vdlyvset__tag_array__v33 = 0U;
    vlSelf->__Vdlyvset__tag_array__v0 = 0U;
    vlSelf->__Vdlyvset__tag_array__v1 = 0U;
    vlSelf->__Vdlyvset__tag_array__v2 = 0U;
    vlSelf->__Vdlyvset__tag_array__v3 = 0U;
    vlSelf->__Vdlyvset__tag_array__v4 = 0U;
    vlSelf->__Vdlyvset__tag_array__v5 = 0U;
    vlSelf->__Vdlyvset__tag_array__v6 = 0U;
    vlSelf->__Vdlyvset__tag_array__v7 = 0U;
    vlSelf->__Vdlyvset__tag_array__v8 = 0U;
    vlSelf->__Vdlyvset__tag_array__v9 = 0U;
    vlSelf->__Vdlyvset__tag_array__v10 = 0U;
    vlSelf->__Vdlyvset__tag_array__v11 = 0U;
    vlSelf->__Vdlyvset__tag_array__v12 = 0U;
    vlSelf->__Vdlyvset__tag_array__v13 = 0U;
    vlSelf->__Vdlyvset__tag_array__v14 = 0U;
    vlSelf->__Vdlyvset__tag_array__v15 = 0U;
    vlSelf->__Vdlyvset__tag_array__v16 = 0U;
    vlSelf->__Vdlyvset__tag_array__v17 = 0U;
    vlSelf->__Vdlyvset__tag_array__v18 = 0U;
    vlSelf->__Vdlyvset__tag_array__v19 = 0U;
    vlSelf->__Vdlyvset__tag_array__v20 = 0U;
    vlSelf->__Vdlyvset__tag_array__v21 = 0U;
    vlSelf->__Vdlyvset__tag_array__v22 = 0U;
    vlSelf->__Vdlyvset__tag_array__v23 = 0U;
    vlSelf->__Vdlyvset__tag_array__v24 = 0U;
    vlSelf->__Vdlyvset__tag_array__v25 = 0U;
    vlSelf->__Vdlyvset__tag_array__v26 = 0U;
    vlSelf->__Vdlyvset__tag_array__v27 = 0U;
    vlSelf->__Vdlyvset__tag_array__v28 = 0U;
    vlSelf->__Vdlyvset__tag_array__v29 = 0U;
    vlSelf->__Vdlyvset__tag_array__v30 = 0U;
    vlSelf->__Vdlyvset__tag_array__v31 = 0U;
    vlSelf->__Vdlyvset__data_array2__v33 = 0U;
    vlSelf->__Vdlyvset__data_array2__v34 = 0U;
    vlSelf->__Vdlyvset__data_array2__v35 = 0U;
    vlSelf->__Vdlyvset__data_array2__v36 = 0U;
    vlSelf->__Vdlyvset__data_array2__v37 = 0U;
    vlSelf->__Vdlyvset__data_array2__v38 = 0U;
    vlSelf->__Vdlyvset__data_array2__v39 = 0U;
    vlSelf->__Vdlyvset__data_array2__v40 = 0U;
    vlSelf->__Vdlyvset__data_array2__v41 = 0U;
    vlSelf->__Vdlyvset__data_array2__v42 = 0U;
    vlSelf->__Vdlyvset__data_array2__v43 = 0U;
    vlSelf->__Vdlyvset__data_array2__v44 = 0U;
    vlSelf->__Vdlyvset__data_array2__v45 = 0U;
    vlSelf->__Vdlyvset__data_array2__v46 = 0U;
    vlSelf->__Vdlyvset__data_array2__v47 = 0U;
    vlSelf->__Vdlyvset__data_array2__v48 = 0U;
    vlSelf->__Vdlyvset__data_array__v33 = 0U;
    vlSelf->__Vdlyvset__data_array__v34 = 0U;
    vlSelf->__Vdlyvset__data_array__v35 = 0U;
    vlSelf->__Vdlyvset__data_array__v36 = 0U;
    vlSelf->__Vdlyvset__data_array__v37 = 0U;
    vlSelf->__Vdlyvset__data_array__v38 = 0U;
    vlSelf->__Vdlyvset__data_array__v39 = 0U;
    vlSelf->__Vdlyvset__data_array__v40 = 0U;
    vlSelf->__Vdlyvset__data_array__v41 = 0U;
    vlSelf->__Vdlyvset__data_array__v42 = 0U;
    vlSelf->__Vdlyvset__data_array__v43 = 0U;
    vlSelf->__Vdlyvset__data_array__v44 = 0U;
    vlSelf->__Vdlyvset__data_array__v45 = 0U;
    vlSelf->__Vdlyvset__data_array__v46 = 0U;
    vlSelf->__Vdlyvset__data_array__v47 = 0U;
    vlSelf->__Vdlyvset__data_array__v48 = 0U;
    vlSelf->__Vdlyvset__dirty_array2__v33 = 0U;
    vlSelf->__Vdlyvset__dirty_array2__v34 = 0U;
    vlSelf->__Vdlyvset__dirty_array__v33 = 0U;
    vlSelf->__Vdlyvset__dirty_array__v34 = 0U;
    vlSelf->__Vdlyvset__dirty_array__v32 = 0U;
    vlSelf->__Vdlyvset__data_array__v0 = 0U;
    vlSelf->__Vdlyvset__data_array__v1 = 0U;
    vlSelf->__Vdlyvset__data_array__v2 = 0U;
    vlSelf->__Vdlyvset__data_array__v3 = 0U;
    vlSelf->__Vdlyvset__data_array__v4 = 0U;
    vlSelf->__Vdlyvset__data_array__v5 = 0U;
    vlSelf->__Vdlyvset__data_array__v6 = 0U;
    vlSelf->__Vdlyvset__data_array__v7 = 0U;
    vlSelf->__Vdlyvset__data_array__v8 = 0U;
    vlSelf->__Vdlyvset__data_array__v9 = 0U;
    vlSelf->__Vdlyvset__data_array__v10 = 0U;
    vlSelf->__Vdlyvset__data_array__v11 = 0U;
    vlSelf->__Vdlyvset__data_array__v12 = 0U;
    vlSelf->__Vdlyvset__data_array__v13 = 0U;
    vlSelf->__Vdlyvset__data_array__v14 = 0U;
    vlSelf->__Vdlyvset__data_array__v15 = 0U;
    vlSelf->__Vdlyvset__data_array__v16 = 0U;
    vlSelf->__Vdlyvset__data_array__v17 = 0U;
    vlSelf->__Vdlyvset__data_array__v18 = 0U;
    vlSelf->__Vdlyvset__data_array__v19 = 0U;
    vlSelf->__Vdlyvset__data_array__v20 = 0U;
    vlSelf->__Vdlyvset__data_array__v21 = 0U;
    vlSelf->__Vdlyvset__data_array__v22 = 0U;
    vlSelf->__Vdlyvset__data_array__v23 = 0U;
    vlSelf->__Vdlyvset__data_array__v24 = 0U;
    vlSelf->__Vdlyvset__data_array__v25 = 0U;
    vlSelf->__Vdlyvset__data_array__v26 = 0U;
    vlSelf->__Vdlyvset__data_array__v27 = 0U;
    vlSelf->__Vdlyvset__data_array__v28 = 0U;
    vlSelf->__Vdlyvset__data_array__v29 = 0U;
    vlSelf->__Vdlyvset__data_array__v30 = 0U;
    vlSelf->__Vdlyvset__data_array__v31 = 0U;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__refill_resp_counter = 0U;
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__refill_resp_counter = vlSelf->__PVT__refill_resp_counter;
        if (vlSelf->__PVT__refill_one_word_resp_received) {
            vlSelf->__Vdly__refill_resp_counter = (0x1fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->__PVT__refill_resp_counter)));
            vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__refill_resp_done) {
            vlSelf->__Vdly__refill_resp_counter = 0U;
            vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        VL_CONST_W_1X(512,vlSelf->__Vdly__refill_data,0x00000000);
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_ASSIGN_W(512,vlSelf->__Vdly__refill_data, vlSelf->__PVT__refill_data);
        if (((0U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
             & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        } else if (((1U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x20U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        } else if (((2U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x40U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        } else if (((3U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x60U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        } else if (((4U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x80U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        } else if (((5U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0xa0U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        } else if (((6U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0xc0U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        } else if (((7U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0xe0U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        } else if (((8U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x100U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        } else if (((9U == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x120U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        } else if (((0xaU == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x140U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        } else if (((0xbU == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x160U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        } else if (((0xcU == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x180U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        } else if (((0xdU == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x1a0U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        } else if (((0xeU == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x1c0U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        } else if (((0xfU == (IData)(vlSelf->__PVT__refill_resp_counter)) 
                    & (IData)(vlSelf->__PVT__refill_one_word_resp_received))) {
            VL_ASSIGNSEL_WI(512,32,0x1e0U, vlSelf->__Vdly__refill_data, vlSelf->__PVT__cache_resp_msg_data);
            vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__refill_req_counter = 0U;
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__refill_req_counter = vlSelf->__PVT__refill_req_counter;
        if (vlSelf->__PVT__refill_one_word_req_sent) {
            vlSelf->__Vdly__refill_req_counter = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__refill_req_counter)));
            vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__refill_resp_done) {
            vlSelf->__Vdly__refill_req_counter = 0U;
            vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__spill_counter = 0U;
        vlSelf->__Vdly__flush_counter = 0U;
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__spill_counter = vlSelf->__PVT__spill_counter;
        vlSelf->__Vdly__flush_counter = vlSelf->__PVT__flush_counter;
        if (vlSelf->__PVT__spill_one_word_done) {
            vlSelf->__Vdly__spill_counter = (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__spill_counter)));
            vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__spill_done) {
            vlSelf->__Vdly__spill_counter = 0U;
            vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        }
        if ((((IData)(vlSelf->__PVT__flush) & (IData)(vlSelf->__PVT__spill_done)) 
             & (~ (IData)(vlSelf->__PVT__flush_done)))) {
            vlSelf->__Vdly__flush_counter = (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__flush_counter)));
            vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->__PVT__flush) {
            vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__Vdly__flush_counter = 0U;
            vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdlyvset__lru_array__v0 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 1U;
        vlSelf->__Vdlyvset__lru_array__v1 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 2U;
        vlSelf->__Vdlyvset__lru_array__v2 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 3U;
        vlSelf->__Vdlyvset__lru_array__v3 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 4U;
        vlSelf->__Vdlyvset__lru_array__v4 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 5U;
        vlSelf->__Vdlyvset__lru_array__v5 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 6U;
        vlSelf->__Vdlyvset__lru_array__v6 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 7U;
        vlSelf->__Vdlyvset__lru_array__v7 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 8U;
        vlSelf->__Vdlyvset__lru_array__v8 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 9U;
        vlSelf->__Vdlyvset__lru_array__v9 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0xaU;
        vlSelf->__Vdlyvset__lru_array__v10 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0xbU;
        vlSelf->__Vdlyvset__lru_array__v11 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0xcU;
        vlSelf->__Vdlyvset__lru_array__v12 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0xdU;
        vlSelf->__Vdlyvset__lru_array__v13 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0xeU;
        vlSelf->__Vdlyvset__lru_array__v14 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0xfU;
        vlSelf->__Vdlyvset__lru_array__v15 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x10U;
        vlSelf->__Vdlyvset__lru_array__v16 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x11U;
        vlSelf->__Vdlyvset__lru_array__v17 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x12U;
        vlSelf->__Vdlyvset__lru_array__v18 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x13U;
        vlSelf->__Vdlyvset__lru_array__v19 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x14U;
        vlSelf->__Vdlyvset__lru_array__v20 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x15U;
        vlSelf->__Vdlyvset__lru_array__v21 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x16U;
        vlSelf->__Vdlyvset__lru_array__v22 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x17U;
        vlSelf->__Vdlyvset__lru_array__v23 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x18U;
        vlSelf->__Vdlyvset__lru_array__v24 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x19U;
        vlSelf->__Vdlyvset__lru_array__v25 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x1aU;
        vlSelf->__Vdlyvset__lru_array__v26 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x1bU;
        vlSelf->__Vdlyvset__lru_array__v27 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x1cU;
        vlSelf->__Vdlyvset__lru_array__v28 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x1dU;
        vlSelf->__Vdlyvset__lru_array__v29 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x1eU;
        vlSelf->__Vdlyvset__lru_array__v30 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x1fU;
        vlSelf->__Vdlyvset__lru_array__v31 = 1U;
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk2__DOT__i = 0x20U;
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdlyvval__lru_array__v32 = vlSelf->__PVT__current_lru;
        vlSelf->__Vdlyvset__lru_array__v32 = 1U;
        vlSelf->__Vdlyvdim0__lru_array__v32 = vlSelf->__PVT__index_M0;
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdlyvset__tag_array__v0 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 1U;
        vlSelf->__Vdlyvset__tag_array__v1 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 2U;
        vlSelf->__Vdlyvset__tag_array__v2 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 3U;
        vlSelf->__Vdlyvset__tag_array__v3 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 4U;
        vlSelf->__Vdlyvset__tag_array__v4 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 5U;
        vlSelf->__Vdlyvset__tag_array__v5 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 6U;
        vlSelf->__Vdlyvset__tag_array__v6 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 7U;
        vlSelf->__Vdlyvset__tag_array__v7 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 8U;
        vlSelf->__Vdlyvset__tag_array__v8 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 9U;
        vlSelf->__Vdlyvset__tag_array__v9 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0xaU;
        vlSelf->__Vdlyvset__tag_array__v10 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0xbU;
        vlSelf->__Vdlyvset__tag_array__v11 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0xcU;
        vlSelf->__Vdlyvset__tag_array__v12 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0xdU;
        vlSelf->__Vdlyvset__tag_array__v13 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0xeU;
        vlSelf->__Vdlyvset__tag_array__v14 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0xfU;
        vlSelf->__Vdlyvset__tag_array__v15 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x10U;
        vlSelf->__Vdlyvset__tag_array__v16 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x11U;
        vlSelf->__Vdlyvset__tag_array__v17 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x12U;
        vlSelf->__Vdlyvset__tag_array__v18 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x13U;
        vlSelf->__Vdlyvset__tag_array__v19 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x14U;
        vlSelf->__Vdlyvset__tag_array__v20 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x15U;
        vlSelf->__Vdlyvset__tag_array__v21 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x16U;
        vlSelf->__Vdlyvset__tag_array__v22 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x17U;
        vlSelf->__Vdlyvset__tag_array__v23 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSelf->__Vdlyvset__tag_array__v24 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x19U;
        vlSelf->__Vdlyvset__tag_array__v25 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x1aU;
        vlSelf->__Vdlyvset__tag_array__v26 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x1bU;
        vlSelf->__Vdlyvset__tag_array__v27 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x1cU;
        vlSelf->__Vdlyvset__tag_array__v28 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x1dU;
        vlSelf->__Vdlyvset__tag_array__v29 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x1eU;
        vlSelf->__Vdlyvset__tag_array__v30 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x1fU;
        vlSelf->__Vdlyvset__tag_array__v31 = 1U;
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk1__DOT__i = 0x20U;
        vlSymsp->__Vcoverage[707].fetch_add(1, std::memory_order_relaxed);
    } else {
        if (vlSelf->__PVT__tarray_wen) {
            vlSelf->__Vdlyvval__tag_array__v32 = vlSelf->__PVT__current_tag;
            vlSelf->__Vdlyvset__tag_array__v32 = 1U;
            vlSelf->__Vdlyvdim0__tag_array__v32 = vlSelf->__PVT__index_M0;
            vlSelf->__Vdlyvdim0__valid_array__v32 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[706].fetch_add(1, std::memory_order_relaxed);
        } else if (vlSelf->__PVT__tarray_wen2) {
            vlSelf->__Vdlyvval__tag_array2__v32 = vlSelf->__PVT__current_tag;
            vlSelf->__Vdlyvset__tag_array2__v32 = 1U;
            vlSelf->__Vdlyvdim0__tag_array2__v32 = vlSelf->__PVT__index_M0;
            vlSelf->__Vdlyvdim0__valid_array2__v32 
                = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[704].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__Vdlyvval__tag_array__v33 = vlSelf->__PVT__tag_array
                [vlSelf->__PVT__index_M0];
            vlSelf->__Vdlyvset__tag_array__v33 = 1U;
            vlSelf->__Vdlyvdim0__tag_array__v33 = vlSelf->__PVT__index_M0;
            vlSelf->__Vdlyvval__valid_array__v33 = 
                vlSelf->__PVT__valid_array[vlSelf->__PVT__index_M0];
            vlSelf->__Vdlyvdim0__valid_array__v33 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[705].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[708].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[709].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdlyvset__data_array__v0 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 1U;
        vlSelf->__Vdlyvset__data_array__v1 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 2U;
        vlSelf->__Vdlyvset__data_array__v2 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 3U;
        vlSelf->__Vdlyvset__data_array__v3 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 4U;
        vlSelf->__Vdlyvset__data_array__v4 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 5U;
        vlSelf->__Vdlyvset__data_array__v5 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 6U;
        vlSelf->__Vdlyvset__data_array__v6 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 7U;
        vlSelf->__Vdlyvset__data_array__v7 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 8U;
        vlSelf->__Vdlyvset__data_array__v8 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 9U;
        vlSelf->__Vdlyvset__data_array__v9 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0xaU;
        vlSelf->__Vdlyvset__data_array__v10 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0xbU;
        vlSelf->__Vdlyvset__data_array__v11 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0xcU;
        vlSelf->__Vdlyvset__data_array__v12 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0xdU;
        vlSelf->__Vdlyvset__data_array__v13 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0xeU;
        vlSelf->__Vdlyvset__data_array__v14 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0xfU;
        vlSelf->__Vdlyvset__data_array__v15 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x10U;
        vlSelf->__Vdlyvset__data_array__v16 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x11U;
        vlSelf->__Vdlyvset__data_array__v17 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x12U;
        vlSelf->__Vdlyvset__data_array__v18 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x13U;
        vlSelf->__Vdlyvset__data_array__v19 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x14U;
        vlSelf->__Vdlyvset__data_array__v20 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x15U;
        vlSelf->__Vdlyvset__data_array__v21 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x16U;
        vlSelf->__Vdlyvset__data_array__v22 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x17U;
        vlSelf->__Vdlyvset__data_array__v23 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x18U;
        vlSelf->__Vdlyvset__data_array__v24 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x19U;
        vlSelf->__Vdlyvset__data_array__v25 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x1aU;
        vlSelf->__Vdlyvset__data_array__v26 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x1bU;
        vlSelf->__Vdlyvset__data_array__v27 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x1cU;
        vlSelf->__Vdlyvset__data_array__v28 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x1dU;
        vlSelf->__Vdlyvset__data_array__v29 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x1eU;
        vlSelf->__Vdlyvset__data_array__v30 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x1fU;
        vlSelf->__Vdlyvset__data_array__v31 = 1U;
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__PVT__unnamedblk3__DOT__i = 0x20U;
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdlyvval__dirty_array__v32 = vlSelf->__PVT__dirty_array
            [vlSelf->__PVT__index_M0];
        vlSelf->__Vdlyvset__dirty_array__v32 = 1U;
        vlSelf->__Vdlyvdim0__dirty_array__v32 = vlSelf->__PVT__index_M0;
        vlSelf->__Vdlyvval__dirty_array2__v32 = vlSelf->__PVT__dirty_array2
            [vlSelf->__PVT__index_M0];
        vlSelf->__Vdlyvdim0__dirty_array2__v32 = vlSelf->__PVT__index_M0;
        VL_ASSIGN_W(512,__Vtemp_1, vlSelf->__PVT__data_array
                    [vlSelf->__PVT__index_M0]);
        VL_ASSIGN_W(512,vlSelf->__Vdlyvval__data_array__v32, __Vtemp_1);
        vlSelf->__Vdlyvdim0__data_array__v32 = vlSelf->__PVT__index_M0;
        VL_ASSIGN_W(512,__Vtemp_2, vlSelf->__PVT__data_array2
                    [vlSelf->__PVT__index_M0]);
        VL_ASSIGN_W(512,vlSelf->__Vdlyvval__data_array2__v32, __Vtemp_2);
        vlSelf->__Vdlyvdim0__data_array2__v32 = vlSelf->__PVT__index_M0;
        if (((IData)(vlSelf->__PVT__darray_wen) & (IData)(vlSelf->__PVT__tarray_match))) {
            vlSelf->__Vdlyvset__dirty_array__v33 = 1U;
            vlSelf->__Vdlyvdim0__dirty_array__v33 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        } else if (((IData)(vlSelf->__PVT__darray_wen2) 
                    & (IData)(vlSelf->__PVT__tarray_match))) {
            vlSelf->__Vdlyvset__dirty_array2__v33 = 1U;
            vlSelf->__Vdlyvdim0__dirty_array2__v33 
                = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        }
        if ((((IData)(vlSelf->__PVT__flush) & (IData)(vlSelf->__PVT__spill_done)) 
             & (IData)(vlSelf->__PVT__current_lru))) {
            vlSelf->__Vdlyvset__dirty_array__v34 = 1U;
            vlSelf->__Vdlyvdim0__dirty_array__v34 = vlSelf->__PVT__index_spill;
            vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        }
        if ((((IData)(vlSelf->__PVT__flush) & (IData)(vlSelf->__PVT__spill_done)) 
             & (~ (IData)(vlSelf->__PVT__current_lru)))) {
            vlSelf->__Vdlyvset__dirty_array2__v34 = 1U;
            vlSelf->__Vdlyvdim0__dirty_array2__v34 
                = vlSelf->__PVT__index_spill;
            vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v33 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v33 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v33 = 0U;
            vlSelf->__Vdlyvdim0__data_array__v33 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v33 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v33 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v33 = 0U;
            vlSelf->__Vdlyvdim0__data_array2__v33 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 1U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v34 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x20U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v34 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v34 = 0x20U;
            vlSelf->__Vdlyvdim0__data_array__v34 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 1U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v34 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x20U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v34 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v34 = 0x20U;
            vlSelf->__Vdlyvdim0__data_array2__v34 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 2U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v35 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x40U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v35 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v35 = 0x40U;
            vlSelf->__Vdlyvdim0__data_array__v35 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 2U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v35 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x40U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v35 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v35 = 0x40U;
            vlSelf->__Vdlyvdim0__data_array2__v35 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 3U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v36 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x60U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v36 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v36 = 0x60U;
            vlSelf->__Vdlyvdim0__data_array__v36 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 3U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v36 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x60U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v36 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v36 = 0x60U;
            vlSelf->__Vdlyvdim0__data_array2__v36 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 4U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v37 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x80U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v37 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v37 = 0x80U;
            vlSelf->__Vdlyvdim0__data_array__v37 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 4U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v37 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x80U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v37 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v37 = 0x80U;
            vlSelf->__Vdlyvdim0__data_array2__v37 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 5U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v38 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0xa0U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v38 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v38 = 0xa0U;
            vlSelf->__Vdlyvdim0__data_array__v38 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 5U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v38 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0xa0U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v38 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v38 = 0xa0U;
            vlSelf->__Vdlyvdim0__data_array2__v38 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 6U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v39 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0xc0U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v39 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v39 = 0xc0U;
            vlSelf->__Vdlyvdim0__data_array__v39 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 6U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v39 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0xc0U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v39 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v39 = 0xc0U;
            vlSelf->__Vdlyvdim0__data_array2__v39 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 7U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v40 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0xe0U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v40 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v40 = 0xe0U;
            vlSelf->__Vdlyvdim0__data_array__v40 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 7U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v40 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0xe0U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v40 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v40 = 0xe0U;
            vlSelf->__Vdlyvdim0__data_array2__v40 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 8U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v41 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x100U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v41 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v41 = 0x100U;
            vlSelf->__Vdlyvdim0__data_array__v41 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 8U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v41 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x100U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v41 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v41 = 0x100U;
            vlSelf->__Vdlyvdim0__data_array2__v41 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 9U) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v42 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x120U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v42 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v42 = 0x120U;
            vlSelf->__Vdlyvdim0__data_array__v42 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 9U) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v42 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x120U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v42 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v42 = 0x120U;
            vlSelf->__Vdlyvdim0__data_array2__v42 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xaU) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v43 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x140U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v43 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v43 = 0x140U;
            vlSelf->__Vdlyvdim0__data_array__v43 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xaU) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v43 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x140U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v43 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v43 = 0x140U;
            vlSelf->__Vdlyvdim0__data_array2__v43 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xbU) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v44 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x160U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v44 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v44 = 0x160U;
            vlSelf->__Vdlyvdim0__data_array__v44 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xbU) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v44 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x160U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v44 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v44 = 0x160U;
            vlSelf->__Vdlyvdim0__data_array2__v44 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xcU) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v45 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x180U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v45 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v45 = 0x180U;
            vlSelf->__Vdlyvdim0__data_array__v45 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xcU) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v45 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x180U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v45 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v45 = 0x180U;
            vlSelf->__Vdlyvdim0__data_array2__v45 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xdU) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v46 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x1a0U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v46 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v46 = 0x1a0U;
            vlSelf->__Vdlyvdim0__data_array__v46 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xdU) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v46 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x1a0U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v46 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v46 = 0x1a0U;
            vlSelf->__Vdlyvdim0__data_array2__v46 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xeU) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v47 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x1c0U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v47 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v47 = 0x1c0U;
            vlSelf->__Vdlyvdim0__data_array__v47 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xeU) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v47 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x1c0U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v47 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v47 = 0x1c0U;
            vlSelf->__Vdlyvdim0__data_array2__v47 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        }
        if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xfU) 
             & (IData)(vlSelf->__PVT__darray_wen))) {
            vlSelf->__Vdlyvval__data_array__v48 = VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x1e0U, 0x20U);
            vlSelf->__Vdlyvset__data_array__v48 = 1U;
            vlSelf->__Vdlyvlsb__data_array__v48 = 0x1e0U;
            vlSelf->__Vdlyvdim0__data_array__v48 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        } else if ((VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__write_word_enable), 0xfU) 
                    & (IData)(vlSelf->__PVT__darray_wen2))) {
            vlSelf->__Vdlyvval__data_array2__v48 = 
                VL_SEL_IWII(512, vlSelf->__PVT__write_data, 0x1e0U, 0x20U);
            vlSelf->__Vdlyvset__data_array2__v48 = 1U;
            vlSelf->__Vdlyvlsb__data_array2__v48 = 0x1e0U;
            vlSelf->__Vdlyvdim0__data_array2__v48 = vlSelf->__PVT__index_M0;
            vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
    VL_ASSIGN_W(512,vlSelf->__PVT__refill_data, vlSelf->__Vdly__refill_data);
    vlSelf->__PVT__refill_resp_counter = vlSelf->__Vdly__refill_resp_counter;
    vlSelf->__PVT__refill_req_counter = vlSelf->__Vdly__refill_req_counter;
    vlSelf->__PVT__spill_counter = vlSelf->__Vdly__spill_counter;
    vlSelf->__PVT__flush_counter = vlSelf->__Vdly__flush_counter;
    if (vlSelf->__Vdlyvset__lru_array__v0) {
        vlSelf->__PVT__lru_array[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v1) {
        vlSelf->__PVT__lru_array[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v2) {
        vlSelf->__PVT__lru_array[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v3) {
        vlSelf->__PVT__lru_array[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v4) {
        vlSelf->__PVT__lru_array[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v5) {
        vlSelf->__PVT__lru_array[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v6) {
        vlSelf->__PVT__lru_array[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v7) {
        vlSelf->__PVT__lru_array[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v8) {
        vlSelf->__PVT__lru_array[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v9) {
        vlSelf->__PVT__lru_array[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v10) {
        vlSelf->__PVT__lru_array[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v11) {
        vlSelf->__PVT__lru_array[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v12) {
        vlSelf->__PVT__lru_array[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v13) {
        vlSelf->__PVT__lru_array[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v14) {
        vlSelf->__PVT__lru_array[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v15) {
        vlSelf->__PVT__lru_array[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v16) {
        vlSelf->__PVT__lru_array[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v17) {
        vlSelf->__PVT__lru_array[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v18) {
        vlSelf->__PVT__lru_array[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v19) {
        vlSelf->__PVT__lru_array[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v20) {
        vlSelf->__PVT__lru_array[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v21) {
        vlSelf->__PVT__lru_array[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v22) {
        vlSelf->__PVT__lru_array[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v23) {
        vlSelf->__PVT__lru_array[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v24) {
        vlSelf->__PVT__lru_array[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v25) {
        vlSelf->__PVT__lru_array[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v26) {
        vlSelf->__PVT__lru_array[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v27) {
        vlSelf->__PVT__lru_array[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v28) {
        vlSelf->__PVT__lru_array[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v29) {
        vlSelf->__PVT__lru_array[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v30) {
        vlSelf->__PVT__lru_array[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v31) {
        vlSelf->__PVT__lru_array[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__lru_array__v32) {
        vlSelf->__PVT__lru_array[vlSelf->__Vdlyvdim0__lru_array__v32] 
            = vlSelf->__Vdlyvval__lru_array__v32;
    }
    if (vlSelf->__Vdlyvset__tag_array__v0) {
        vlSelf->__PVT__valid_array2[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v1) {
        vlSelf->__PVT__valid_array2[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v2) {
        vlSelf->__PVT__valid_array2[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v3) {
        vlSelf->__PVT__valid_array2[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v4) {
        vlSelf->__PVT__valid_array2[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v5) {
        vlSelf->__PVT__valid_array2[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v6) {
        vlSelf->__PVT__valid_array2[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v7) {
        vlSelf->__PVT__valid_array2[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v8) {
        vlSelf->__PVT__valid_array2[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v9) {
        vlSelf->__PVT__valid_array2[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v10) {
        vlSelf->__PVT__valid_array2[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v11) {
        vlSelf->__PVT__valid_array2[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v12) {
        vlSelf->__PVT__valid_array2[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v13) {
        vlSelf->__PVT__valid_array2[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v14) {
        vlSelf->__PVT__valid_array2[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v15) {
        vlSelf->__PVT__valid_array2[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v16) {
        vlSelf->__PVT__valid_array2[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v17) {
        vlSelf->__PVT__valid_array2[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v18) {
        vlSelf->__PVT__valid_array2[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v19) {
        vlSelf->__PVT__valid_array2[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v20) {
        vlSelf->__PVT__valid_array2[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v21) {
        vlSelf->__PVT__valid_array2[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v22) {
        vlSelf->__PVT__valid_array2[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v23) {
        vlSelf->__PVT__valid_array2[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v24) {
        vlSelf->__PVT__valid_array2[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v25) {
        vlSelf->__PVT__valid_array2[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v26) {
        vlSelf->__PVT__valid_array2[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v27) {
        vlSelf->__PVT__valid_array2[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v28) {
        vlSelf->__PVT__valid_array2[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v29) {
        vlSelf->__PVT__valid_array2[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v30) {
        vlSelf->__PVT__valid_array2[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v31) {
        vlSelf->__PVT__valid_array2[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array2__v32) {
        vlSelf->__PVT__valid_array2[vlSelf->__Vdlyvdim0__valid_array2__v32] = 1U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v0) {
        vlSelf->__PVT__valid_array[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v1) {
        vlSelf->__PVT__valid_array[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v2) {
        vlSelf->__PVT__valid_array[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v3) {
        vlSelf->__PVT__valid_array[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v4) {
        vlSelf->__PVT__valid_array[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v5) {
        vlSelf->__PVT__valid_array[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v6) {
        vlSelf->__PVT__valid_array[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v7) {
        vlSelf->__PVT__valid_array[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v8) {
        vlSelf->__PVT__valid_array[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v9) {
        vlSelf->__PVT__valid_array[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v10) {
        vlSelf->__PVT__valid_array[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v11) {
        vlSelf->__PVT__valid_array[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v12) {
        vlSelf->__PVT__valid_array[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v13) {
        vlSelf->__PVT__valid_array[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v14) {
        vlSelf->__PVT__valid_array[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v15) {
        vlSelf->__PVT__valid_array[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v16) {
        vlSelf->__PVT__valid_array[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v17) {
        vlSelf->__PVT__valid_array[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v18) {
        vlSelf->__PVT__valid_array[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v19) {
        vlSelf->__PVT__valid_array[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v20) {
        vlSelf->__PVT__valid_array[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v21) {
        vlSelf->__PVT__valid_array[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v22) {
        vlSelf->__PVT__valid_array[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v23) {
        vlSelf->__PVT__valid_array[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v24) {
        vlSelf->__PVT__valid_array[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v25) {
        vlSelf->__PVT__valid_array[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v26) {
        vlSelf->__PVT__valid_array[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v27) {
        vlSelf->__PVT__valid_array[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v28) {
        vlSelf->__PVT__valid_array[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v29) {
        vlSelf->__PVT__valid_array[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v30) {
        vlSelf->__PVT__valid_array[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v31) {
        vlSelf->__PVT__valid_array[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v32) {
        vlSelf->__PVT__valid_array[vlSelf->__Vdlyvdim0__valid_array__v32] = 1U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v33) {
        vlSelf->__PVT__valid_array[vlSelf->__Vdlyvdim0__valid_array__v33] 
            = vlSelf->__Vdlyvval__valid_array__v33;
    }
    if (vlSelf->__Vdlyvset__tag_array__v0) {
        vlSelf->__PVT__tag_array2[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v1) {
        vlSelf->__PVT__tag_array2[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v2) {
        vlSelf->__PVT__tag_array2[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v3) {
        vlSelf->__PVT__tag_array2[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v4) {
        vlSelf->__PVT__tag_array2[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v5) {
        vlSelf->__PVT__tag_array2[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v6) {
        vlSelf->__PVT__tag_array2[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v7) {
        vlSelf->__PVT__tag_array2[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v8) {
        vlSelf->__PVT__tag_array2[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v9) {
        vlSelf->__PVT__tag_array2[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v10) {
        vlSelf->__PVT__tag_array2[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v11) {
        vlSelf->__PVT__tag_array2[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v12) {
        vlSelf->__PVT__tag_array2[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v13) {
        vlSelf->__PVT__tag_array2[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v14) {
        vlSelf->__PVT__tag_array2[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v15) {
        vlSelf->__PVT__tag_array2[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v16) {
        vlSelf->__PVT__tag_array2[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v17) {
        vlSelf->__PVT__tag_array2[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v18) {
        vlSelf->__PVT__tag_array2[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v19) {
        vlSelf->__PVT__tag_array2[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v20) {
        vlSelf->__PVT__tag_array2[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v21) {
        vlSelf->__PVT__tag_array2[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v22) {
        vlSelf->__PVT__tag_array2[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v23) {
        vlSelf->__PVT__tag_array2[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v24) {
        vlSelf->__PVT__tag_array2[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v25) {
        vlSelf->__PVT__tag_array2[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v26) {
        vlSelf->__PVT__tag_array2[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v27) {
        vlSelf->__PVT__tag_array2[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v28) {
        vlSelf->__PVT__tag_array2[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v29) {
        vlSelf->__PVT__tag_array2[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v30) {
        vlSelf->__PVT__tag_array2[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v31) {
        vlSelf->__PVT__tag_array2[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array2__v32) {
        vlSelf->__PVT__tag_array2[vlSelf->__Vdlyvdim0__tag_array2__v32] 
            = vlSelf->__Vdlyvval__tag_array2__v32;
    }
    if (vlSelf->__Vdlyvset__tag_array__v0) {
        vlSelf->__PVT__tag_array[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v1) {
        vlSelf->__PVT__tag_array[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v2) {
        vlSelf->__PVT__tag_array[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v3) {
        vlSelf->__PVT__tag_array[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v4) {
        vlSelf->__PVT__tag_array[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v5) {
        vlSelf->__PVT__tag_array[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v6) {
        vlSelf->__PVT__tag_array[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v7) {
        vlSelf->__PVT__tag_array[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v8) {
        vlSelf->__PVT__tag_array[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v9) {
        vlSelf->__PVT__tag_array[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v10) {
        vlSelf->__PVT__tag_array[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v11) {
        vlSelf->__PVT__tag_array[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v12) {
        vlSelf->__PVT__tag_array[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v13) {
        vlSelf->__PVT__tag_array[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v14) {
        vlSelf->__PVT__tag_array[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v15) {
        vlSelf->__PVT__tag_array[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v16) {
        vlSelf->__PVT__tag_array[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v17) {
        vlSelf->__PVT__tag_array[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v18) {
        vlSelf->__PVT__tag_array[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v19) {
        vlSelf->__PVT__tag_array[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v20) {
        vlSelf->__PVT__tag_array[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v21) {
        vlSelf->__PVT__tag_array[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v22) {
        vlSelf->__PVT__tag_array[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v23) {
        vlSelf->__PVT__tag_array[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v24) {
        vlSelf->__PVT__tag_array[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v25) {
        vlSelf->__PVT__tag_array[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v26) {
        vlSelf->__PVT__tag_array[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v27) {
        vlSelf->__PVT__tag_array[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v28) {
        vlSelf->__PVT__tag_array[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v29) {
        vlSelf->__PVT__tag_array[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v30) {
        vlSelf->__PVT__tag_array[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v31) {
        vlSelf->__PVT__tag_array[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__tag_array__v32) {
        vlSelf->__PVT__tag_array[vlSelf->__Vdlyvdim0__tag_array__v32] 
            = vlSelf->__Vdlyvval__tag_array__v32;
    }
    if (vlSelf->__Vdlyvset__tag_array__v33) {
        vlSelf->__PVT__tag_array[vlSelf->__Vdlyvdim0__tag_array__v33] 
            = vlSelf->__Vdlyvval__tag_array__v33;
    }
    if (vlSelf->__Vdlyvset__data_array__v0) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v1) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[1U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v2) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[2U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v3) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[3U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v4) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[4U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v5) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[5U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v6) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[6U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v7) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[7U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v8) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[8U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v9) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[9U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v10) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0xaU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v11) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0xbU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v12) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0xcU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v13) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0xdU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v14) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0xeU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v15) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0xfU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v16) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x10U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v17) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x11U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v18) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x12U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v19) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x13U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v20) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x14U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v21) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x15U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v22) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x16U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v23) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x17U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v24) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x18U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v25) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x19U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v26) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x1aU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v27) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x1bU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v28) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x1cU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v29) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x1dU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v30) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x1eU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v31) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[0x1fU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__dirty_array__v32) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v32], vlSelf->__Vdlyvval__data_array2__v32);
    }
    if (vlSelf->__Vdlyvset__data_array2__v33) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v33), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v33], vlSelf->__Vdlyvval__data_array2__v33);
    }
    if (vlSelf->__Vdlyvset__data_array2__v34) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v34), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v34], vlSelf->__Vdlyvval__data_array2__v34);
    }
    if (vlSelf->__Vdlyvset__data_array2__v35) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v35), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v35], vlSelf->__Vdlyvval__data_array2__v35);
    }
    if (vlSelf->__Vdlyvset__data_array2__v36) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v36), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v36], vlSelf->__Vdlyvval__data_array2__v36);
    }
    if (vlSelf->__Vdlyvset__data_array2__v37) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v37), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v37], vlSelf->__Vdlyvval__data_array2__v37);
    }
    if (vlSelf->__Vdlyvset__data_array2__v38) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v38), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v38], vlSelf->__Vdlyvval__data_array2__v38);
    }
    if (vlSelf->__Vdlyvset__data_array2__v39) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v39), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v39], vlSelf->__Vdlyvval__data_array2__v39);
    }
    if (vlSelf->__Vdlyvset__data_array2__v40) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v40), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v40], vlSelf->__Vdlyvval__data_array2__v40);
    }
    if (vlSelf->__Vdlyvset__data_array2__v41) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v41), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v41], vlSelf->__Vdlyvval__data_array2__v41);
    }
    if (vlSelf->__Vdlyvset__data_array2__v42) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v42), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v42], vlSelf->__Vdlyvval__data_array2__v42);
    }
    if (vlSelf->__Vdlyvset__data_array2__v43) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v43), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v43], vlSelf->__Vdlyvval__data_array2__v43);
    }
    if (vlSelf->__Vdlyvset__data_array2__v44) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v44), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v44], vlSelf->__Vdlyvval__data_array2__v44);
    }
    if (vlSelf->__Vdlyvset__data_array2__v45) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v45), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v45], vlSelf->__Vdlyvval__data_array2__v45);
    }
    if (vlSelf->__Vdlyvset__data_array2__v46) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v46), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v46], vlSelf->__Vdlyvval__data_array2__v46);
    }
    if (vlSelf->__Vdlyvset__data_array2__v47) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v47), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v47], vlSelf->__Vdlyvval__data_array2__v47);
    }
    if (vlSelf->__Vdlyvset__data_array2__v48) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array2__v48), 
                        vlSelf->__PVT__data_array2[vlSelf->__Vdlyvdim0__data_array2__v48], vlSelf->__Vdlyvval__data_array2__v48);
    }
    if (vlSelf->__Vdlyvset__data_array__v0) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v1) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[1U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v2) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[2U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v3) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[3U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v4) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[4U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v5) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[5U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v6) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[6U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v7) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[7U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v8) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[8U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v9) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[9U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v10) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0xaU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v11) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0xbU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v12) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0xcU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v13) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0xdU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v14) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0xeU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v15) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0xfU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v16) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x10U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v17) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x11U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v18) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x12U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v19) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x13U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v20) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x14U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v21) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x15U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v22) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x16U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v23) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x17U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v24) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x18U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v25) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x19U], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v26) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x1aU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v27) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x1bU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v28) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x1cU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v29) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x1dU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v30) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x1eU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__data_array__v31) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[0x1fU], Vtop__ConstPool__CONST_h93e1b771_0);
    }
    if (vlSelf->__Vdlyvset__dirty_array__v32) {
        VL_ASSIGN_W(512,vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v32], vlSelf->__Vdlyvval__data_array__v32);
    }
    if (vlSelf->__Vdlyvset__data_array__v33) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v33), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v33], vlSelf->__Vdlyvval__data_array__v33);
    }
    if (vlSelf->__Vdlyvset__data_array__v34) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v34), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v34], vlSelf->__Vdlyvval__data_array__v34);
    }
    if (vlSelf->__Vdlyvset__data_array__v35) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v35), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v35], vlSelf->__Vdlyvval__data_array__v35);
    }
    if (vlSelf->__Vdlyvset__data_array__v36) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v36), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v36], vlSelf->__Vdlyvval__data_array__v36);
    }
    if (vlSelf->__Vdlyvset__data_array__v37) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v37), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v37], vlSelf->__Vdlyvval__data_array__v37);
    }
    if (vlSelf->__Vdlyvset__data_array__v38) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v38), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v38], vlSelf->__Vdlyvval__data_array__v38);
    }
    if (vlSelf->__Vdlyvset__data_array__v39) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v39), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v39], vlSelf->__Vdlyvval__data_array__v39);
    }
    if (vlSelf->__Vdlyvset__data_array__v40) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v40), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v40], vlSelf->__Vdlyvval__data_array__v40);
    }
    if (vlSelf->__Vdlyvset__data_array__v41) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v41), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v41], vlSelf->__Vdlyvval__data_array__v41);
    }
    if (vlSelf->__Vdlyvset__data_array__v42) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v42), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v42], vlSelf->__Vdlyvval__data_array__v42);
    }
    if (vlSelf->__Vdlyvset__data_array__v43) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v43), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v43], vlSelf->__Vdlyvval__data_array__v43);
    }
    if (vlSelf->__Vdlyvset__data_array__v44) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v44), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v44], vlSelf->__Vdlyvval__data_array__v44);
    }
    if (vlSelf->__Vdlyvset__data_array__v45) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v45), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v45], vlSelf->__Vdlyvval__data_array__v45);
    }
    if (vlSelf->__Vdlyvset__data_array__v46) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v46), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v46], vlSelf->__Vdlyvval__data_array__v46);
    }
    if (vlSelf->__Vdlyvset__data_array__v47) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v47), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v47], vlSelf->__Vdlyvval__data_array__v47);
    }
    if (vlSelf->__Vdlyvset__data_array__v48) {
        VL_ASSIGNSEL_WI(512,32,(IData)(vlSelf->__Vdlyvlsb__data_array__v48), 
                        vlSelf->__PVT__data_array[vlSelf->__Vdlyvdim0__data_array__v48], vlSelf->__Vdlyvval__data_array__v48);
    }
    if (vlSelf->__Vdlyvset__data_array__v0) {
        vlSelf->__PVT__dirty_array2[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v1) {
        vlSelf->__PVT__dirty_array2[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v2) {
        vlSelf->__PVT__dirty_array2[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v3) {
        vlSelf->__PVT__dirty_array2[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v4) {
        vlSelf->__PVT__dirty_array2[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v5) {
        vlSelf->__PVT__dirty_array2[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v6) {
        vlSelf->__PVT__dirty_array2[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v7) {
        vlSelf->__PVT__dirty_array2[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v8) {
        vlSelf->__PVT__dirty_array2[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v9) {
        vlSelf->__PVT__dirty_array2[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v10) {
        vlSelf->__PVT__dirty_array2[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v11) {
        vlSelf->__PVT__dirty_array2[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v12) {
        vlSelf->__PVT__dirty_array2[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v13) {
        vlSelf->__PVT__dirty_array2[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v14) {
        vlSelf->__PVT__dirty_array2[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v15) {
        vlSelf->__PVT__dirty_array2[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v16) {
        vlSelf->__PVT__dirty_array2[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v17) {
        vlSelf->__PVT__dirty_array2[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v18) {
        vlSelf->__PVT__dirty_array2[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v19) {
        vlSelf->__PVT__dirty_array2[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v20) {
        vlSelf->__PVT__dirty_array2[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v21) {
        vlSelf->__PVT__dirty_array2[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v22) {
        vlSelf->__PVT__dirty_array2[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v23) {
        vlSelf->__PVT__dirty_array2[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v24) {
        vlSelf->__PVT__dirty_array2[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v25) {
        vlSelf->__PVT__dirty_array2[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v26) {
        vlSelf->__PVT__dirty_array2[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v27) {
        vlSelf->__PVT__dirty_array2[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v28) {
        vlSelf->__PVT__dirty_array2[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v29) {
        vlSelf->__PVT__dirty_array2[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v30) {
        vlSelf->__PVT__dirty_array2[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v31) {
        vlSelf->__PVT__dirty_array2[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dirty_array__v32) {
        vlSelf->__PVT__dirty_array2[vlSelf->__Vdlyvdim0__dirty_array2__v32] 
            = vlSelf->__Vdlyvval__dirty_array2__v32;
    }
    if (vlSelf->__Vdlyvset__dirty_array2__v33) {
        vlSelf->__PVT__dirty_array2[vlSelf->__Vdlyvdim0__dirty_array2__v33] = 1U;
    }
    if (vlSelf->__Vdlyvset__dirty_array2__v34) {
        vlSelf->__PVT__dirty_array2[vlSelf->__Vdlyvdim0__dirty_array2__v34] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v0) {
        vlSelf->__PVT__dirty_array[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v1) {
        vlSelf->__PVT__dirty_array[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v2) {
        vlSelf->__PVT__dirty_array[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v3) {
        vlSelf->__PVT__dirty_array[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v4) {
        vlSelf->__PVT__dirty_array[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v5) {
        vlSelf->__PVT__dirty_array[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v6) {
        vlSelf->__PVT__dirty_array[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v7) {
        vlSelf->__PVT__dirty_array[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v8) {
        vlSelf->__PVT__dirty_array[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v9) {
        vlSelf->__PVT__dirty_array[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v10) {
        vlSelf->__PVT__dirty_array[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v11) {
        vlSelf->__PVT__dirty_array[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v12) {
        vlSelf->__PVT__dirty_array[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v13) {
        vlSelf->__PVT__dirty_array[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v14) {
        vlSelf->__PVT__dirty_array[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v15) {
        vlSelf->__PVT__dirty_array[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v16) {
        vlSelf->__PVT__dirty_array[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v17) {
        vlSelf->__PVT__dirty_array[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v18) {
        vlSelf->__PVT__dirty_array[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v19) {
        vlSelf->__PVT__dirty_array[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v20) {
        vlSelf->__PVT__dirty_array[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v21) {
        vlSelf->__PVT__dirty_array[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v22) {
        vlSelf->__PVT__dirty_array[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v23) {
        vlSelf->__PVT__dirty_array[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v24) {
        vlSelf->__PVT__dirty_array[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v25) {
        vlSelf->__PVT__dirty_array[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v26) {
        vlSelf->__PVT__dirty_array[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v27) {
        vlSelf->__PVT__dirty_array[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v28) {
        vlSelf->__PVT__dirty_array[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v29) {
        vlSelf->__PVT__dirty_array[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v30) {
        vlSelf->__PVT__dirty_array[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__data_array__v31) {
        vlSelf->__PVT__dirty_array[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__dirty_array__v32) {
        vlSelf->__PVT__dirty_array[vlSelf->__Vdlyvdim0__dirty_array__v32] 
            = vlSelf->__Vdlyvval__dirty_array__v32;
    }
    if (vlSelf->__Vdlyvset__dirty_array__v33) {
        vlSelf->__PVT__dirty_array[vlSelf->__Vdlyvdim0__dirty_array__v33] = 1U;
    }
    if (vlSelf->__Vdlyvset__dirty_array__v34) {
        vlSelf->__PVT__dirty_array[vlSelf->__Vdlyvdim0__dirty_array__v34] = 0U;
    }
    VL_ASSIGN_W(512,vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__in1, vlSelf->__PVT__refill_data);
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_resp_counter), 0U)))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__refill_resp_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_resp_counter), 1U)))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__refill_resp_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_resp_counter), 2U)))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__refill_resp_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_resp_counter), 3U)))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__refill_resp_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_resp_counter), 4U)))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__refill_resp_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_resp_counter), 4U)));
    }
    if ((0x10U <= (IData)(vlSelf->__PVT__refill_resp_counter))) {
        vlSelf->__PVT__refill_resp_done = 1U;
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__refill_resp_done = 0U;
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_req_counter), 0U)))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__refill_req_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_req_counter), 1U)))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__refill_req_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_req_counter), 2U)))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__refill_req_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_req_counter), 3U)))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__refill_req_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__refill_req_counter), 4U)))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__refill_req_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__refill_req_counter), 4U)));
    }
    if ((0x10U <= (IData)(vlSelf->__PVT__refill_req_counter))) {
        vlSelf->__PVT__refill_req_done = 1U;
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__refill_req_done = 0U;
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__spill_counter), 0U)))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__spill_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__spill_counter), 1U)))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__spill_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__spill_counter), 2U)))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__spill_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__spill_counter), 3U)))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__spill_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__spill_counter), 4U)))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__spill_counter, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__spill_counter), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 0U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__flush_counter), 0U)))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__flush_counter, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 1U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__flush_counter), 1U)))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__flush_counter, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 2U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__flush_counter), 2U)))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__flush_counter, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 3U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__flush_counter), 3U)))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__flush_counter, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 4U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__flush_counter), 4U)))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__flush_counter, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 5U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__flush_counter), 5U)))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__flush_counter, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 6U) 
               ^ VL_BITSEL_IIII(7, (IData)(vlSelf->__Vtogcov__flush_counter), 6U)))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__flush_counter, 
                        (1U & VL_BITSEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 6U)));
    }
    if ((0x40U <= (IData)(vlSelf->__PVT__flush_counter))) {
        vlSelf->__PVT__flush_done = 1U;
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__flush_done = 0U;
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vcellinp__spill_index_mux__in1 = (0x1fU 
                                                & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__flush_counter), 0U, 5U));
    if ((vlSelf->__PVT__lru_array[0U] ^ vlSelf->__Vtogcov__lru_array
         [0U])) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0U] = vlSelf->__PVT__lru_array
            [0U];
    }
    if ((vlSelf->__PVT__lru_array[1U] ^ vlSelf->__Vtogcov__lru_array
         [1U])) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[1U] = vlSelf->__PVT__lru_array
            [1U];
    }
    if ((vlSelf->__PVT__lru_array[2U] ^ vlSelf->__Vtogcov__lru_array
         [2U])) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[2U] = vlSelf->__PVT__lru_array
            [2U];
    }
    if ((vlSelf->__PVT__lru_array[3U] ^ vlSelf->__Vtogcov__lru_array
         [3U])) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[3U] = vlSelf->__PVT__lru_array
            [3U];
    }
    if ((vlSelf->__PVT__lru_array[4U] ^ vlSelf->__Vtogcov__lru_array
         [4U])) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[4U] = vlSelf->__PVT__lru_array
            [4U];
    }
    if ((vlSelf->__PVT__lru_array[5U] ^ vlSelf->__Vtogcov__lru_array
         [5U])) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[5U] = vlSelf->__PVT__lru_array
            [5U];
    }
    if ((vlSelf->__PVT__lru_array[6U] ^ vlSelf->__Vtogcov__lru_array
         [6U])) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[6U] = vlSelf->__PVT__lru_array
            [6U];
    }
    if ((vlSelf->__PVT__lru_array[7U] ^ vlSelf->__Vtogcov__lru_array
         [7U])) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[7U] = vlSelf->__PVT__lru_array
            [7U];
    }
    if ((vlSelf->__PVT__lru_array[8U] ^ vlSelf->__Vtogcov__lru_array
         [8U])) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[8U] = vlSelf->__PVT__lru_array
            [8U];
    }
    if ((vlSelf->__PVT__lru_array[9U] ^ vlSelf->__Vtogcov__lru_array
         [9U])) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[9U] = vlSelf->__PVT__lru_array
            [9U];
    }
    if ((vlSelf->__PVT__lru_array[0xaU] ^ vlSelf->__Vtogcov__lru_array
         [0xaU])) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0xaU] = vlSelf->__PVT__lru_array
            [0xaU];
    }
    if ((vlSelf->__PVT__lru_array[0xbU] ^ vlSelf->__Vtogcov__lru_array
         [0xbU])) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0xbU] = vlSelf->__PVT__lru_array
            [0xbU];
    }
    if ((vlSelf->__PVT__lru_array[0xcU] ^ vlSelf->__Vtogcov__lru_array
         [0xcU])) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0xcU] = vlSelf->__PVT__lru_array
            [0xcU];
    }
    if ((vlSelf->__PVT__lru_array[0xdU] ^ vlSelf->__Vtogcov__lru_array
         [0xdU])) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0xdU] = vlSelf->__PVT__lru_array
            [0xdU];
    }
    if ((vlSelf->__PVT__lru_array[0xeU] ^ vlSelf->__Vtogcov__lru_array
         [0xeU])) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0xeU] = vlSelf->__PVT__lru_array
            [0xeU];
    }
    if ((vlSelf->__PVT__lru_array[0xfU] ^ vlSelf->__Vtogcov__lru_array
         [0xfU])) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0xfU] = vlSelf->__PVT__lru_array
            [0xfU];
    }
    if ((vlSelf->__PVT__lru_array[0x10U] ^ vlSelf->__Vtogcov__lru_array
         [0x10U])) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x10U] = vlSelf->__PVT__lru_array
            [0x10U];
    }
    if ((vlSelf->__PVT__lru_array[0x11U] ^ vlSelf->__Vtogcov__lru_array
         [0x11U])) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x11U] = vlSelf->__PVT__lru_array
            [0x11U];
    }
    if ((vlSelf->__PVT__lru_array[0x12U] ^ vlSelf->__Vtogcov__lru_array
         [0x12U])) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x12U] = vlSelf->__PVT__lru_array
            [0x12U];
    }
    if ((vlSelf->__PVT__lru_array[0x13U] ^ vlSelf->__Vtogcov__lru_array
         [0x13U])) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x13U] = vlSelf->__PVT__lru_array
            [0x13U];
    }
    if ((vlSelf->__PVT__lru_array[0x14U] ^ vlSelf->__Vtogcov__lru_array
         [0x14U])) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x14U] = vlSelf->__PVT__lru_array
            [0x14U];
    }
    if ((vlSelf->__PVT__lru_array[0x15U] ^ vlSelf->__Vtogcov__lru_array
         [0x15U])) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x15U] = vlSelf->__PVT__lru_array
            [0x15U];
    }
    if ((vlSelf->__PVT__lru_array[0x16U] ^ vlSelf->__Vtogcov__lru_array
         [0x16U])) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x16U] = vlSelf->__PVT__lru_array
            [0x16U];
    }
    if ((vlSelf->__PVT__lru_array[0x17U] ^ vlSelf->__Vtogcov__lru_array
         [0x17U])) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x17U] = vlSelf->__PVT__lru_array
            [0x17U];
    }
    if ((vlSelf->__PVT__lru_array[0x18U] ^ vlSelf->__Vtogcov__lru_array
         [0x18U])) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x18U] = vlSelf->__PVT__lru_array
            [0x18U];
    }
    if ((vlSelf->__PVT__lru_array[0x19U] ^ vlSelf->__Vtogcov__lru_array
         [0x19U])) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x19U] = vlSelf->__PVT__lru_array
            [0x19U];
    }
    if ((vlSelf->__PVT__lru_array[0x1aU] ^ vlSelf->__Vtogcov__lru_array
         [0x1aU])) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x1aU] = vlSelf->__PVT__lru_array
            [0x1aU];
    }
    if ((vlSelf->__PVT__lru_array[0x1bU] ^ vlSelf->__Vtogcov__lru_array
         [0x1bU])) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x1bU] = vlSelf->__PVT__lru_array
            [0x1bU];
    }
    if ((vlSelf->__PVT__lru_array[0x1cU] ^ vlSelf->__Vtogcov__lru_array
         [0x1cU])) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x1cU] = vlSelf->__PVT__lru_array
            [0x1cU];
    }
    if ((vlSelf->__PVT__lru_array[0x1dU] ^ vlSelf->__Vtogcov__lru_array
         [0x1dU])) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x1dU] = vlSelf->__PVT__lru_array
            [0x1dU];
    }
    if ((vlSelf->__PVT__lru_array[0x1eU] ^ vlSelf->__Vtogcov__lru_array
         [0x1eU])) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x1eU] = vlSelf->__PVT__lru_array
            [0x1eU];
    }
    if ((vlSelf->__PVT__lru_array[0x1fU] ^ vlSelf->__Vtogcov__lru_array
         [0x1fU])) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__lru_array[0x1fU] = vlSelf->__PVT__lru_array
            [0x1fU];
    }
    if ((vlSelf->__PVT__valid_array2[0U] ^ vlSelf->__Vtogcov__valid_array2
         [0U])) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0U] = vlSelf->__PVT__valid_array2
            [0U];
    }
    if ((vlSelf->__PVT__valid_array2[1U] ^ vlSelf->__Vtogcov__valid_array2
         [1U])) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[1U] = vlSelf->__PVT__valid_array2
            [1U];
    }
    if ((vlSelf->__PVT__valid_array2[2U] ^ vlSelf->__Vtogcov__valid_array2
         [2U])) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[2U] = vlSelf->__PVT__valid_array2
            [2U];
    }
    if ((vlSelf->__PVT__valid_array2[3U] ^ vlSelf->__Vtogcov__valid_array2
         [3U])) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[3U] = vlSelf->__PVT__valid_array2
            [3U];
    }
    if ((vlSelf->__PVT__valid_array2[4U] ^ vlSelf->__Vtogcov__valid_array2
         [4U])) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[4U] = vlSelf->__PVT__valid_array2
            [4U];
    }
    if ((vlSelf->__PVT__valid_array2[5U] ^ vlSelf->__Vtogcov__valid_array2
         [5U])) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[5U] = vlSelf->__PVT__valid_array2
            [5U];
    }
    if ((vlSelf->__PVT__valid_array2[6U] ^ vlSelf->__Vtogcov__valid_array2
         [6U])) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[6U] = vlSelf->__PVT__valid_array2
            [6U];
    }
    if ((vlSelf->__PVT__valid_array2[7U] ^ vlSelf->__Vtogcov__valid_array2
         [7U])) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[7U] = vlSelf->__PVT__valid_array2
            [7U];
    }
    if ((vlSelf->__PVT__valid_array2[8U] ^ vlSelf->__Vtogcov__valid_array2
         [8U])) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[8U] = vlSelf->__PVT__valid_array2
            [8U];
    }
    if ((vlSelf->__PVT__valid_array2[9U] ^ vlSelf->__Vtogcov__valid_array2
         [9U])) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[9U] = vlSelf->__PVT__valid_array2
            [9U];
    }
    if ((vlSelf->__PVT__valid_array2[0xaU] ^ vlSelf->__Vtogcov__valid_array2
         [0xaU])) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0xaU] = vlSelf->__PVT__valid_array2
            [0xaU];
    }
    if ((vlSelf->__PVT__valid_array2[0xbU] ^ vlSelf->__Vtogcov__valid_array2
         [0xbU])) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0xbU] = vlSelf->__PVT__valid_array2
            [0xbU];
    }
    if ((vlSelf->__PVT__valid_array2[0xcU] ^ vlSelf->__Vtogcov__valid_array2
         [0xcU])) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0xcU] = vlSelf->__PVT__valid_array2
            [0xcU];
    }
    if ((vlSelf->__PVT__valid_array2[0xdU] ^ vlSelf->__Vtogcov__valid_array2
         [0xdU])) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0xdU] = vlSelf->__PVT__valid_array2
            [0xdU];
    }
    if ((vlSelf->__PVT__valid_array2[0xeU] ^ vlSelf->__Vtogcov__valid_array2
         [0xeU])) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0xeU] = vlSelf->__PVT__valid_array2
            [0xeU];
    }
    if ((vlSelf->__PVT__valid_array2[0xfU] ^ vlSelf->__Vtogcov__valid_array2
         [0xfU])) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0xfU] = vlSelf->__PVT__valid_array2
            [0xfU];
    }
    if ((vlSelf->__PVT__valid_array2[0x10U] ^ vlSelf->__Vtogcov__valid_array2
         [0x10U])) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x10U] = vlSelf->__PVT__valid_array2
            [0x10U];
    }
    if ((vlSelf->__PVT__valid_array2[0x11U] ^ vlSelf->__Vtogcov__valid_array2
         [0x11U])) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x11U] = vlSelf->__PVT__valid_array2
            [0x11U];
    }
    if ((vlSelf->__PVT__valid_array2[0x12U] ^ vlSelf->__Vtogcov__valid_array2
         [0x12U])) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x12U] = vlSelf->__PVT__valid_array2
            [0x12U];
    }
    if ((vlSelf->__PVT__valid_array2[0x13U] ^ vlSelf->__Vtogcov__valid_array2
         [0x13U])) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x13U] = vlSelf->__PVT__valid_array2
            [0x13U];
    }
    if ((vlSelf->__PVT__valid_array2[0x14U] ^ vlSelf->__Vtogcov__valid_array2
         [0x14U])) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x14U] = vlSelf->__PVT__valid_array2
            [0x14U];
    }
    if ((vlSelf->__PVT__valid_array2[0x15U] ^ vlSelf->__Vtogcov__valid_array2
         [0x15U])) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x15U] = vlSelf->__PVT__valid_array2
            [0x15U];
    }
    if ((vlSelf->__PVT__valid_array2[0x16U] ^ vlSelf->__Vtogcov__valid_array2
         [0x16U])) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x16U] = vlSelf->__PVT__valid_array2
            [0x16U];
    }
    if ((vlSelf->__PVT__valid_array2[0x17U] ^ vlSelf->__Vtogcov__valid_array2
         [0x17U])) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x17U] = vlSelf->__PVT__valid_array2
            [0x17U];
    }
    if ((vlSelf->__PVT__valid_array2[0x18U] ^ vlSelf->__Vtogcov__valid_array2
         [0x18U])) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x18U] = vlSelf->__PVT__valid_array2
            [0x18U];
    }
    if ((vlSelf->__PVT__valid_array2[0x19U] ^ vlSelf->__Vtogcov__valid_array2
         [0x19U])) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x19U] = vlSelf->__PVT__valid_array2
            [0x19U];
    }
    if ((vlSelf->__PVT__valid_array2[0x1aU] ^ vlSelf->__Vtogcov__valid_array2
         [0x1aU])) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x1aU] = vlSelf->__PVT__valid_array2
            [0x1aU];
    }
    if ((vlSelf->__PVT__valid_array2[0x1bU] ^ vlSelf->__Vtogcov__valid_array2
         [0x1bU])) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x1bU] = vlSelf->__PVT__valid_array2
            [0x1bU];
    }
    if ((vlSelf->__PVT__valid_array2[0x1cU] ^ vlSelf->__Vtogcov__valid_array2
         [0x1cU])) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x1cU] = vlSelf->__PVT__valid_array2
            [0x1cU];
    }
    if ((vlSelf->__PVT__valid_array2[0x1dU] ^ vlSelf->__Vtogcov__valid_array2
         [0x1dU])) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x1dU] = vlSelf->__PVT__valid_array2
            [0x1dU];
    }
    if ((vlSelf->__PVT__valid_array2[0x1eU] ^ vlSelf->__Vtogcov__valid_array2
         [0x1eU])) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x1eU] = vlSelf->__PVT__valid_array2
            [0x1eU];
    }
    if ((vlSelf->__PVT__valid_array2[0x1fU] ^ vlSelf->__Vtogcov__valid_array2
         [0x1fU])) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array2[0x1fU] = vlSelf->__PVT__valid_array2
            [0x1fU];
    }
    if ((vlSelf->__PVT__valid_array[0U] ^ vlSelf->__Vtogcov__valid_array
         [0U])) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0U] = vlSelf->__PVT__valid_array
            [0U];
    }
    if ((vlSelf->__PVT__valid_array[1U] ^ vlSelf->__Vtogcov__valid_array
         [1U])) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[1U] = vlSelf->__PVT__valid_array
            [1U];
    }
    if ((vlSelf->__PVT__valid_array[2U] ^ vlSelf->__Vtogcov__valid_array
         [2U])) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[2U] = vlSelf->__PVT__valid_array
            [2U];
    }
    if ((vlSelf->__PVT__valid_array[3U] ^ vlSelf->__Vtogcov__valid_array
         [3U])) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[3U] = vlSelf->__PVT__valid_array
            [3U];
    }
    if ((vlSelf->__PVT__valid_array[4U] ^ vlSelf->__Vtogcov__valid_array
         [4U])) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[4U] = vlSelf->__PVT__valid_array
            [4U];
    }
    if ((vlSelf->__PVT__valid_array[5U] ^ vlSelf->__Vtogcov__valid_array
         [5U])) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[5U] = vlSelf->__PVT__valid_array
            [5U];
    }
    if ((vlSelf->__PVT__valid_array[6U] ^ vlSelf->__Vtogcov__valid_array
         [6U])) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[6U] = vlSelf->__PVT__valid_array
            [6U];
    }
    if ((vlSelf->__PVT__valid_array[7U] ^ vlSelf->__Vtogcov__valid_array
         [7U])) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[7U] = vlSelf->__PVT__valid_array
            [7U];
    }
    if ((vlSelf->__PVT__valid_array[8U] ^ vlSelf->__Vtogcov__valid_array
         [8U])) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[8U] = vlSelf->__PVT__valid_array
            [8U];
    }
    if ((vlSelf->__PVT__valid_array[9U] ^ vlSelf->__Vtogcov__valid_array
         [9U])) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[9U] = vlSelf->__PVT__valid_array
            [9U];
    }
    if ((vlSelf->__PVT__valid_array[0xaU] ^ vlSelf->__Vtogcov__valid_array
         [0xaU])) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0xaU] = vlSelf->__PVT__valid_array
            [0xaU];
    }
    if ((vlSelf->__PVT__valid_array[0xbU] ^ vlSelf->__Vtogcov__valid_array
         [0xbU])) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0xbU] = vlSelf->__PVT__valid_array
            [0xbU];
    }
    if ((vlSelf->__PVT__valid_array[0xcU] ^ vlSelf->__Vtogcov__valid_array
         [0xcU])) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0xcU] = vlSelf->__PVT__valid_array
            [0xcU];
    }
    if ((vlSelf->__PVT__valid_array[0xdU] ^ vlSelf->__Vtogcov__valid_array
         [0xdU])) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0xdU] = vlSelf->__PVT__valid_array
            [0xdU];
    }
    if ((vlSelf->__PVT__valid_array[0xeU] ^ vlSelf->__Vtogcov__valid_array
         [0xeU])) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0xeU] = vlSelf->__PVT__valid_array
            [0xeU];
    }
    if ((vlSelf->__PVT__valid_array[0xfU] ^ vlSelf->__Vtogcov__valid_array
         [0xfU])) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0xfU] = vlSelf->__PVT__valid_array
            [0xfU];
    }
    if ((vlSelf->__PVT__valid_array[0x10U] ^ vlSelf->__Vtogcov__valid_array
         [0x10U])) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x10U] = vlSelf->__PVT__valid_array
            [0x10U];
    }
    if ((vlSelf->__PVT__valid_array[0x11U] ^ vlSelf->__Vtogcov__valid_array
         [0x11U])) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x11U] = vlSelf->__PVT__valid_array
            [0x11U];
    }
    if ((vlSelf->__PVT__valid_array[0x12U] ^ vlSelf->__Vtogcov__valid_array
         [0x12U])) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x12U] = vlSelf->__PVT__valid_array
            [0x12U];
    }
    if ((vlSelf->__PVT__valid_array[0x13U] ^ vlSelf->__Vtogcov__valid_array
         [0x13U])) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x13U] = vlSelf->__PVT__valid_array
            [0x13U];
    }
    if ((vlSelf->__PVT__valid_array[0x14U] ^ vlSelf->__Vtogcov__valid_array
         [0x14U])) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x14U] = vlSelf->__PVT__valid_array
            [0x14U];
    }
    if ((vlSelf->__PVT__valid_array[0x15U] ^ vlSelf->__Vtogcov__valid_array
         [0x15U])) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x15U] = vlSelf->__PVT__valid_array
            [0x15U];
    }
    if ((vlSelf->__PVT__valid_array[0x16U] ^ vlSelf->__Vtogcov__valid_array
         [0x16U])) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x16U] = vlSelf->__PVT__valid_array
            [0x16U];
    }
    if ((vlSelf->__PVT__valid_array[0x17U] ^ vlSelf->__Vtogcov__valid_array
         [0x17U])) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x17U] = vlSelf->__PVT__valid_array
            [0x17U];
    }
    if ((vlSelf->__PVT__valid_array[0x18U] ^ vlSelf->__Vtogcov__valid_array
         [0x18U])) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x18U] = vlSelf->__PVT__valid_array
            [0x18U];
    }
    if ((vlSelf->__PVT__valid_array[0x19U] ^ vlSelf->__Vtogcov__valid_array
         [0x19U])) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x19U] = vlSelf->__PVT__valid_array
            [0x19U];
    }
    if ((vlSelf->__PVT__valid_array[0x1aU] ^ vlSelf->__Vtogcov__valid_array
         [0x1aU])) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x1aU] = vlSelf->__PVT__valid_array
            [0x1aU];
    }
    if ((vlSelf->__PVT__valid_array[0x1bU] ^ vlSelf->__Vtogcov__valid_array
         [0x1bU])) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x1bU] = vlSelf->__PVT__valid_array
            [0x1bU];
    }
    if ((vlSelf->__PVT__valid_array[0x1cU] ^ vlSelf->__Vtogcov__valid_array
         [0x1cU])) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x1cU] = vlSelf->__PVT__valid_array
            [0x1cU];
    }
    if ((vlSelf->__PVT__valid_array[0x1dU] ^ vlSelf->__Vtogcov__valid_array
         [0x1dU])) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x1dU] = vlSelf->__PVT__valid_array
            [0x1dU];
    }
    if ((vlSelf->__PVT__valid_array[0x1eU] ^ vlSelf->__Vtogcov__valid_array
         [0x1eU])) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x1eU] = vlSelf->__PVT__valid_array
            [0x1eU];
    }
    if ((vlSelf->__PVT__valid_array[0x1fU] ^ vlSelf->__Vtogcov__valid_array
         [0x1fU])) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__valid_array[0x1fU] = vlSelf->__PVT__valid_array
            [0x1fU];
    }
    if ((vlSelf->__PVT__dirty_array2[0U] ^ vlSelf->__Vtogcov__dirty_array2
         [0U])) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0U] = vlSelf->__PVT__dirty_array2
            [0U];
    }
    if ((vlSelf->__PVT__dirty_array2[1U] ^ vlSelf->__Vtogcov__dirty_array2
         [1U])) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[1U] = vlSelf->__PVT__dirty_array2
            [1U];
    }
    if ((vlSelf->__PVT__dirty_array2[2U] ^ vlSelf->__Vtogcov__dirty_array2
         [2U])) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[2U] = vlSelf->__PVT__dirty_array2
            [2U];
    }
    if ((vlSelf->__PVT__dirty_array2[3U] ^ vlSelf->__Vtogcov__dirty_array2
         [3U])) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[3U] = vlSelf->__PVT__dirty_array2
            [3U];
    }
    if ((vlSelf->__PVT__dirty_array2[4U] ^ vlSelf->__Vtogcov__dirty_array2
         [4U])) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[4U] = vlSelf->__PVT__dirty_array2
            [4U];
    }
    if ((vlSelf->__PVT__dirty_array2[5U] ^ vlSelf->__Vtogcov__dirty_array2
         [5U])) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[5U] = vlSelf->__PVT__dirty_array2
            [5U];
    }
    if ((vlSelf->__PVT__dirty_array2[6U] ^ vlSelf->__Vtogcov__dirty_array2
         [6U])) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[6U] = vlSelf->__PVT__dirty_array2
            [6U];
    }
    if ((vlSelf->__PVT__dirty_array2[7U] ^ vlSelf->__Vtogcov__dirty_array2
         [7U])) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[7U] = vlSelf->__PVT__dirty_array2
            [7U];
    }
    if ((vlSelf->__PVT__dirty_array2[8U] ^ vlSelf->__Vtogcov__dirty_array2
         [8U])) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[8U] = vlSelf->__PVT__dirty_array2
            [8U];
    }
    if ((vlSelf->__PVT__dirty_array2[9U] ^ vlSelf->__Vtogcov__dirty_array2
         [9U])) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[9U] = vlSelf->__PVT__dirty_array2
            [9U];
    }
    if ((vlSelf->__PVT__dirty_array2[0xaU] ^ vlSelf->__Vtogcov__dirty_array2
         [0xaU])) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0xaU] = vlSelf->__PVT__dirty_array2
            [0xaU];
    }
    if ((vlSelf->__PVT__dirty_array2[0xbU] ^ vlSelf->__Vtogcov__dirty_array2
         [0xbU])) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0xbU] = vlSelf->__PVT__dirty_array2
            [0xbU];
    }
    if ((vlSelf->__PVT__dirty_array2[0xcU] ^ vlSelf->__Vtogcov__dirty_array2
         [0xcU])) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0xcU] = vlSelf->__PVT__dirty_array2
            [0xcU];
    }
    if ((vlSelf->__PVT__dirty_array2[0xdU] ^ vlSelf->__Vtogcov__dirty_array2
         [0xdU])) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0xdU] = vlSelf->__PVT__dirty_array2
            [0xdU];
    }
    if ((vlSelf->__PVT__dirty_array2[0xeU] ^ vlSelf->__Vtogcov__dirty_array2
         [0xeU])) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0xeU] = vlSelf->__PVT__dirty_array2
            [0xeU];
    }
    if ((vlSelf->__PVT__dirty_array2[0xfU] ^ vlSelf->__Vtogcov__dirty_array2
         [0xfU])) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0xfU] = vlSelf->__PVT__dirty_array2
            [0xfU];
    }
    if ((vlSelf->__PVT__dirty_array2[0x10U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x10U])) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x10U] = vlSelf->__PVT__dirty_array2
            [0x10U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x11U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x11U])) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x11U] = vlSelf->__PVT__dirty_array2
            [0x11U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x12U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x12U])) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x12U] = vlSelf->__PVT__dirty_array2
            [0x12U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x13U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x13U])) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x13U] = vlSelf->__PVT__dirty_array2
            [0x13U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x14U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x14U])) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x14U] = vlSelf->__PVT__dirty_array2
            [0x14U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x15U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x15U])) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x15U] = vlSelf->__PVT__dirty_array2
            [0x15U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x16U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x16U])) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x16U] = vlSelf->__PVT__dirty_array2
            [0x16U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x17U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x17U])) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x17U] = vlSelf->__PVT__dirty_array2
            [0x17U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x18U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x18U])) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x18U] = vlSelf->__PVT__dirty_array2
            [0x18U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x19U] ^ vlSelf->__Vtogcov__dirty_array2
         [0x19U])) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x19U] = vlSelf->__PVT__dirty_array2
            [0x19U];
    }
    if ((vlSelf->__PVT__dirty_array2[0x1aU] ^ vlSelf->__Vtogcov__dirty_array2
         [0x1aU])) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x1aU] = vlSelf->__PVT__dirty_array2
            [0x1aU];
    }
    if ((vlSelf->__PVT__dirty_array2[0x1bU] ^ vlSelf->__Vtogcov__dirty_array2
         [0x1bU])) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x1bU] = vlSelf->__PVT__dirty_array2
            [0x1bU];
    }
    if ((vlSelf->__PVT__dirty_array2[0x1cU] ^ vlSelf->__Vtogcov__dirty_array2
         [0x1cU])) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x1cU] = vlSelf->__PVT__dirty_array2
            [0x1cU];
    }
    if ((vlSelf->__PVT__dirty_array2[0x1dU] ^ vlSelf->__Vtogcov__dirty_array2
         [0x1dU])) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x1dU] = vlSelf->__PVT__dirty_array2
            [0x1dU];
    }
    if ((vlSelf->__PVT__dirty_array2[0x1eU] ^ vlSelf->__Vtogcov__dirty_array2
         [0x1eU])) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x1eU] = vlSelf->__PVT__dirty_array2
            [0x1eU];
    }
    if ((vlSelf->__PVT__dirty_array2[0x1fU] ^ vlSelf->__Vtogcov__dirty_array2
         [0x1fU])) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array2[0x1fU] = vlSelf->__PVT__dirty_array2
            [0x1fU];
    }
    if ((vlSelf->__PVT__dirty_array[0U] ^ vlSelf->__Vtogcov__dirty_array
         [0U])) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0U] = vlSelf->__PVT__dirty_array
            [0U];
    }
    if ((vlSelf->__PVT__dirty_array[1U] ^ vlSelf->__Vtogcov__dirty_array
         [1U])) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[1U] = vlSelf->__PVT__dirty_array
            [1U];
    }
    if ((vlSelf->__PVT__dirty_array[2U] ^ vlSelf->__Vtogcov__dirty_array
         [2U])) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[2U] = vlSelf->__PVT__dirty_array
            [2U];
    }
    if ((vlSelf->__PVT__dirty_array[3U] ^ vlSelf->__Vtogcov__dirty_array
         [3U])) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[3U] = vlSelf->__PVT__dirty_array
            [3U];
    }
    if ((vlSelf->__PVT__dirty_array[4U] ^ vlSelf->__Vtogcov__dirty_array
         [4U])) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[4U] = vlSelf->__PVT__dirty_array
            [4U];
    }
    if ((vlSelf->__PVT__dirty_array[5U] ^ vlSelf->__Vtogcov__dirty_array
         [5U])) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[5U] = vlSelf->__PVT__dirty_array
            [5U];
    }
    if ((vlSelf->__PVT__dirty_array[6U] ^ vlSelf->__Vtogcov__dirty_array
         [6U])) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[6U] = vlSelf->__PVT__dirty_array
            [6U];
    }
    if ((vlSelf->__PVT__dirty_array[7U] ^ vlSelf->__Vtogcov__dirty_array
         [7U])) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[7U] = vlSelf->__PVT__dirty_array
            [7U];
    }
    if ((vlSelf->__PVT__dirty_array[8U] ^ vlSelf->__Vtogcov__dirty_array
         [8U])) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[8U] = vlSelf->__PVT__dirty_array
            [8U];
    }
    if ((vlSelf->__PVT__dirty_array[9U] ^ vlSelf->__Vtogcov__dirty_array
         [9U])) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[9U] = vlSelf->__PVT__dirty_array
            [9U];
    }
    if ((vlSelf->__PVT__dirty_array[0xaU] ^ vlSelf->__Vtogcov__dirty_array
         [0xaU])) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0xaU] = vlSelf->__PVT__dirty_array
            [0xaU];
    }
    if ((vlSelf->__PVT__dirty_array[0xbU] ^ vlSelf->__Vtogcov__dirty_array
         [0xbU])) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0xbU] = vlSelf->__PVT__dirty_array
            [0xbU];
    }
    if ((vlSelf->__PVT__dirty_array[0xcU] ^ vlSelf->__Vtogcov__dirty_array
         [0xcU])) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0xcU] = vlSelf->__PVT__dirty_array
            [0xcU];
    }
    if ((vlSelf->__PVT__dirty_array[0xdU] ^ vlSelf->__Vtogcov__dirty_array
         [0xdU])) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0xdU] = vlSelf->__PVT__dirty_array
            [0xdU];
    }
    if ((vlSelf->__PVT__dirty_array[0xeU] ^ vlSelf->__Vtogcov__dirty_array
         [0xeU])) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0xeU] = vlSelf->__PVT__dirty_array
            [0xeU];
    }
    if ((vlSelf->__PVT__dirty_array[0xfU] ^ vlSelf->__Vtogcov__dirty_array
         [0xfU])) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0xfU] = vlSelf->__PVT__dirty_array
            [0xfU];
    }
    if ((vlSelf->__PVT__dirty_array[0x10U] ^ vlSelf->__Vtogcov__dirty_array
         [0x10U])) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x10U] = vlSelf->__PVT__dirty_array
            [0x10U];
    }
    if ((vlSelf->__PVT__dirty_array[0x11U] ^ vlSelf->__Vtogcov__dirty_array
         [0x11U])) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x11U] = vlSelf->__PVT__dirty_array
            [0x11U];
    }
    if ((vlSelf->__PVT__dirty_array[0x12U] ^ vlSelf->__Vtogcov__dirty_array
         [0x12U])) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x12U] = vlSelf->__PVT__dirty_array
            [0x12U];
    }
    if ((vlSelf->__PVT__dirty_array[0x13U] ^ vlSelf->__Vtogcov__dirty_array
         [0x13U])) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x13U] = vlSelf->__PVT__dirty_array
            [0x13U];
    }
    if ((vlSelf->__PVT__dirty_array[0x14U] ^ vlSelf->__Vtogcov__dirty_array
         [0x14U])) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x14U] = vlSelf->__PVT__dirty_array
            [0x14U];
    }
    if ((vlSelf->__PVT__dirty_array[0x15U] ^ vlSelf->__Vtogcov__dirty_array
         [0x15U])) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x15U] = vlSelf->__PVT__dirty_array
            [0x15U];
    }
    if ((vlSelf->__PVT__dirty_array[0x16U] ^ vlSelf->__Vtogcov__dirty_array
         [0x16U])) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x16U] = vlSelf->__PVT__dirty_array
            [0x16U];
    }
    if ((vlSelf->__PVT__dirty_array[0x17U] ^ vlSelf->__Vtogcov__dirty_array
         [0x17U])) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x17U] = vlSelf->__PVT__dirty_array
            [0x17U];
    }
    if ((vlSelf->__PVT__dirty_array[0x18U] ^ vlSelf->__Vtogcov__dirty_array
         [0x18U])) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x18U] = vlSelf->__PVT__dirty_array
            [0x18U];
    }
    if ((vlSelf->__PVT__dirty_array[0x19U] ^ vlSelf->__Vtogcov__dirty_array
         [0x19U])) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x19U] = vlSelf->__PVT__dirty_array
            [0x19U];
    }
    if ((vlSelf->__PVT__dirty_array[0x1aU] ^ vlSelf->__Vtogcov__dirty_array
         [0x1aU])) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x1aU] = vlSelf->__PVT__dirty_array
            [0x1aU];
    }
    if ((vlSelf->__PVT__dirty_array[0x1bU] ^ vlSelf->__Vtogcov__dirty_array
         [0x1bU])) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x1bU] = vlSelf->__PVT__dirty_array
            [0x1bU];
    }
    if ((vlSelf->__PVT__dirty_array[0x1cU] ^ vlSelf->__Vtogcov__dirty_array
         [0x1cU])) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x1cU] = vlSelf->__PVT__dirty_array
            [0x1cU];
    }
    if ((vlSelf->__PVT__dirty_array[0x1dU] ^ vlSelf->__Vtogcov__dirty_array
         [0x1dU])) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x1dU] = vlSelf->__PVT__dirty_array
            [0x1dU];
    }
    if ((vlSelf->__PVT__dirty_array[0x1eU] ^ vlSelf->__Vtogcov__dirty_array
         [0x1eU])) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x1eU] = vlSelf->__PVT__dirty_array
            [0x1eU];
    }
    if ((vlSelf->__PVT__dirty_array[0x1fU] ^ vlSelf->__Vtogcov__dirty_array
         [0x1fU])) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dirty_array[0x1fU] = vlSelf->__PVT__dirty_array
            [0x1fU];
    }
    if (((IData)(vlSelf->__PVT__refill_resp_done) ^ (IData)(vlSelf->__Vtogcov__refill_resp_done))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_resp_done = vlSelf->__PVT__refill_resp_done;
    }
    if (((IData)(vlSelf->__PVT__refill_req_done) ^ (IData)(vlSelf->__Vtogcov__refill_req_done))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_req_done = vlSelf->__PVT__refill_req_done;
    }
    if (((IData)(vlSelf->__PVT__flush_done) ^ (IData)(vlSelf->__Vtogcov__flush_done))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__flush_done = vlSelf->__PVT__flush_done;
    }
    vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__in1 
        = vlSelf->__Vcellinp__spill_index_mux__in1;
}

VL_INLINE_OPT void Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__0(Vtop_lab3_cache_CacheAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab3_cache_CacheAltDpath___nba_comb__TOP__top__DUT__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reg_en_M0) ^ (IData)(vlSelf->__Vtogcov__reg_en_M0))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_M0 = vlSelf->__PVT__reg_en_M0;
    }
    if (((IData)(vlSelf->__PVT__darray_write_mux_sel) 
         ^ (IData)(vlSelf->__Vtogcov__darray_write_mux_sel))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_write_mux_sel = vlSelf->__PVT__darray_write_mux_sel;
    }
    vlSymsp->TOP__top__DUT__darray_write_mux.__PVT__sel 
        = vlSelf->__PVT__darray_write_mux_sel;
    if (((IData)(vlSelf->__PVT__write_en_sel) ^ (IData)(vlSelf->__Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en_sel = vlSelf->__PVT__write_en_sel;
    }
    vlSymsp->TOP__top__DUT__word_en_mux.__PVT__sel 
        = vlSelf->__PVT__write_en_sel;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__memreq_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__memreq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__memreq_msg_addr, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->__Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__Spill_or_Refill_sel = vlSelf->__PVT__Spill_or_Refill_sel;
    }
    vlSymsp->TOP__top__DUT__Spill_or_Refill_Mux.__PVT__sel 
        = vlSelf->__PVT__Spill_or_Refill_sel;
    if (((IData)(vlSelf->__PVT__z6b_sel) ^ (IData)(vlSelf->__Vtogcov__z6b_sel))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__z6b_sel = vlSelf->__PVT__z6b_sel;
    }
    vlSymsp->TOP__top__DUT__z6b_mux.__PVT__sel = vlSelf->__PVT__z6b_sel;
    if (((IData)(vlSelf->__PVT__tarray_en2) ^ (IData)(vlSelf->__Vtogcov__tarray_en2))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_en2 = vlSelf->__PVT__tarray_en2;
    }
    if (((IData)(vlSelf->__PVT__tarray_en) ^ (IData)(vlSelf->__Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_en = vlSelf->__PVT__tarray_en;
    }
    if (((IData)(vlSelf->__PVT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_resp_received 
            = vlSelf->__PVT__refill_one_word_resp_received;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__cache_resp_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__cache_resp_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__cache_resp_msg_data, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->__Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__refill_one_word_req_sent 
            = vlSelf->__PVT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->__PVT__spill_one_word_done) 
         ^ (IData)(vlSelf->__Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__spill_one_word_done = vlSelf->__PVT__spill_one_word_done;
    }
    if (((IData)(vlSelf->__PVT__tarray_wen) ^ (IData)(vlSelf->__Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_wen = vlSelf->__PVT__tarray_wen;
    }
    if (((IData)(vlSelf->__PVT__tarray_wen2) ^ (IData)(vlSelf->__Vtogcov__tarray_wen2))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__tarray_wen2 = vlSelf->__PVT__tarray_wen2;
    }
    if (((IData)(vlSelf->__PVT__darray_wen) ^ (IData)(vlSelf->__Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_wen = vlSelf->__PVT__darray_wen;
    }
    if (((IData)(vlSelf->__PVT__darray_wen2) ^ (IData)(vlSelf->__Vtogcov__darray_wen2))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__darray_wen2 = vlSelf->__PVT__darray_wen2;
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__flush) ^ (IData)(vlSelf->__Vtogcov__flush))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__flush = vlSelf->__PVT__flush;
    }
    vlSymsp->TOP__top__DUT__spill_index_mux.__PVT__sel 
        = vlSelf->__PVT__flush;
}
