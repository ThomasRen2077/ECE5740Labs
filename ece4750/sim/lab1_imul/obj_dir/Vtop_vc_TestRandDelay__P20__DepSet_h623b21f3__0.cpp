// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P20.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___ico_sequent__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___ico_sequent__TOP__top__sink__msg_delay__0\n"); );
    // Body
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___act_comb__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___act_comb__TOP__top__sink__msg_delay__0\n"); );
    // Body
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__1\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__q;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__1\n"); );
    // Body
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__2(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__2\n"); );
    // Body
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__en 
        = vlSelf->__PVT__rand_delay_en;
    vlSymsp->TOP__top__sink__msg_delay__rand_delay_reg.__PVT__d 
        = vlSelf->__PVT__rand_delay_next;
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0U);
}
