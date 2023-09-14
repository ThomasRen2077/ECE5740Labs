// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_he0b919e8__0;
    IData/*31:0*/ __Vtemp_h489dbb1e__0;
    IData/*31:0*/ __Vtemp_ha712a853__0;
    IData/*31:0*/ __Vtemp_hb3b013f4__0;
    IData/*31:0*/ __Vtemp_ha712a853__1;
    IData/*31:0*/ __Vtemp_h8bb863d8__0;
    IData/*31:0*/ __Vtemp_h489dbb1e__1;
    IData/*31:0*/ __Vtemp_ha712a853__2;
    IData/*31:0*/ __Vtemp_hb3b013f4__1;
    IData/*31:0*/ __Vtemp_ha712a853__3;
    IData/*31:0*/ __Vtemp_h8bb863d8__1;
    IData/*31:0*/ __Vtemp_h489dbb1e__2;
    IData/*31:0*/ __Vtemp_ha712a853__4;
    IData/*31:0*/ __Vtemp_hb3b013f4__2;
    IData/*31:0*/ __Vtemp_ha712a853__5;
    IData/*31:0*/ __Vtemp_h8bb863d8__2;
    IData/*31:0*/ __Vtemp_h489dbb1e__3;
    IData/*31:0*/ __Vtemp_ha712a853__6;
    IData/*31:0*/ __Vtemp_hb3b013f4__3;
    IData/*31:0*/ __Vtemp_ha712a853__7;
    IData/*31:0*/ __Vtemp_h8bb863d8__3;
    IData/*31:0*/ __Vtemp_h489dbb1e__4;
    IData/*31:0*/ __Vtemp_ha712a853__8;
    IData/*31:0*/ __Vtemp_hb3b013f4__4;
    IData/*31:0*/ __Vtemp_h489dbb1e__5;
    IData/*31:0*/ __Vtemp_ha712a853__9;
    IData/*31:0*/ __Vtemp_hb3b013f4__5;
    IData/*31:0*/ __Vtemp_h489dbb1e__6;
    IData/*31:0*/ __Vtemp_ha712a853__10;
    IData/*31:0*/ __Vtemp_hb3b013f4__6;
    IData/*31:0*/ __Vtemp_he0b919e8__1;
    IData/*31:0*/ __Vtemp_h489dbb1e__7;
    IData/*31:0*/ __Vtemp_ha712a853__11;
    IData/*31:0*/ __Vtemp_hb3b013f4__7;
    IData/*31:0*/ __Vtemp_ha712a853__12;
    IData/*31:0*/ __Vtemp_h8bb863d8__4;
    IData/*31:0*/ __Vtemp_h489dbb1e__8;
    IData/*31:0*/ __Vtemp_ha712a853__13;
    IData/*31:0*/ __Vtemp_hb3b013f4__8;
    IData/*31:0*/ __Vtemp_ha712a853__14;
    IData/*31:0*/ __Vtemp_h8bb863d8__5;
    IData/*31:0*/ __Vtemp_h489dbb1e__9;
    IData/*31:0*/ __Vtemp_ha712a853__15;
    IData/*31:0*/ __Vtemp_hb3b013f4__9;
    IData/*31:0*/ __Vtemp_ha712a853__16;
    IData/*31:0*/ __Vtemp_h8bb863d8__6;
    IData/*31:0*/ __Vtemp_h489dbb1e__10;
    IData/*31:0*/ __Vtemp_ha712a853__17;
    IData/*31:0*/ __Vtemp_hb3b013f4__10;
    IData/*31:0*/ __Vtemp_ha712a853__18;
    IData/*31:0*/ __Vtemp_h8bb863d8__7;
    IData/*31:0*/ __Vtemp_hfe78baa0__0;
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul_RandDelay.v", 
                                                                114);
        vlSymsp->TOP.__Vm_traceActivity[0xfU] = 1U;
        if (vlSelf->linetrace) {
            VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0x1ffU);
            if (VL_UNLIKELY((0U < (IData)(vlSymsp->TOP__top__imul__vc_trace.__PVT__level)))) {
                VL_WRITEF("%4d: ",32,vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles);
                VL_SFORMAT_X(4096,vlSymsp->TOP__top__imul.__PVT__str
                             ,"%x",64,vlSymsp->TOP__top__imul.__PVT__istream_msg);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__2__str, vlSymsp->TOP__top__imul.__PVT__str);
                vlSelf->__Vtask_append_val_rdy_str__2__rdy 
                    = vlSymsp->TOP__top__imul.__PVT__istream_rdy;
                vlSelf->__Vtask_append_val_rdy_str__2__val 
                    = vlSymsp->TOP__top__imul.__PVT__istream_val;
                vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 = 0U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_val_rdy_str__2__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len1), 0U, 0xcU)), 8U)))) {
                    __Vtemp_he0b919e8__0 = ((IData)(1U) 
                                            + vlSymsp->TOP__top__imul__vc_trace.__PVT__len1);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                        = __Vtemp_he0b919e8__0;
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__2__rdy) 
                                 & (IData)(vlSelf->__Vtask_append_val_rdy_str__2__val)))) {
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__3__str, vlSelf->__Vtask_append_val_rdy_str__2__str);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__3__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__0 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__0;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__3__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__3__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__0 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__0;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__0 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__0;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__2__rdy) 
                                        & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__2__val))))) {
                    vlSelf->__Vtask_append_chars__4__num 
                        = vlSymsp->TOP__top__imul__vc_trace.__PVT__len1;
                    vlSelf->__Vtask_append_chars__4__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__4__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__4__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__4__char);
                        __Vtemp_ha712a853__1 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__1;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__0 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__0;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__2__rdy)) 
                                        & (IData)(vlSelf->__Vtask_append_val_rdy_str__2__val)))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__5__str,0x00000023);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__5__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__1 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__1;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__5__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__5__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__2 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__2;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__1 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__1;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->__Vtask_append_chars__6__num 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__6__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__6__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__6__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__6__char);
                        __Vtemp_ha712a853__3 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__3;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__1 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__1;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__2__rdy)) 
                                  & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__2__val))))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__7__str,0x0000002e);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__7__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__2 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__2;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__7__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__7__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__4 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__4;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__2 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__2;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->__Vtask_append_chars__8__num 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__8__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__8__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__8__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__8__char);
                        __Vtemp_ha712a853__5 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__5;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__2 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__2;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__9__str,0x00000078);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__9__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__3 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__3;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__9__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__9__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__6 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__6;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__3 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__3;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->__Vtask_append_chars__10__num 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__10__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__10__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__10__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__10__char);
                        __Vtemp_ha712a853__7 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__7;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__3 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__3;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__11__str,0x00000028);
                vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__11__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                    __Vtemp_h489dbb1e__4 = ((IData)(1U) 
                                            + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                        = __Vtemp_h489dbb1e__4;
                    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                    = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                    = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                    (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__11__str, 
                                                         (0xfffU 
                                                          & VL_SEL_IIII(32, 
                                                                        VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__11__str, 
                                                          (0xfffU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    __Vtemp_ha712a853__8 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = __Vtemp_ha712a853__8;
                    vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_hb3b013f4__4 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__4;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                if ((0U == (IData)(vlSymsp->TOP__top__imul.__PVT__state))) {
                    VL_SFORMAT_X(4096,vlSymsp->TOP__top__imul.__PVT__str
                                 ,"IDLE");
                } else if ((1U == (IData)(vlSymsp->TOP__top__imul.__PVT__state))) {
                    VL_SFORMAT_X(4096,vlSymsp->TOP__top__imul.__PVT__str
                                 ,"CALC");
                } else if ((2U == (IData)(vlSymsp->TOP__top__imul.__PVT__state))) {
                    VL_SFORMAT_X(4096,vlSymsp->TOP__top__imul.__PVT__str
                                 ,"DONE");
                } else {
                    VL_SFORMAT_X(4096,vlSymsp->TOP__top__imul.__PVT__str
                                 ,"UNKNOWN");
                }
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__12__str, vlSymsp->TOP__top__imul.__PVT__str);
                vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__12__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                    __Vtemp_h489dbb1e__5 = ((IData)(1U) 
                                            + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                        = __Vtemp_h489dbb1e__5;
                    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                    = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                    = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                    (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__12__str, 
                                                         (0xfffU 
                                                          & VL_SEL_IIII(32, 
                                                                        VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__12__str, 
                                                          (0xfffU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    __Vtemp_ha712a853__9 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = __Vtemp_ha712a853__9;
                    vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_hb3b013f4__5 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__5;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__13__str,0x00000029);
                vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__13__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                    __Vtemp_h489dbb1e__6 = ((IData)(1U) 
                                            + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                        = __Vtemp_h489dbb1e__6;
                    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                    = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                    = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_SEL_IIII(32, 
                                                          VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                    (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__13__str, 
                                                         (0xfffU 
                                                          & VL_SEL_IIII(32, 
                                                                        VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__13__str, 
                                                          (0xfffU 
                                                           & VL_SEL_IIII(32, 
                                                                         VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                    __Vtemp_ha712a853__10 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                             - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = __Vtemp_ha712a853__10;
                    vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_hb3b013f4__6 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__6;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSymsp->TOP__top__imul.__PVT__str
                             ,"%x",32,vlSymsp->TOP__top__imul.__PVT__ostream_msg);
                VL_ASSIGN_W(4096,vlSelf->__Vtask_append_val_rdy_str__14__str, vlSymsp->TOP__top__imul.__PVT__str);
                vlSelf->__Vtask_append_val_rdy_str__14__rdy 
                    = vlSymsp->TOP__top__imul.__PVT__ostream_rdy;
                vlSelf->__Vtask_append_val_rdy_str__14__val 
                    = vlSymsp->TOP__top__imul.__PVT__ostream_val;
                vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 = 0U;
                while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_val_rdy_str__14__str, 
                                                   (0xfffU 
                                                    & VL_SEL_IIII(32, 
                                                                  VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len1), 0U, 0xcU)), 8U)))) {
                    __Vtemp_he0b919e8__1 = ((IData)(1U) 
                                            + vlSymsp->TOP__top__imul__vc_trace.__PVT__len1);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                        = __Vtemp_he0b919e8__1;
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__14__rdy) 
                                 & (IData)(vlSelf->__Vtask_append_val_rdy_str__14__val)))) {
                    VL_ASSIGN_W(4096,vlSelf->__Vtask_append_str__15__str, vlSelf->__Vtask_append_val_rdy_str__14__str);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__15__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__7 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__7;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__15__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__15__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__11 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__11;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__7 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__7;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(vlSelf->__Vtask_append_val_rdy_str__14__rdy) 
                                        & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__14__val))))) {
                    vlSelf->__Vtask_append_chars__16__num 
                        = vlSymsp->TOP__top__imul__vc_trace.__PVT__len1;
                    vlSelf->__Vtask_append_chars__16__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__16__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__16__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__16__char);
                        __Vtemp_ha712a853__12 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__12;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__4 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__4;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__14__rdy)) 
                                        & (IData)(vlSelf->__Vtask_append_val_rdy_str__14__val)))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__17__str,0x00000023);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__17__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__8 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__8;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__17__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__17__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__13 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__13;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__8 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__8;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->__Vtask_append_chars__18__num 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__18__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__18__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__18__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__18__char);
                        __Vtemp_ha712a853__14 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__14;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__5 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__5;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(vlSelf->__Vtask_append_val_rdy_str__14__rdy)) 
                                  & (~ (IData)(vlSelf->__Vtask_append_val_rdy_str__14__val))))) {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__19__str,0x0000002e);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__19__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__9 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__9;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__19__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__19__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__15 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__15;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__9 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__9;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->__Vtask_append_chars__20__num 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__20__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__20__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__20__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__20__char);
                        __Vtemp_ha712a853__16 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__16;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__6 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__6;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,vlSelf->__Vtask_append_str__21__str,0x00000078);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 = 1U;
                    while ((0U != (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__21__str, 
                                                       (0xfffU 
                                                        & VL_SEL_IIII(32, 
                                                                      VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__len0), 0U, 0xcU)), 8U)))) {
                        __Vtemp_h489dbb1e__10 = ((IData)(1U) 
                                                 + vlSymsp->TOP__top__imul__vc_trace.__PVT__len0);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                            = __Vtemp_h489dbb1e__10;
                        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 
                                        (0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__21__str, 
                                                             (0xfffU 
                                                              & VL_SEL_IIII(32, 
                                                                            VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        VL_WRITEF("%c",8,(0xffU & VL_SEL_IWII(4096, vlSelf->__Vtask_append_str__21__str, 
                                                              (0xfffU 
                                                               & VL_SEL_IIII(32, 
                                                                             VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1), 0U, 0xcU)), 8U)));
                        __Vtemp_ha712a853__17 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__17;
                        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__10 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__10;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->__Vtask_append_chars__22__num 
                        = (vlSymsp->TOP__top__imul__vc_trace.__PVT__len1 
                           - (IData)(1U));
                    vlSelf->__Vtask_append_chars__22__char = 0x20U;
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                        = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1, vlSelf->__Vtask_append_chars__22__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_SEL_IIII(32, 
                                                              VL_MULS_III(32, (IData)(8U), vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0), 0U, 0xcU)), vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSelf->__Vtask_append_chars__22__char);
                        VL_WRITEF("%c",8,vlSelf->__Vtask_append_chars__22__char);
                        __Vtemp_ha712a853__18 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                            = __Vtemp_ha712a853__18;
                        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__7 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__7;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0 
                    = VL_SEL_IWII(4096, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, 0U, 0x20U);
                vlSymsp->TOP__top__imul.__PVT__idx0 
                    = vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0;
                vlSymsp->TOP__top__imul.__PVT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSymsp->TOP__top__imul.__PVT__idx1, vlSymsp->TOP__top__imul.__PVT__idx0)) {
                    __Vtemp_hfe78baa0__0 = (vlSymsp->TOP__top__imul.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul.__PVT__idx1 
                        = __Vtemp_hfe78baa0__0;
                }
                VL_WRITEF("\n");
            }
            vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles_next 
                = ((IData)(1U) + vlSymsp->TOP__top__imul__vc_trace.__PVT__cycles);
            vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_IntMul_RandDelay.v", 117, "");
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__1\n"); );
    // Body
    VL_WRITEF("Starting tb_IntMul...\n");
    vlSelf->__PVT__reset = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul_RandDelay.v", 
                                            271);
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul_RandDelay.v", 
                                                            272);
    vlSelf->__PVT__reset = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__snk_done)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul_RandDelay.v", 
                                                                276);
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
    }
    if (VL_LIKELY(vlSelf->__PVT__src_done)) {
        VL_WRITEF("The testbench has finished\n");
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_WRITEF("[%0t] %%Error: tb_IntMul_RandDelay.v:280: Assertion failed in %Ntop: [ FAILED ] Our sink received more messages than our source has!\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb_IntMul_RandDelay.v", 280, "");
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x64ULL, 
                                            nullptr, 
                                            "tb_IntMul_RandDelay.v", 
                                            285);
    VL_FINISH_MT("tb_IntMul_RandDelay.v", 286, "");
    vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__2\n"); );
    // Init
    IData/*31:0*/ __Vtemp_h4ad0e429__0;
    // Body
    vlSelf->__PVT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0xf4240U, vlSelf->__PVT__unnamedblk3__DOT__i)) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul_RandDelay.v", 
                                                                297);
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        __Vtemp_h4ad0e429__0 = ((IData)(1U) + vlSelf->__PVT__unnamedblk3__DOT__i);
        vlSelf->__PVT__unnamedblk3__DOT__i = __Vtemp_h4ad0e429__0;
    }
    VL_WRITEF("[%0t] %%Error: tb_IntMul_RandDelay.v:300: Assertion failed in %Ntop: TIMEOUT: Testbench didn't finish in time\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("tb_IntMul_RandDelay.v", 300, "");
    VL_FINISH_MT("tb_IntMul_RandDelay.v", 301, "");
}

