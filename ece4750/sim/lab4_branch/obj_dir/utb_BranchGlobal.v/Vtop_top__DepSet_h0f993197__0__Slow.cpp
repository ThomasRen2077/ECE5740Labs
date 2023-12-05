// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__update_en) ^ (IData)(vlSelf->__Vtogcov__update_en))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_en = vlSelf->__PVT__update_en;
    }
    if (((IData)(vlSelf->__PVT__update_val) ^ (IData)(vlSelf->__Vtogcov__update_val))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__update_val = vlSelf->__PVT__update_val;
    }
    if (((IData)(vlSelf->__PVT__my_update_en) ^ (IData)(vlSelf->__Vtogcov__my_update_en))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__my_update_en = vlSelf->__PVT__my_update_en;
    }
    if (((IData)(vlSelf->__PVT__my_update_val) ^ (IData)(vlSelf->__Vtogcov__my_update_val))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__my_update_val = vlSelf->__PVT__my_update_val;
    }
    vlSymsp->TOP__top__DUT.__PVT__update_en = vlSelf->__PVT__update_en;
    vlSymsp->TOP__top__DUT.__PVT__reset = vlSelf->__PVT__reset;
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 0U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 0U)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 1U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 1U)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 2U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 2U)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 3U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 3U)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 4U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 4U)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 5U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 5U)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 0U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__correct_counter), 0U)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__correct_counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 1U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__correct_counter), 1U)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__correct_counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 2U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__correct_counter), 2U)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__correct_counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 3U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__correct_counter), 3U)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__correct_counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 4U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__correct_counter), 4U)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__correct_counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 5U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__correct_counter), 5U)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__correct_counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__correct_counter), 5U)));
    }
    vlSymsp->TOP__top__DUT.__PVT__update_val = vlSelf->__PVT__update_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 1U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 2U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 3U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 4U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 5U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 6U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 7U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 8U)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 9U)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xaU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xbU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xcU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xdU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xeU)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0xfU)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x10U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x11U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x12U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x13U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x14U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x15U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x16U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x17U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x18U)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x19U)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1aU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1bU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1cU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1dU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1eU)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__PC, 0x1fU)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__PC, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__PC, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0U)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 1U)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 2U)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 3U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 4U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 5U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 6U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 7U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 8U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 9U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xaU)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xbU)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xcU)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xdU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xeU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0xfU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x10U)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x11U)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x12U)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x13U)))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x14U)))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x15U)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x16U)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x17U)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x18U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x19U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1aU)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1bU)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1cU)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1dU)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1eU)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__my_pc, 0x1fU)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__my_pc, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__my_pc, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0U)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 1U)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 2U)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 3U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 4U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 5U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 6U)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 7U)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 8U)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 9U)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xaU)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xbU)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xcU)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xdU)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xeU)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0xfU)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x10U)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x11U)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x12U)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x13U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x14U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x15U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x16U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x17U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x18U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x19U)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1aU)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1bU)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1cU)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1dU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1eU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__shift_factor, 0x1fU)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__shift_factor, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_factor, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT.__PVT__PC = vlSelf->__PVT__PC;
}

VL_ATTR_COLD void Vtop_top___stl_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___stl_sequent__TOP__top__1\n"); );
    // Body
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->__Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->clk;
    }
    vlSymsp->TOP__top__DUT.__PVT__clk = vlSelf->clk;
    vlSelf->__PVT__prediction = vlSymsp->TOP__top__DUT.__PVT__prediction;
    if (((IData)(vlSelf->__PVT__prediction) ^ (IData)(vlSelf->__Vtogcov__prediction))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__prediction = vlSelf->__PVT__prediction;
    }
}

