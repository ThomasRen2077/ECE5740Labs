// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulAlt.h"

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___ico_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___ico_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSymsp->TOP__top__imul__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___act_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___act_comb__TOP__top__imul__0\n"); );
    // Body
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSelf->__Vcellinp__Add____pinNumber2 = (vlSelf->__PVT__a 
                                             << (IData)(vlSelf->__PVT__i));
    vlSymsp->TOP__top__imul__Add.__PVT__in1 = vlSelf->__Vcellinp__Add____pinNumber2;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___act_sequent__TOP__top__imul__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h2aad60cd__0;
    // Body
    vlSelf->__PVT__add_result = vlSymsp->TOP__top__imul__Add.__PVT__out;
    vlSelf->__PVT__next_a = vlSelf->__PVT__a;
    vlSelf->__PVT__next_b = vlSelf->__PVT__b;
    vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
    vlSelf->__PVT__next_finish = vlSelf->__PVT__finish;
    if (((IData)(vlSelf->__PVT__istream_val) & (IData)(vlSelf->__PVT__istream_rdy))) {
        vlSelf->__PVT__next_a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
        vlSelf->__PVT__next_b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
        vlSelf->__PVT__next_ostream_msg = 0U;
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__finish) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__i = 0U;
        {
            while (1U) {
                if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, (IData)(vlSelf->__PVT__i)))) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x1fU == (IData)(vlSelf->__PVT__i))) {
                    goto __Vlabel1;
                } else {
                    vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
                __Vtemp_h2aad60cd__0 = (0x1fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__i)));
                vlSelf->__PVT__i = __Vtemp_h2aad60cd__0;
            }
            __Vlabel1: ;
        }
        if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, (IData)(vlSelf->__PVT__i)))) {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__add_result;
            vlSelf->__PVT__next_a = ((0x1fU >= ((IData)(1U) 
                                                + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      ? (vlSelf->__PVT__a 
                                         << ((IData)(1U) 
                                             + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      : 0U);
            vlSelf->__PVT__next_b = ((0x1fU >= ((IData)(1U) 
                                                + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      ? (vlSelf->__PVT__b 
                                         >> ((IData)(1U) 
                                             + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      : 0U);
            vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
            vlSelf->__PVT__next_finish = 1U;
            vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__finish) & (~ ((IData)(vlSelf->__PVT__ostream_val) 
                                              & (IData)(vlSelf->__PVT__ostream_rdy))))) {
        vlSelf->__PVT__next_ostream_val = 1U;
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__next_ostream_val = 0U;
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___nba_sequent__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___nba_sequent__TOP__top__imul__0\n"); );
    // Body
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__ostream_val = vlSelf->__PVT__ostream_val;
    vlSelf->__Vdly__b = vlSelf->__PVT__b;
    vlSelf->__Vdly__finish = vlSelf->__PVT__finish;
    vlSelf->__Vdly__a = vlSelf->__PVT__a;
    vlSelf->__Vdly__ostream_msg = vlSelf->__PVT__ostream_msg;
    vlSelf->__Vdly__istream_rdy = vlSelf->__PVT__istream_rdy;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
    } else {
        if ((0U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__Vdly__a = vlSelf->__PVT__next_a;
            vlSelf->__Vdly__b = vlSelf->__PVT__next_b;
            vlSelf->__Vdly__ostream_msg = vlSelf->__PVT__next_ostream_msg;
            vlSelf->__Vdly__ostream_val = vlSelf->__PVT__next_ostream_val;
            vlSelf->__Vdly__finish = 0U;
            vlSelf->__Vdly__istream_rdy = 1U;
            if (vlSelf->__PVT__istream_val) {
                vlSelf->__Vdly__istream_rdy = 0U;
                vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        } else if ((1U == (IData)(vlSelf->__PVT__state))) {
            vlSelf->__Vdly__a = vlSelf->__PVT__next_a;
            vlSelf->__Vdly__b = vlSelf->__PVT__next_b;
            vlSelf->__Vdly__ostream_msg = vlSelf->__PVT__next_ostream_msg;
            vlSelf->__Vdly__ostream_val = vlSelf->__PVT__next_ostream_val;
            vlSelf->__Vdly__finish = vlSelf->__PVT__next_finish;
            vlSelf->__Vdly__istream_rdy = 0U;
            vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__Vdly__ostream_val = vlSelf->__PVT__next_ostream_val;
            if (((IData)(vlSelf->__PVT__ostream_val) 
                 & (IData)(vlSelf->__PVT__ostream_rdy))) {
                vlSelf->__Vdly__finish = 0U;
                vlSelf->__Vdly__istream_rdy = 1U;
                vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->__Vdly__state = vlSelf->__PVT__nextstate;
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__b = vlSelf->__Vdly__b;
    vlSelf->__PVT__finish = vlSelf->__Vdly__finish;
    vlSelf->__PVT__a = vlSelf->__Vdly__a;
    vlSelf->__PVT__ostream_msg = vlSelf->__Vdly__ostream_msg;
    vlSelf->__PVT__ostream_val = vlSelf->__Vdly__ostream_val;
    vlSelf->__PVT__istream_rdy = vlSelf->__Vdly__istream_rdy;
    vlSymsp->TOP__top__imul__Add.__PVT__in0 = vlSelf->__PVT__ostream_msg;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__0(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__0\n"); );
    // Body
    vlSelf->__Vcellinp__Add____pinNumber2 = (vlSelf->__PVT__a 
                                             << (IData)(vlSelf->__PVT__i));
    vlSymsp->TOP__top__imul__Add.__PVT__in1 = vlSelf->__Vcellinp__Add____pinNumber2;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__1(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__1\n"); );
    // Body
    vlSelf->__PVT__add_result = vlSymsp->TOP__top__imul__Add.__PVT__out;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__2(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__2\n"); );
    // Body
    vlSymsp->TOP__top__imul__vc_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__3(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__3\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__istream_val) {
            vlSelf->__PVT__nextstate = 1U;
            vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 0U;
            vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__finish) {
            vlSelf->__PVT__nextstate = 2U;
            vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 1U;
            vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
    } else {
        if (vlSelf->__PVT__ostream_rdy) {
            vlSelf->__PVT__nextstate = 0U;
            vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__nextstate = 2U;
            vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__4(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab1_imul_IntMulAlt___nba_comb__TOP__top__imul__4\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h2aad60cd__0;
    // Body
    vlSelf->__PVT__next_a = vlSelf->__PVT__a;
    vlSelf->__PVT__next_b = vlSelf->__PVT__b;
    vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
    vlSelf->__PVT__next_finish = vlSelf->__PVT__finish;
    if (((IData)(vlSelf->__PVT__istream_val) & (IData)(vlSelf->__PVT__istream_rdy))) {
        vlSelf->__PVT__next_a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
        vlSelf->__PVT__next_b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
        vlSelf->__PVT__next_ostream_msg = 0U;
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__finish) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__i = 0U;
        {
            while (1U) {
                if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, (IData)(vlSelf->__PVT__i)))) {
                    goto __Vlabel2;
                } else {
                    vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
                }
                if ((0x1fU == (IData)(vlSelf->__PVT__i))) {
                    goto __Vlabel2;
                } else {
                    vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
                __Vtemp_h2aad60cd__0 = (0x1fU & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__i)));
                vlSelf->__PVT__i = __Vtemp_h2aad60cd__0;
            }
            __Vlabel2: ;
        }
        if ((1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, (IData)(vlSelf->__PVT__i)))) {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__add_result;
            vlSelf->__PVT__next_a = ((0x1fU >= ((IData)(1U) 
                                                + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      ? (vlSelf->__PVT__a 
                                         << ((IData)(1U) 
                                             + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      : 0U);
            vlSelf->__PVT__next_b = ((0x1fU >= ((IData)(1U) 
                                                + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      ? (vlSelf->__PVT__b 
                                         >> ((IData)(1U) 
                                             + VL_EXTEND_II(32,5, (IData)(vlSelf->__PVT__i))))
                                      : 0U);
            vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__next_ostream_msg = vlSelf->__PVT__ostream_msg;
            vlSelf->__PVT__next_finish = 1U;
            vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__finish) & (~ ((IData)(vlSelf->__PVT__ostream_val) 
                                              & (IData)(vlSelf->__PVT__ostream_rdy))))) {
        vlSelf->__PVT__next_ostream_val = 1U;
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__next_ostream_val = 0U;
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
}
