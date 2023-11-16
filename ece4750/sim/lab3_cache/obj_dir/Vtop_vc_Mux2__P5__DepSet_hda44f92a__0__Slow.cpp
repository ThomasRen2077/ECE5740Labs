// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P5.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P5___stl_sequent__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P5___stl_sequent__TOP__top__DUT__spill_index_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in1), 0U)))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in1), 1U)))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in1), 2U)))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in1), 3U)))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in1), 4U)))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in1), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in0), 0U)))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in0), 1U)))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in0), 2U)))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in0), 3U)))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__in0), 4U)))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__in0), 4U)));
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__out), 0U)))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__out), 1U)))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__out), 2U)))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__out), 3U)))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__out), 4U)))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__out), 4U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P5___configure_coverage(Vtop_vc_Mux2__P5* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P5___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1319]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P5", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1320]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P5", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1321]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P5", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P5", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P5", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P5", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P5", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P5", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P5", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P5", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "../vc/muxes.v", 17, 30, "", "v_toggle/vc_Mux2__P5", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P5", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P5", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P5", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P5", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P5", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "../vc/muxes.v", 24, 12, "", "v_line/vc_Mux2__P5", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "../vc/muxes.v", 25, 12, "", "v_line/vc_Mux2__P5", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "../vc/muxes.v", 26, 7, "", "v_line/vc_Mux2__P5", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "../vc/muxes.v", 21, 3, "", "v_line/vc_Mux2__P5", "block", "21-23");
}
