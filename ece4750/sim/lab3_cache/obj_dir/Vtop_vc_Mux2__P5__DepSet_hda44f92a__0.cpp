// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P5.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P5___act_comb__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P5___act_comb__TOP__top__DUT__spill_index_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
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

VL_INLINE_OPT void Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__0\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__0(Vtop_vc_Mux2__P5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__1(Vtop_vc_Mux2__P5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P5___nba_sequent__TOP__top__DUT__spill_index_mux__1\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__1(Vtop_vc_Mux2__P5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_Mux2__P5___nba_comb__TOP__top__DUT__spill_index_mux__1\n"); );
    // Body
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
