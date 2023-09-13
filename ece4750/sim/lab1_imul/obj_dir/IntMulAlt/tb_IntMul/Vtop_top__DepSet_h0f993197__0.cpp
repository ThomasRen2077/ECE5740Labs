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
                                                                "tb_IntMul.v", 
                                                                71);
        vlSymsp->TOP.__Vm_traceActivity[7U] = 1U;
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
                    vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__0 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__0;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__0 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__0;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__1 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__1;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__1 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__1;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__2 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__2;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__2 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__2;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__3 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__3;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__3 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__3;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_hb3b013f4__4 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__4;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_hb3b013f4__5 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__5;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                    __Vtemp_hb3b013f4__6 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__6;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                    vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__7 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__7;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__4 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__4;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__8 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__8;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__5 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__5;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__9 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__9;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__6 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__6;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_hb3b013f4__10 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__10;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
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
                        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                        __Vtemp_h8bb863d8__7 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__7;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("tb_IntMul.v", 76, "");
    vlSymsp->TOP.__Vm_traceActivity[7U] = 1U;
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop_top___eval_initial__TOP__top__1(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___eval_initial__TOP__top__1\n"); );
    // Body
    VL_WRITEF("Start of Testbench\n");
    vlSelf->__PVT__reset = 1U;
    vlSelf->__PVT__istream_msg_a = 0U;
    vlSelf->__PVT__istream_msg_b = 0U;
    vlSelf->__PVT__istream_val = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            93);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__reset = 0U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            101);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            102);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Example Test #1\n");
    vlSelf->__PVT__istream_msg_a = 2U;
    vlSelf->__PVT__istream_msg_b = 3U;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                116);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            117);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                120);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            121);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((6U == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__PVT__istream_msg_a,
                          32,vlSelf->__PVT__istream_msg_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:131: Assertion failed in %Ntop: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__PVT__istream_msg_a,
                      32,vlSelf->__PVT__istream_msg_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 131, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            135);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            136);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Example Test #2\n");
    vlSelf->__PVT__istream_msg_a = 4U;
    vlSelf->__PVT__istream_msg_b = 5U;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                150);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            151);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                154);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            155);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x14U == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__PVT__istream_msg_a,
                          32,vlSelf->__PVT__istream_msg_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:165: Assertion failed in %Ntop: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__PVT__istream_msg_a,
                      32,vlSelf->__PVT__istream_msg_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 165, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            169);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            170);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Example Test #3\n");
    vlSelf->__PVT__istream_msg_a = 3U;
    vlSelf->__PVT__istream_msg_b = 4U;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                184);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            185);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                188);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            189);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xcU == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__PVT__istream_msg_a,
                          32,vlSelf->__PVT__istream_msg_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:199: Assertion failed in %Ntop: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__PVT__istream_msg_a,
                      32,vlSelf->__PVT__istream_msg_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 199, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            203);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            204);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Example Test #4\n");
    vlSelf->__PVT__istream_msg_a = 0xaU;
    vlSelf->__PVT__istream_msg_b = 0xdU;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                218);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            220);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                224);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            225);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x82U == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__PVT__istream_msg_a,
                          32,vlSelf->__PVT__istream_msg_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:236: Assertion failed in %Ntop: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__PVT__istream_msg_a,
                      32,vlSelf->__PVT__istream_msg_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 236, "");
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            240);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            241);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Example Test #5\n");
    vlSelf->__Vtask_test_task__31__input_b = 7U;
    vlSelf->__Vtask_test_task__31__input_a = 8U;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__31__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__31__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__31__input_a, vlSelf->__Vtask_test_task__31__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__31__input_a,
                          32,vlSelf->__Vtask_test_task__31__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__31__input_a,
                      32,vlSelf->__Vtask_test_task__31__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            252);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Random Test\n");
    vlSelf->__Vtask_test_task__34__input_b = VL_RANDOM_I();
    vlSelf->__Vtask_test_task__34__input_a = VL_RANDOM_I();
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__34__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__34__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__34__input_a, vlSelf->__Vtask_test_task__34__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__34__input_a,
                          32,vlSelf->__Vtask_test_task__34__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__34__input_a,
                      32,vlSelf->__Vtask_test_task__34__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 1U;
    vlSelf->__Vtask_test_task__34__input_b = VL_RANDOM_I();
    vlSelf->__Vtask_test_task__34__input_a = VL_RANDOM_I();
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__34__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__34__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__34__input_a, vlSelf->__Vtask_test_task__34__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__34__input_a,
                          32,vlSelf->__Vtask_test_task__34__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__34__input_a,
                      32,vlSelf->__Vtask_test_task__34__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 2U;
    vlSelf->__Vtask_test_task__34__input_b = VL_RANDOM_I();
    vlSelf->__Vtask_test_task__34__input_a = VL_RANDOM_I();
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__34__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__34__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__34__input_a, vlSelf->__Vtask_test_task__34__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__34__input_a,
                          32,vlSelf->__Vtask_test_task__34__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__34__input_a,
                      32,vlSelf->__Vtask_test_task__34__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 3U;
    vlSelf->__Vtask_test_task__34__input_b = VL_RANDOM_I();
    vlSelf->__Vtask_test_task__34__input_a = VL_RANDOM_I();
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__34__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__34__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__34__input_a, vlSelf->__Vtask_test_task__34__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__34__input_a,
                          32,vlSelf->__Vtask_test_task__34__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__34__input_a,
                      32,vlSelf->__Vtask_test_task__34__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 4U;
    vlSelf->__Vtask_test_task__34__input_b = VL_RANDOM_I();
    vlSelf->__Vtask_test_task__34__input_a = VL_RANDOM_I();
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__34__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__34__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__34__input_a, vlSelf->__Vtask_test_task__34__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__34__input_a,
                          32,vlSelf->__Vtask_test_task__34__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__34__input_a,
                      32,vlSelf->__Vtask_test_task__34__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__unnamedblk1__DOT__x = 5U;
    VL_WRITEF("Multiply by zero\n");
    vlSelf->__PVT__a = 0U;
    vlSelf->__PVT__b = 0x12345678U;
    vlSelf->__Vtask_test_task__37__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__37__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__37__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__37__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__37__input_a, vlSelf->__Vtask_test_task__37__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__37__input_a,
                          32,vlSelf->__Vtask_test_task__37__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__37__input_a,
                      32,vlSelf->__Vtask_test_task__37__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Multiply by one\n");
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 0x12345678U;
    vlSelf->__Vtask_test_task__40__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__40__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__40__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__40__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__40__input_a, vlSelf->__Vtask_test_task__40__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__40__input_a,
                          32,vlSelf->__Vtask_test_task__40__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__40__input_a,
                      32,vlSelf->__Vtask_test_task__40__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Multiply by negative one\n");
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 0x12345678U;
    vlSelf->__Vtask_test_task__43__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__43__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__43__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__43__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__43__input_a, vlSelf->__Vtask_test_task__43__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__43__input_a,
                          32,vlSelf->__Vtask_test_task__43__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__43__input_a,
                      32,vlSelf->__Vtask_test_task__43__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Mask off the low 16 bits of a and b\n");
    vlSelf->__PVT__a = 0x12340000U;
    vlSelf->__PVT__b = 0x56780000U;
    vlSelf->__Vtask_test_task__46__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__46__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__46__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__46__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__46__input_a, vlSelf->__Vtask_test_task__46__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__46__input_a,
                          32,vlSelf->__Vtask_test_task__46__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__46__input_a,
                      32,vlSelf->__Vtask_test_task__46__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Mask off the middle 16 bits of a and b\n");
    vlSelf->__PVT__a = 0x34000056U;
    vlSelf->__PVT__b = 0x12000034U;
    vlSelf->__Vtask_test_task__49__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__49__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__49__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__49__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__49__input_a, vlSelf->__Vtask_test_task__49__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__49__input_a,
                          32,vlSelf->__Vtask_test_task__49__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__49__input_a,
                      32,vlSelf->__Vtask_test_task__49__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Sparse numbers\n");
    vlSelf->__PVT__a = 0x10000001U;
    vlSelf->__PVT__b = 0x80000001U;
    vlSelf->__Vtask_test_task__52__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__52__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__52__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__52__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__52__input_a, vlSelf->__Vtask_test_task__52__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__52__input_a,
                          32,vlSelf->__Vtask_test_task__52__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__52__input_a,
                      32,vlSelf->__Vtask_test_task__52__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0x10010001U;
    vlSelf->__PVT__b = 0x80001001U;
    vlSelf->__Vtask_test_task__55__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__55__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__55__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__55__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__55__input_a, vlSelf->__Vtask_test_task__55__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__55__input_a,
                          32,vlSelf->__Vtask_test_task__55__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__55__input_a,
                      32,vlSelf->__Vtask_test_task__55__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Dense numbers\n");
    vlSelf->__PVT__a = 0xfffffffeU;
    vlSelf->__PVT__b = 0x7fffffffU;
    vlSelf->__Vtask_test_task__58__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__58__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__58__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__58__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__58__input_a, vlSelf->__Vtask_test_task__58__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__58__input_a,
                          32,vlSelf->__Vtask_test_task__58__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__58__input_a,
                      32,vlSelf->__Vtask_test_task__58__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0xfffcfffeU;
    vlSelf->__PVT__b = 0x7ffbffffU;
    vlSelf->__Vtask_test_task__61__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__61__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__61__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__61__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__61__input_a, vlSelf->__Vtask_test_task__61__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__61__input_a,
                          32,vlSelf->__Vtask_test_task__61__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__61__input_a,
                      32,vlSelf->__Vtask_test_task__61__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Corner Case\n");
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 0xffffffffU;
    vlSelf->__Vtask_test_task__64__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__64__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__64__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__64__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__64__input_a, vlSelf->__Vtask_test_task__64__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__64__input_a,
                          32,vlSelf->__Vtask_test_task__64__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__64__input_a,
                      32,vlSelf->__Vtask_test_task__64__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0x80000000U;
    vlSelf->__PVT__b = 0xffffffffU;
    vlSelf->__Vtask_test_task__67__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__67__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__67__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__67__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__67__input_a, vlSelf->__Vtask_test_task__67__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__67__input_a,
                          32,vlSelf->__Vtask_test_task__67__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__67__input_a,
                      32,vlSelf->__Vtask_test_task__67__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 0xffffffffU;
    vlSelf->__Vtask_test_task__70__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__70__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__70__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__70__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__70__input_a, vlSelf->__Vtask_test_task__70__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__70__input_a,
                          32,vlSelf->__Vtask_test_task__70__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__70__input_a,
                      32,vlSelf->__Vtask_test_task__70__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 0x80000000U;
    vlSelf->__Vtask_test_task__73__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__73__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__73__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__73__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__73__input_a, vlSelf->__Vtask_test_task__73__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__73__input_a,
                          32,vlSelf->__Vtask_test_task__73__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__73__input_a,
                      32,vlSelf->__Vtask_test_task__73__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0xffffffffU;
    vlSelf->__PVT__b = 1U;
    vlSelf->__Vtask_test_task__76__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__76__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__76__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__76__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__76__input_a, vlSelf->__Vtask_test_task__76__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__76__input_a,
                          32,vlSelf->__Vtask_test_task__76__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__76__input_a,
                      32,vlSelf->__Vtask_test_task__76__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0x80000000U;
    vlSelf->__PVT__b = 0x80000000U;
    vlSelf->__Vtask_test_task__79__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__79__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__79__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__79__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__79__input_a, vlSelf->__Vtask_test_task__79__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__79__input_a,
                          32,vlSelf->__Vtask_test_task__79__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__79__input_a,
                      32,vlSelf->__Vtask_test_task__79__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 0x80000000U;
    vlSelf->__PVT__b = 1U;
    vlSelf->__Vtask_test_task__82__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__82__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__82__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__82__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__82__input_a, vlSelf->__Vtask_test_task__82__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__82__input_a,
                          32,vlSelf->__Vtask_test_task__82__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__82__input_a,
                      32,vlSelf->__Vtask_test_task__82__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 0x80000000U;
    vlSelf->__Vtask_test_task__85__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__85__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__85__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__85__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__85__input_a, vlSelf->__Vtask_test_task__85__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__85__input_a,
                          32,vlSelf->__Vtask_test_task__85__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__85__input_a,
                      32,vlSelf->__Vtask_test_task__85__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__a = 1U;
    vlSelf->__PVT__b = 1U;
    vlSelf->__Vtask_test_task__88__input_b = vlSelf->__PVT__b;
    vlSelf->__Vtask_test_task__88__input_a = vlSelf->__PVT__a;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            364);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_msg_a = vlSelf->__Vtask_test_task__88__input_a;
    vlSelf->__PVT__istream_msg_b = vlSelf->__Vtask_test_task__88__input_b;
    vlSelf->__PVT__istream_val = 1U;
    vlSelf->__PVT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->__PVT__istream_rdy)))) {
        co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(negedge top.clk)", 
                                                                "tb_IntMul.v", 
                                                                372);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if (vlSelf->__PVT__ostream_val) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((VL_MULS_III(32, vlSelf->__Vtask_test_task__88__input_a, vlSelf->__Vtask_test_task__88__input_b) 
                       == vlSelf->__PVT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %11d, in1 = %11d, out = %11d\n",
                          32,vlSelf->__Vtask_test_task__88__input_a,
                          32,vlSelf->__Vtask_test_task__88__input_b,
                          32,vlSelf->__PVT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:387: Assertion failed in %Ntop.test_task: Failed: in0 = %11d, in1 = %11d, out = %11d\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->__Vtask_test_task__88__input_a,
                      32,vlSelf->__Vtask_test_task__88__input_b,
                      32,vlSelf->__PVT__ostream_msg);
            VL_STOP_MT("tb_IntMul.v", 387, "");
        }
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            390);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            344);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_WRITEF("Testbench finished at %20# cycles\n",
              64,((0x3fU >= 1U) ? (((QData)(VL_TIME_UNITED_Q(1)) 
                                    - 0x11ULL) >> 1U)
                   : 0ULL));
    co_await vlSymsp->TOP.__VdlySched.delay(0xaULL, 
                                            nullptr, 
                                            "tb_IntMul.v", 
                                            348);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    VL_FINISH_MT("tb_IntMul.v", 349, "");
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
}

VL_INLINE_OPT void Vtop_top___ico_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___ico_sequent__TOP__top__0\n"); );
    // Body
    vlSymsp->TOP__top__imul.__PVT__clk = vlSelf->clk;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__0\n"); );
    // Body
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__istream_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__istream_msg_a, vlSelf->__PVT__istream_msg_b);
    vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__imul.__PVT__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    vlSymsp->TOP__top__imul.__PVT__istream_val = vlSelf->__PVT__istream_val;
    vlSymsp->TOP__top__imul.__PVT__istream_msg = vlSelf->__PVT__istream_msg;
}

VL_INLINE_OPT void Vtop_top___nba_sequent__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_sequent__TOP__top__0\n"); );
    // Body
    vlSelf->__PVT__ostream_val = vlSymsp->TOP__top__imul.__PVT__ostream_val;
    vlSelf->__PVT__istream_rdy = vlSymsp->TOP__top__imul.__PVT__istream_rdy;
    vlSelf->__PVT__ostream_msg = vlSymsp->TOP__top__imul.__PVT__ostream_msg;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    // Body
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
}
