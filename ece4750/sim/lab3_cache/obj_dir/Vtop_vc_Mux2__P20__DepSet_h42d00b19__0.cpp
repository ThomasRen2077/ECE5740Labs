// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P20.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__z6b_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__z6b_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__z6b_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__z6b_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__z6b_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__2(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___act_comb__TOP__top__DUT__Spill_or_Refill_Mux__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__2(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__Spill_or_Refill_Mux__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}
