// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P10.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P10___stl_sequent__TOP__top__DUT__word_en_mux__0(Vtop_vc_Mux2__P10* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P10___stl_sequent__TOP__top__DUT__word_en_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 0U)))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 1U)))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 2U)))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 3U)))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 4U)))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 5U)))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 6U)))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 7U)))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 8U)))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 9U)))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 0xaU)))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 0xbU)))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 0xcU)))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 0xdU)))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 0xeU)))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__in0), 0xfU)))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__in0), 0xfU)));
    }
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
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

VL_ATTR_COLD void Vtop_vc_Mux2__P10___configure_coverage(Vtop_vc_Mux2__P10* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P10___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1412]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1413]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1414]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1415]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1416]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1417]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1418]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1419]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1420]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1421]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1422]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1423]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1424]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1425]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1426]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1427]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P10", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1428]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1429]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1430]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1431]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1432]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1433]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1434]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1435]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1436]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1437]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1438]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1439]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1440]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1441]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1442]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1443]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P10", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1444]), first, "../vc/muxes.v", 17, 30, "", "v_toggle/vc_Mux2__P10", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1445]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1446]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1447]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1448]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1449]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1450]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1451]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1452]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1453]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1454]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1455]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1456]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1457]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1458]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1459]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1460]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P10", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1461]), first, "../vc/muxes.v", 24, 12, "", "v_line/vc_Mux2__P10", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1462]), first, "../vc/muxes.v", 25, 12, "", "v_line/vc_Mux2__P10", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1463]), first, "../vc/muxes.v", 26, 7, "", "v_line/vc_Mux2__P10", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1464]), first, "../vc/muxes.v", 21, 3, "", "v_line/vc_Mux2__P10", "block", "21-23");
}
