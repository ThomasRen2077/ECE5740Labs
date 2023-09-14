// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P40.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__0\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___stl_sequent__TOP__top__src__msg_delay__1\n"); );
    // Body
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__rand_delay_en = ((IData)(vlSelf->__PVT__in_val) 
                                        & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)));
        vlSelf->__PVT__rand_delay_next = ((0U < vlSelf->__PVT__rand_num)
                                           ? (vlSelf->__PVT__rand_num 
                                              - (IData)(1U))
                                           : vlSelf->__PVT__rand_num);
        vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                 & (0U == vlSelf->__PVT__rand_num));
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en 
        = vlSelf->__PVT__rand_delay_en;
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d 
        = vlSelf->__PVT__rand_delay_next;
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0ULL);
}

VL_ATTR_COLD void Vtop_vc_TestRandDelay__P40___configure_coverage(Vtop_vc_TestRandDelay__P40* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "../vc/TestRandDelay.v", 47, 5, "", "v_branch/vc_TestRandDelay__P40", "if", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "../vc/TestRandDelay.v", 47, 6, "", "v_branch/vc_TestRandDelay__P40", "else", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "../vc/TestRandDelay.v", 46, 3, "", "v_line/vc_TestRandDelay__P40", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "../vc/TestRandDelay.v", 92, 5, "", "v_branch/vc_TestRandDelay__P40", "if", "92-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "../vc/TestRandDelay.v", 92, 6, "", "v_branch/vc_TestRandDelay__P40", "else", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "../vc/TestRandDelay.v", 91, 3, "", "v_line/vc_TestRandDelay__P40", "block", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "../vc/TestRandDelay.v", 117, 9, "", "v_branch/vc_TestRandDelay__P40", "if", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[89]), first, "../vc/TestRandDelay.v", 117, 10, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[90]), first, "../vc/TestRandDelay.v", 116, 19, "", "v_line/vc_TestRandDelay__P40", "case", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[91]), first, "../vc/TestRandDelay.v", 126, 9, "", "v_branch/vc_TestRandDelay__P40", "if", "126-127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[92]), first, "../vc/TestRandDelay.v", 126, 10, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[93]), first, "../vc/TestRandDelay.v", 125, 20, "", "v_line/vc_TestRandDelay__P40", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[94]), first, "../vc/TestRandDelay.v", 104, 3, "", "v_line/vc_TestRandDelay__P40", "block", "104,108,110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[95]), first, "../vc/TestRandDelay.v", 142, 19, "", "v_line/vc_TestRandDelay__P40", "case", "142-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[96]), first, "../vc/TestRandDelay.v", 150, 20, "", "v_line/vc_TestRandDelay__P40", "case", "150-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[97]), first, "../vc/TestRandDelay.v", 158, 7, "", "v_line/vc_TestRandDelay__P40", "case", "158-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[98]), first, "../vc/TestRandDelay.v", 138, 3, "", "v_line/vc_TestRandDelay__P40", "block", "138,140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[99]), first, "../vc/TestRandDelay.v", 185, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[100]), first, "../vc/TestRandDelay.v", 185, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[101]), first, "../vc/TestRandDelay.v", 185, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[102]), first, "../vc/TestRandDelay.v", 185, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[103]), first, "../vc/TestRandDelay.v", 186, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[104]), first, "../vc/TestRandDelay.v", 186, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[105]), first, "../vc/TestRandDelay.v", 186, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[106]), first, "../vc/TestRandDelay.v", 186, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[107]), first, "../vc/TestRandDelay.v", 187, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[108]), first, "../vc/TestRandDelay.v", 187, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[109]), first, "../vc/TestRandDelay.v", 187, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[110]), first, "../vc/TestRandDelay.v", 187, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[111]), first, "../vc/TestRandDelay.v", 188, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[112]), first, "../vc/TestRandDelay.v", 188, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[113]), first, "../vc/TestRandDelay.v", 188, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[114]), first, "../vc/TestRandDelay.v", 188, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[115]), first, "../vc/TestRandDelay.v", 189, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[116]), first, "../vc/TestRandDelay.v", 189, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../vc/TestRandDelay.v", 189, 3, "", "v_branch/vc_TestRandDelay__P40", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../vc/TestRandDelay.v", 189, 4, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../vc/TestRandDelay.v", 184, 5, "", "v_branch/vc_TestRandDelay__P40", "if", "184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../vc/TestRandDelay.v", 184, 6, "", "v_branch/vc_TestRandDelay__P40", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../vc/TestRandDelay.v", 183, 3, "", "v_line/vc_TestRandDelay__P40", "block", "183");
}
