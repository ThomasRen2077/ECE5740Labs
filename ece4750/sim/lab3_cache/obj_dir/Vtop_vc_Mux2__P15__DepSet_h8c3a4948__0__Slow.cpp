// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P15.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__0(Vtop_vc_Mux2__P15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__1(Vtop_vc_Mux2__P15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P15___stl_sequent__TOP__top__DUT__Spill_tag_mux__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[1361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__in0, 0x14U)));
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(21, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(21, vlSelf->__PVT__out, 0x14U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P15___configure_coverage(Vtop_vc_Mux2__P15* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P15___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P15", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1362]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1363]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1364]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1365]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1366]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1367]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1368]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1369]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1370]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1371]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1372]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1373]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1374]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1375]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1376]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1377]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1378]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1379]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1380]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P15", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1381]), first, "../vc/muxes.v", 17, 30, "", "v_toggle/vc_Mux2__P15", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1382]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1383]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1384]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1385]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1386]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1387]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1388]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1389]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1390]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1391]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1392]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1393]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1394]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1395]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1396]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1397]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1398]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1399]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1400]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1401]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1402]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P15", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1403]), first, "../vc/muxes.v", 24, 12, "", "v_line/vc_Mux2__P15", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1404]), first, "../vc/muxes.v", 25, 12, "", "v_line/vc_Mux2__P15", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1405]), first, "../vc/muxes.v", 26, 7, "", "v_line/vc_Mux2__P15", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1406]), first, "../vc/muxes.v", 21, 3, "", "v_line/vc_Mux2__P15", "block", "21-23");
}
