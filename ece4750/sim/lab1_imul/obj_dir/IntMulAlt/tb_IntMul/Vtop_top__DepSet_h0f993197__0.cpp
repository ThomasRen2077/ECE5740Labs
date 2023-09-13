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
                        __Vtemp_hb3b013f4__0 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__0;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__0 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__0;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_hb3b013f4__1 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__1;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__1 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__1;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_hb3b013f4__2 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__2;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__2 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__2;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_hb3b013f4__3 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__3;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__3 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__3;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                }
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
                    __Vtemp_hb3b013f4__4 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__4;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                    __Vtemp_hb3b013f4__5 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__5;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                    __Vtemp_hb3b013f4__6 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                            - (IData)(1U));
                    vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                        = __Vtemp_hb3b013f4__6;
                }
                VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_hb3b013f4__7 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__7;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__4 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__4;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_hb3b013f4__8 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__8;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__5 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__5;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_hb3b013f4__9 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__9;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__6 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__6;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_hb3b013f4__10 = (vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                                                 - (IData)(1U));
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_hb3b013f4__10;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
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
                        __Vtemp_h8bb863d8__7 = ((IData)(1U) 
                                                + vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1);
                        vlSymsp->TOP__top__imul__vc_trace.__PVT__idx1 
                            = __Vtemp_h8bb863d8__7;
                    }
                    VL_ASSIGNSEL_WI(4096,32,0U, vlSymsp->TOP__top__imul__vc_trace.__PVT__storage, vlSymsp->TOP__top__imul__vc_trace.__PVT__idx0);
                }
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
        }
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            117);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                120);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    }
    co_await vlSymsp->TOP.__VtrigSched_h3ebd0ccf__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge top.clk)", 
                                                            "tb_IntMul.v", 
                                                            373);
    vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
    vlSelf->__PVT__istream_val = 0U;
    vlSelf->__PVT__ostream_rdy = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ostream_val)))) {
        co_await vlSymsp->TOP.__VtrigSched_h87bdc05d__0.trigger(0U, 
                                                                nullptr, 
                                                                "@([changed] top.ostream_val)", 
                                                                "tb_IntMul.v", 
                                                                378);
        vlSymsp->TOP.__Vm_traceActivity[8U] = 1U;
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
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->__Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__linetrace = vlSelf->linetrace;
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->clk;
    }
    vlSymsp->TOP__top__imul.__PVT__clk = vlSelf->clk;
}

VL_INLINE_OPT void Vtop_top___act_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___act_comb__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__istream_val) ^ (IData)(vlSelf->__Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_val = vlSelf->__PVT__istream_val;
    }
    if (((IData)(vlSelf->__PVT__ostream_rdy) ^ (IData)(vlSelf->__Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    }
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 1U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 2U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 3U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 4U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 5U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 6U)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 7U)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 8U)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 9U)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xaU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xbU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xcU)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xdU)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xeU)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xfU)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x10U)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x11U)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x12U)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x13U)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x14U)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x15U)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x16U)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x17U)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x18U)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x19U)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1aU)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1bU)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1cU)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1dU)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1eU)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1fU)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0U)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 1U)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 2U)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 3U)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 4U)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 5U)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 6U)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 7U)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 8U)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 9U)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xaU)))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xbU)))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xcU)))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xdU)))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xeU)))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xfU)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x10U)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x11U)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x12U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x13U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x14U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x15U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x16U)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x17U)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x18U)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x19U)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1aU)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1bU)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1cU)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1dU)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1eU)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1fU)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0U)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 1U)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 2U)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 3U)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 4U)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 5U)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 6U)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 7U)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 8U)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 9U)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xaU)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xbU)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xcU)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xdU)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xeU)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xfU)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x10U)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x11U)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x12U)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x13U)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x14U)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x15U)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x16U)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x17U)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x18U)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x19U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1aU)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1bU)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1cU)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1dU)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1eU)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1fU)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU)));
    }
    vlSymsp->TOP__top__imul.__PVT__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    vlSymsp->TOP__top__imul.__PVT__istream_val = vlSelf->__PVT__istream_val;
    vlSelf->__PVT__istream_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__istream_msg_a, vlSelf->__PVT__istream_msg_b);
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0U)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 1U)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 2U)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 3U)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 4U)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 5U)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 6U)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 7U)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 8U)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 9U)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x30U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x31U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x32U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x33U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x34U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x35U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x36U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x37U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x38U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x39U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU)));
    }
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
    if (((IData)(vlSelf->__PVT__ostream_val) ^ (IData)(vlSelf->__Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_val = vlSelf->__PVT__ostream_val;
    }
    if (((IData)(vlSelf->__PVT__istream_rdy) ^ (IData)(vlSelf->__Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_rdy = vlSelf->__PVT__istream_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__0(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__istream_val) ^ (IData)(vlSelf->__Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_val = vlSelf->__PVT__istream_val;
    }
    if (((IData)(vlSelf->__PVT__ostream_rdy) ^ (IData)(vlSelf->__Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0U)))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 1U)))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 2U)))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 3U)))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 4U)))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 5U)))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 6U)))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 7U)))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 8U)))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 9U)))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xaU)))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xbU)))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xcU)))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xdU)))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xeU)))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0xfU)))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x10U)))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x11U)))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x12U)))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x13U)))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x14U)))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x15U)))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x16U)))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x17U)))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x18U)))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x19U)))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1aU)))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1bU)))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1cU)))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1dU)))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1eU)))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_a, 0x1fU)))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__istream_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0U)))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 1U)))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 2U)))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 3U)))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 4U)))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 5U)))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 6U)))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 7U)))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 8U)))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 9U)))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xaU)))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xbU)))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xcU)))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xdU)))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xeU)))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0xfU)))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x10U)))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x11U)))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x12U)))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x13U)))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x14U)))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x15U)))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x16U)))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x17U)))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x18U)))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x19U)))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1aU)))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1bU)))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1cU)))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1dU)))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1eU)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__istream_msg_b, 0x1fU)))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__istream_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__istream_msg_b, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0U)))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0U)))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 1U)))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 2U)))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 3U)))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 4U)))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 5U)))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 6U)))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 7U)))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 8U)))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 9U)))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xaU)))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xbU)))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xcU)))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xdU)))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xeU)))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xfU)))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x10U)))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x11U)))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x12U)))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x13U)))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x14U)))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x15U)))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x16U)))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x17U)))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x18U)))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x19U)))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1aU)))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1bU)))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1cU)))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1dU)))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1eU)))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1fU)))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU)));
    }
    vlSymsp->TOP__top__imul.__PVT__reset = vlSelf->__PVT__reset;
}
