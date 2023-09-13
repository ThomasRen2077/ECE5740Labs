// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulSimple.h"

VL_ATTR_COLD void Vtop_lab1_imul_IntMulSimple___stl_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___stl_sequent__TOP__top__imul__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__istream_rdy) ^ (IData)(vlSelf->__Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_rdy = vlSelf->__PVT__istream_rdy;
    }
    if (((IData)(vlSelf->__PVT__ostream_val) ^ (IData)(vlSelf->__Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_val = vlSelf->__PVT__ostream_val;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    if (((IData)(vlSelf->__PVT__ostream_rdy) ^ (IData)(vlSelf->__Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    }
    if (((IData)(vlSelf->__PVT__istream_val) ^ (IData)(vlSelf->__Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_val = vlSelf->__PVT__istream_val;
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0U)))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 1U)))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 2U)))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 3U)))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 4U)))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 5U)))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 6U)))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 7U)))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 8U)))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 9U)))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x30U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x31U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x32U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x33U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x34U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x35U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x36U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x37U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x38U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x39U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU)));
    }
    vlSelf->__PVT__a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
    vlSelf->__PVT__b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0U)))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0U)))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 1U)))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 2U)))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 3U)))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 4U)))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 5U)))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 6U)))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 7U)))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 8U)))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 9U)))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xaU)))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xbU)))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xcU)))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xdU)))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xeU)))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xfU)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x10U)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x11U)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x12U)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x13U)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x14U)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x15U)))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x16U)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x17U)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x18U)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x19U)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1aU)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1bU)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1cU)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1dU)))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1eU)))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1fU)))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU)));
    }
    vlSelf->__PVT__next_ostream_val = vlSelf->__PVT__ostream_val;
    vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
    if (((IData)(vlSelf->__PVT__istream_val) & (IData)(vlSelf->__PVT__istream_rdy))) {
        vlSelf->__PVT__next_ostream_msg = (vlSelf->__PVT__a 
                                           * vlSelf->__PVT__b);
        vlSelf->__PVT__next_ostream_val = 1U;
    }
    if (((IData)(vlSelf->__PVT__ostream_val) & (IData)(vlSelf->__PVT__ostream_rdy))) {
        vlSelf->__PVT__next_ostream_val = 0U;
    }
    if (((IData)(vlSelf->__PVT__next_ostream_val) ^ (IData)(vlSelf->__Vtogcov__next_ostream_val))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__next_ostream_val = vlSelf->__PVT__next_ostream_val;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__next_ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__next_ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__next_ostream_msg, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_lab1_imul_IntMulSimple___stl_sequent__TOP__top__imul__1(Vtop_lab1_imul_IntMulSimple* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___stl_sequent__TOP__top__imul__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__imul__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_lab1_imul_IntMulSimple___configure_coverage(Vtop_lab1_imul_IntMulSimple* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulSimple___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[231]), first, "IntMulSimple.v", 12, 9, "", "v_toggle/lab1_imul_IntMulSimple", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[232]), first, "IntMulSimple.v", 13, 9, "", "v_toggle/lab1_imul_IntMulSimple", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[233]), first, "IntMulSimple.v", 14, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[234]), first, "IntMulSimple.v", 15, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[235]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[236]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[237]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[238]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[239]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[240]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[241]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[242]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[243]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[244]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[245]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[246]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[247]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[248]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[249]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[250]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[251]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[252]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[253]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[254]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[255]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[256]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[257]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[258]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[259]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[260]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[261]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[262]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[263]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[264]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[265]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[266]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[267]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[268]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[269]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[270]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[271]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[272]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[273]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[274]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[275]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[276]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[277]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[278]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[279]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[280]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[281]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[282]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[283]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[284]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[285]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[286]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[287]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[288]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[289]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[290]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[291]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[292]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[293]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[294]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[295]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[296]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[297]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "IntMulSimple.v", 16, 23, "", "v_toggle/lab1_imul_IntMulSimple", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "IntMulSimple.v", 18, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "IntMulSimple.v", 19, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[317]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[318]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[319]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[320]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[321]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[322]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[323]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[324]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[325]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[326]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[327]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[328]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[329]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[330]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[331]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[332]), first, "IntMulSimple.v", 20, 23, "", "v_toggle/lab1_imul_IntMulSimple", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[333]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[334]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[335]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[336]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[337]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[338]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[339]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[340]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[341]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[342]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[343]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[344]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[345]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[346]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[347]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[348]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[349]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[350]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[351]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[352]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[353]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[354]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[355]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[356]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[357]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[358]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[359]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[360]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[361]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[362]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[363]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[364]), first, "IntMulSimple.v", 23, 16, "", "v_toggle/lab1_imul_IntMulSimple", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[365]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[366]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[367]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[368]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[369]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[370]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[371]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[372]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[373]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[374]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[375]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[376]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[377]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[378]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[379]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[380]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[381]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[382]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[383]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[384]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[385]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[386]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[387]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[388]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[389]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[390]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[391]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[392]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[393]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[394]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[395]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[396]), first, "IntMulSimple.v", 24, 16, "", "v_toggle/lab1_imul_IntMulSimple", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[397]), first, "IntMulSimple.v", 25, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[398]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[399]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[400]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[401]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[402]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[403]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[404]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[405]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[406]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[407]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[408]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[409]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[410]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[411]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[412]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[413]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[414]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[415]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[416]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[417]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[418]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[419]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[420]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[421]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[422]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[423]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[424]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[425]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[426]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[427]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[428]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[429]), first, "IntMulSimple.v", 26, 16, "", "v_toggle/lab1_imul_IntMulSimple", "next_ostream_msg[31]", "");
}
