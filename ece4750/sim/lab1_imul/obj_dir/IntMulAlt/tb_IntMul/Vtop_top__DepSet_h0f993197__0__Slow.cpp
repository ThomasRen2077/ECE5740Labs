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
    if (((IData)(vlSelf->__PVT__istream_val) ^ (IData)(vlSelf->__Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_val = vlSelf->__PVT__istream_val;
    }
    if (((IData)(vlSelf->__PVT__ostream_rdy) ^ (IData)(vlSelf->__Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    }
    vlSelf->__PVT__ostream_val = vlSymsp->TOP__top__imul.__PVT__ostream_val;
    vlSelf->__PVT__istream_rdy = vlSymsp->TOP__top__imul.__PVT__istream_rdy;
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 1U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 2U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 3U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 4U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 5U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 6U)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 7U)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 8U)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 9U)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xaU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xbU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xcU)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xdU)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xeU)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xfU)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x10U)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x11U)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x12U)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x13U)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x14U)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x15U)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x16U)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x17U)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x18U)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x19U)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1aU)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1bU)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1cU)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1dU)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1eU)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1fU)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0U)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 1U)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 2U)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 3U)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 4U)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 5U)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 6U)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 7U)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 8U)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 9U)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xaU)))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xbU)))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xcU)))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xdU)))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xeU)))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xfU)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x10U)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x11U)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x12U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x13U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x14U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x15U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x16U)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x17U)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x18U)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x19U)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1aU)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1bU)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1cU)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1dU)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1eU)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1fU)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0U)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 1U)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 2U)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 3U)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 4U)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 5U)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 6U)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 7U)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 8U)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 9U)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xaU)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xbU)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xcU)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xdU)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xeU)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xfU)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x10U)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x11U)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x12U)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x13U)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x14U)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x15U)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x16U)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x17U)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x18U)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x19U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1aU)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1bU)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1cU)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1dU)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1eU)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1fU)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU)));
    }
    vlSelf->__PVT__ostream_msg = vlSymsp->TOP__top__imul.__PVT__ostream_msg;
    vlSymsp->TOP__top__imul.__PVT__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    vlSymsp->TOP__top__imul.__PVT__istream_val = vlSelf->__PVT__istream_val;
    vlSelf->__PVT__istream_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__istream_msg_a, vlSelf->__PVT__istream_msg_b);
    if (((IData)(vlSelf->__PVT__ostream_val) ^ (IData)(vlSelf->__Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_val = vlSelf->__PVT__ostream_val;
    }
    if (((IData)(vlSelf->__PVT__istream_rdy) ^ (IData)(vlSelf->__Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_rdy = vlSelf->__PVT__istream_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 1U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 2U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 3U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 4U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 5U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 6U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 7U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 8U)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 9U)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x30U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x31U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x32U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x33U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x34U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x35U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x36U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x37U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x38U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x39U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU)));
    }
    vlSymsp->TOP__top__imul.__PVT__istream_msg = vlSelf->__PVT__istream_msg;
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
    vlSymsp->TOP__top__imul.__PVT__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop_top___configure_coverage(Vtop_top* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "tb_IntMul.v", 20, 26, "", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "tb_IntMul.v", 20, 43, "", "v_toggle/top", "linetrace", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "tb_IntMul.v", 23, 16, "", "v_toggle/top", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "tb_IntMul.v", 25, 16, "", "v_toggle/top", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "tb_IntMul.v", 26, 16, "", "v_toggle/top", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "tb_IntMul.v", 27, 16, "", "v_toggle/top", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "tb_IntMul.v", 29, 16, "", "v_toggle/top", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "tb_IntMul.v", 30, 16, "", "v_toggle/top", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "tb_IntMul.v", 31, 23, "", "v_toggle/top", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "tb_IntMul.v", 37, 23, "", "v_toggle/top", "istream_msg_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[157]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[158]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[159]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[160]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[161]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[162]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[163]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[164]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[165]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[166]), first, "tb_IntMul.v", 38, 23, "", "v_toggle/top", "istream_msg_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[167]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[168]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[169]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[170]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[171]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[172]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[173]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[174]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[175]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[176]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[177]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[178]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[179]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[180]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[181]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[182]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[183]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[184]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[185]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[186]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[187]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[188]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[189]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[190]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[191]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[192]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[193]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[194]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[195]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[196]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[197]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[198]), first, "tb_IntMul.v", 40, 23, "", "v_toggle/top", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[199]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[200]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[201]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[202]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[203]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[204]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[205]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[206]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[207]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[208]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[209]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[210]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[211]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[212]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[213]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[214]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[215]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[216]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[217]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[218]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[219]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[220]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[221]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[222]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[223]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[224]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[225]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[226]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[227]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[228]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[229]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[230]), first, "tb_IntMul.v", 41, 23, "", "v_toggle/top", "b[31]", "");
}
