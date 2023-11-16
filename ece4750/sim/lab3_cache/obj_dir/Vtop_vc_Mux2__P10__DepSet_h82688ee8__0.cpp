// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P10.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P10___act_comb__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P10___act_comb__TOP__top__DUT__word_en_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0U)))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 1U)))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 2U)))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 3U)))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 4U)))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 5U)))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 6U)))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 7U)))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 8U)))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 9U)))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xaU)))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xbU)))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xcU)))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xdU)))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xeU)))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xfU)))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P10___nba_sequent__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P10___nba_sequent__TOP__top__DUT__word_en_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 0U)))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 1U)))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 2U)))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 3U)))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 4U)))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 5U)))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 6U)))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 7U)))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 8U)))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 9U)))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 0xaU)))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 0xbU)))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 0xcU)))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 0xdU)))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 0xeU)))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in1), 0xfU)))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in1), 0xfU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__1(Vtop_vc_Mux2__P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P10___nba_comb__TOP__top__DUT__word_en_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0U)))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 1U)))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 2U)))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 3U)))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 4U)))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 5U)))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 6U)))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 7U)))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 8U)))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 9U)))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xaU)))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xbU)))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xcU)))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xdU)))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xeU)))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__out), 0xfU)))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__out), 0xfU)));
    }
}