VL_ATTR_COLD void Vtop_top___configure_coverage(Vtop_top* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "utb_BranchGlobal.v", 7, 26, "", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "utb_BranchGlobal.v", 7, 43, "", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "utb_BranchGlobal.v", 9, 19, "", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "utb_BranchGlobal.v", 10, 19, "", "v_toggle/top", "update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "utb_BranchGlobal.v", 11, 19, "", "v_toggle/top", "update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "utb_BranchGlobal.v", 12, 19, "", "v_toggle/top", "PC[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "utb_BranchGlobal.v", 13, 19, "", "v_toggle/top", "prediction", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "utb_BranchGlobal.v", 14, 19, "", "v_toggle/top", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "utb_BranchGlobal.v", 14, 19, "", "v_toggle/top", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "utb_BranchGlobal.v", 14, 19, "", "v_toggle/top", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "utb_BranchGlobal.v", 14, 19, "", "v_toggle/top", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "utb_BranchGlobal.v", 14, 19, "", "v_toggle/top", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "utb_BranchGlobal.v", 14, 19, "", "v_toggle/top", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "utb_BranchGlobal.v", 15, 19, "", "v_toggle/top", "correct_counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "utb_BranchGlobal.v", 15, 19, "", "v_toggle/top", "correct_counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "utb_BranchGlobal.v", 15, 19, "", "v_toggle/top", "correct_counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "utb_BranchGlobal.v", 15, 19, "", "v_toggle/top", "correct_counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "utb_BranchGlobal.v", 15, 19, "", "v_toggle/top", "correct_counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "utb_BranchGlobal.v", 15, 19, "", "v_toggle/top", "correct_counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "utb_BranchGlobal.v", 16, 19, "", "v_toggle/top", "my_pc[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "utb_BranchGlobal.v", 17, 19, "", "v_toggle/top", "my_update_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "utb_BranchGlobal.v", 18, 19, "", "v_toggle/top", "my_update_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "utb_BranchGlobal.v", 19, 19, "", "v_toggle/top", "shift_factor[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "utb_BranchGlobal.v", 79, 9, "", "v_line/top", "block", "79-83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "utb_BranchGlobal.v", 96, 9, "", "v_line/top", "block", "96-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "utb_BranchGlobal.v", 113, 9, "", "v_line/top", "block", "113-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "utb_BranchGlobal.v", 133, 13, "", "v_branch/top", "if", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "utb_BranchGlobal.v", 133, 14, "", "v_branch/top", "else", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "utb_BranchGlobal.v", 130, 9, "", "v_line/top", "block", "130-132,135");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "utb_BranchGlobal.v", 153, 18, "", "v_line/top", "if", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "utb_BranchGlobal.v", 153, 19, "", "v_line/top", "else", "154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "utb_BranchGlobal.v", 152, 18, "", "v_line/top", "elsif", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "utb_BranchGlobal.v", 151, 13, "", "v_line/top", "elsif", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "utb_BranchGlobal.v", 148, 9, "", "v_line/top", "block", "148-150,155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "utb_BranchGlobal.v", 169, 13, "", "v_line/top", "block", "169-173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "utb_BranchGlobal.v", 168, 9, "", "v_line/top", "block", "168-169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "utb_BranchGlobal.v", 191, 17, "", "v_branch/top", "if", "191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "utb_BranchGlobal.v", 191, 18, "", "v_branch/top", "else", "192");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "utb_BranchGlobal.v", 188, 13, "", "v_line/top", "block", "188-190,193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "utb_BranchGlobal.v", 187, 9, "", "v_line/top", "block", "187-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "utb_BranchGlobal.v", 207, 9, "", "v_line/top", "block", "207-211");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "utb_BranchGlobal.v", 224, 9, "", "v_line/top", "block", "224-228");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "utb_BranchGlobal.v", 244, 13, "", "v_branch/top", "if", "244");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "utb_BranchGlobal.v", 244, 14, "", "v_branch/top", "else", "245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "utb_BranchGlobal.v", 241, 9, "", "v_line/top", "block", "241-243,246");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "utb_BranchGlobal.v", 264, 18, "", "v_line/top", "if", "264");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "utb_BranchGlobal.v", 264, 19, "", "v_line/top", "else", "265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "utb_BranchGlobal.v", 263, 18, "", "v_line/top", "elsif", "263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "utb_BranchGlobal.v", 262, 13, "", "v_line/top", "elsif", "262");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "utb_BranchGlobal.v", 259, 9, "", "v_line/top", "block", "259-261,266");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "utb_BranchGlobal.v", 281, 9, "", "v_line/top", "block", "281-285");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "utb_BranchGlobal.v", 27, 5, "", "v_line/top", "block", "27-28,30-34,36-44,47-54,57-64,71,73,75,77,79,88,90,92,94,96,105,107,109,111,113,122,124,126,128,130,140,142,144,146,148,160,162,164,166,168,179,181,183,185,187,199,201,203,205,207,216,218,220,222,224,233,235,237,239,241,251,253,255,257,259,271,273,275,277,279-281,292-293");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "utb_BranchGlobal.v", 300, 10, "", "v_line/top", "block", "300-301,304,307-309,315-318,321");
}
