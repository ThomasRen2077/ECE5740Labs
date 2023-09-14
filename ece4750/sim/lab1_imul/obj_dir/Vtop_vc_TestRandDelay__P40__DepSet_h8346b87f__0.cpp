// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P40.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___ico_sequent__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___ico_sequent__TOP__top__src__msg_delay__0\n"); );
    // Body
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___act_comb__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___act_comb__TOP__top__src__msg_delay__0\n"); );
    // Body
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___nba_sequent__TOP__top__src__msg_delay__1\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__q;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__1\n"); );
    // Body
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__2(Vtop_vc_TestRandDelay__P40* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P40___nba_comb__TOP__top__src__msg_delay__2\n"); );
    // Body
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__en 
        = vlSelf->__PVT__rand_delay_en;
    vlSymsp->TOP__top__src__msg_delay__rand_delay_reg.__PVT__d 
        = vlSelf->__PVT__rand_delay_next;
}