VL_INLINE_OPT void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    // Body
    vlSymsp->TOP__top__imul.__PVT__clk = vlSelf->clk;
    vlSymsp->TOP__top__src.__PVT__clk = vlSelf->clk;
    vlSymsp->TOP__top__sink.__PVT__clk = vlSelf->clk;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__0\n"); );
    // Body
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__src_done = vlSymsp->TOP__top__src.__PVT__done;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__snk_done = vlSymsp->TOP__top__sink.__PVT__done;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__ostream_msg = vlSymsp->TOP__top__imul.__PVT__ostream_msg;
    vlSelf->__PVT__ostream_val = vlSymsp->TOP__top__imul.__PVT__ostream_val;
    vlSelf->__PVT__istream_rdy = vlSymsp->TOP__top__imul.__PVT__istream_rdy;
    vlSymsp->TOP__top__sink.__PVT__msg = vlSelf->__PVT__ostream_msg;
    vlSymsp->TOP__top__sink.__PVT__val = vlSelf->__PVT__ostream_val;
    vlSymsp->TOP__top__src.__PVT__rdy = vlSelf->__PVT__istream_rdy;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    // Body
    vlSymsp->TOP__top__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__1\n"); );
    // Body
    vlSelf->__PVT__ostream_rdy = vlSymsp->TOP__top__sink.__PVT__rdy;
    vlSymsp->TOP__top__imul.__PVT__ostream_rdy = vlSelf->__PVT__ostream_rdy;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__2(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__2\n"); );
    // Body
    vlSelf->__PVT__istream_val = vlSymsp->TOP__top__src.__PVT__val;
    vlSymsp->TOP__top__imul.__PVT__istream_val = vlSelf->__PVT__istream_val;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__3(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__3\n"); );
    // Body
    vlSelf->__PVT__istream_msg = vlSymsp->TOP__top__src.__PVT__msg;
    vlSymsp->TOP__top__imul.__PVT__istream_msg = vlSelf->__PVT__istream_msg;
}
