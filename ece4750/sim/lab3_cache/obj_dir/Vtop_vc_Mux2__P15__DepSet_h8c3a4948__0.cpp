// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P15.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__0(Vtop_vc_Mux2__P15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__1(Vtop_vc_Mux2__P15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P15___act_comb__TOP__top__DUT__Spill_tag_mux__1\n"); );
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

VL_INLINE_OPT void Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__0(Vtop_vc_Mux2__P15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__1(Vtop_vc_Mux2__P15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P15___nba_comb__TOP__top__DUT__Spill_tag_mux__1\n"); );
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
