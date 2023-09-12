// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop___024root___eval_initial__TOP__0(vlSelf);
    Vtop___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0 
        = vlSelf->top__DOT__ostream_val;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str);
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__num = 0;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3cadd47d__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_IntMul.v", 
                                                           71);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (vlSelf->linetrace) {
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)))) {
                VL_WRITEF("%4d: ",32,vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",64,vlSelf->top__DOT__istream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy 
                    = vlSelf->top__DOT__istream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val 
                    = vlSelf->top__DOT__istream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str,0x00000028);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                    VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                                 ,"IDLE");
                } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                    VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                                 ,"CALC");
                } else if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                    VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                                 ,"DONE");
                } else {
                    VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                                 ,"UNKNOWN");
                }
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str, vlSelf->top__DOT__imul__DOT__str);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str,0x00000029);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",32,vlSelf->top__DOT__ostream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__rdy 
                    = vlSelf->top__DOT__ostream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__val 
                    = vlSelf->top__DOT__ostream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__16__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__18__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__14__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__20__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__22__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__idx0 = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSelf->top__DOT__imul__DOT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSelf->top__DOT__imul__DOT__idx1, vlSelf->top__DOT__imul__DOT__idx0)) {
                    vlSelf->top__DOT__imul__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__idx1 
                           - (IData)(1U));
                }
                VL_WRITEF("\n");
            }
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next 
                = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
        }
    }
    VL_STOP_MT("tb_IntMul.v", 76, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((0xeULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0xeULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___timing_commit(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___timing_resume(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<4> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tb_IntMul.v", 20, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            Vtop___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_IntMul.v", 20, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___timing_resume(vlSelf);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_IntMul.v", 20, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3cadd47d__0.commit("@(negedge clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hb9476d33__0.commit("@([changed] top.ostream_val)");
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3cadd47d__0.resume("@(negedge clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hb9476d33__0.resume("@([changed] top.ostream_val)");
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->linetrace & 0xfeU))) {
        Verilated::overWidthError("linetrace");}
}
#endif  // VL_DEBUG
