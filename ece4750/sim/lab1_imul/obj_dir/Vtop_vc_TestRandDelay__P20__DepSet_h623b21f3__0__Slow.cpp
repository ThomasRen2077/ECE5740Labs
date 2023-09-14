// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P20.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__0\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___stl_sequent__TOP__top__sink__msg_delay__1\n"); );
    // Body
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk 
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
                vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en 
        = vlSelf->__PVT__rand_delay_en;
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d 
        = vlSelf->__PVT__rand_delay_next;
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0U);
}

VL_ATTR_COLD void Vtop_vc_TestRandDelay__P20___configure_coverage(Vtop_vc_TestRandDelay__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[117]), first, "../vc/TestRandDelay.v", 47, 5, "", "v_branch/vc_TestRandDelay__P20", "if", "47-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[118]), first, "../vc/TestRandDelay.v", 47, 6, "", "v_branch/vc_TestRandDelay__P20", "else", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[119]), first, "../vc/TestRandDelay.v", 46, 3, "", "v_line/vc_TestRandDelay__P20", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[120]), first, "../vc/TestRandDelay.v", 92, 5, "", "v_branch/vc_TestRandDelay__P20", "if", "92-93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[121]), first, "../vc/TestRandDelay.v", 92, 6, "", "v_branch/vc_TestRandDelay__P20", "else", "95-96");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[122]), first, "../vc/TestRandDelay.v", 91, 3, "", "v_line/vc_TestRandDelay__P20", "block", "91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[123]), first, "../vc/TestRandDelay.v", 117, 9, "", "v_branch/vc_TestRandDelay__P20", "if", "117-118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[124]), first, "../vc/TestRandDelay.v", 117, 10, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[125]), first, "../vc/TestRandDelay.v", 116, 19, "", "v_line/vc_TestRandDelay__P20", "case", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[126]), first, "../vc/TestRandDelay.v", 126, 9, "", "v_branch/vc_TestRandDelay__P20", "if", "126-127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[127]), first, "../vc/TestRandDelay.v", 126, 10, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[128]), first, "../vc/TestRandDelay.v", 125, 20, "", "v_line/vc_TestRandDelay__P20", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[129]), first, "../vc/TestRandDelay.v", 104, 3, "", "v_line/vc_TestRandDelay__P20", "block", "104,108,110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[130]), first, "../vc/TestRandDelay.v", 142, 19, "", "v_line/vc_TestRandDelay__P20", "case", "142-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[131]), first, "../vc/TestRandDelay.v", 150, 20, "", "v_line/vc_TestRandDelay__P20", "case", "150-155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[132]), first, "../vc/TestRandDelay.v", 158, 7, "", "v_line/vc_TestRandDelay__P20", "case", "158-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[133]), first, "../vc/TestRandDelay.v", 138, 3, "", "v_line/vc_TestRandDelay__P20", "block", "138,140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[134]), first, "../vc/TestRandDelay.v", 185, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[135]), first, "../vc/TestRandDelay.v", 185, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[136]), first, "../vc/TestRandDelay.v", 185, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[137]), first, "../vc/TestRandDelay.v", 185, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[138]), first, "../vc/TestRandDelay.v", 186, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[139]), first, "../vc/TestRandDelay.v", 186, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[140]), first, "../vc/TestRandDelay.v", 186, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "186");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[141]), first, "../vc/TestRandDelay.v", 186, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[142]), first, "../vc/TestRandDelay.v", 187, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[143]), first, "../vc/TestRandDelay.v", 187, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[144]), first, "../vc/TestRandDelay.v", 187, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "187");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[145]), first, "../vc/TestRandDelay.v", 187, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[146]), first, "../vc/TestRandDelay.v", 188, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[147]), first, "../vc/TestRandDelay.v", 188, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[148]), first, "../vc/TestRandDelay.v", 188, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[149]), first, "../vc/TestRandDelay.v", 188, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[150]), first, "../vc/TestRandDelay.v", 189, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[151]), first, "../vc/TestRandDelay.v", 189, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[152]), first, "../vc/TestRandDelay.v", 189, 3, "", "v_branch/vc_TestRandDelay__P20", "if", "189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[153]), first, "../vc/TestRandDelay.v", 189, 4, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[154]), first, "../vc/TestRandDelay.v", 184, 5, "", "v_branch/vc_TestRandDelay__P20", "if", "184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[155]), first, "../vc/TestRandDelay.v", 184, 6, "", "v_branch/vc_TestRandDelay__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[156]), first, "../vc/TestRandDelay.v", 183, 3, "", "v_line/vc_TestRandDelay__P20", "block", "183");
}
