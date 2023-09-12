// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    if ((1U & (~ ((IData)(vlSelf->top__DOT__istream_val) 
                  & (IData)(vlSelf->top__DOT__istream_rdy))))) {
        if ((0x21U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
            vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
            if ((1U & (~ vlSelf->top__DOT__imul__DOT__b))) {
                vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & vlSelf->top__DOT__imul__DOT__b)) {
                vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x21U == (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
            if (((IData)(vlSelf->top__DOT__ostream_val) 
                 & (IData)(vlSelf->top__DOT__ostream_rdy))) {
                vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
                          & (IData)(vlSelf->top__DOT__ostream_rdy))))) {
                vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    vlSelf->top__DOT__imul__DOT__next_ostream_val = 
        ((~ ((IData)(vlSelf->top__DOT__istream_val) 
             & (IData)(vlSelf->top__DOT__istream_rdy))) 
         & ((0x21U == (IData)(vlSelf->top__DOT__imul__DOT__counter)) 
            & (~ ((IData)(vlSelf->top__DOT__ostream_val) 
                  & (IData)(vlSelf->top__DOT__ostream_rdy)))));
    vlSelf->top__DOT__imul__DOT__next_ostream_msg = vlSelf->top__DOT__ostream_msg;
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__istream_val)))) {
            vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__istream_val) {
            vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__nextstate = 1U;
        } else {
            vlSelf->top__DOT__imul__DOT__nextstate = 0U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__nextstate = ((1U 
                                                   == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                                   ? 
                                                  ((0x20U 
                                                    == (IData)(vlSelf->top__DOT__imul__DOT__counter))
                                                    ? 2U
                                                    : 1U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->top__DOT__imul__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__ostream_rdy)
                                                     ? 0U
                                                     : 2U)
                                                    : 0U));
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__state))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__state))) {
                if (vlSelf->top__DOT__ostream_rdy) {
                    vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_rdy)))) {
                    vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__imul__DOT__next_b = vlSelf->top__DOT__imul__DOT__b;
    vlSelf->top__DOT__imul__DOT__next_a = vlSelf->top__DOT__imul__DOT__a;
    if (((IData)(vlSelf->top__DOT__istream_val) & (IData)(vlSelf->top__DOT__istream_rdy))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__next_ostream_msg = 0U;
        vlSelf->top__DOT__imul__DOT__next_b = (IData)(vlSelf->top__DOT__istream_msg);
        vlSelf->top__DOT__imul__DOT__next_a = (IData)(
                                                      (vlSelf->top__DOT__istream_msg 
                                                       >> 0x20U));
    } else if ((0x21U != (IData)(vlSelf->top__DOT__imul__DOT__counter))) {
        vlSelf->top__DOT__imul__DOT__next_ostream_msg 
            = ((1U & vlSelf->top__DOT__imul__DOT__b)
                ? vlSelf->top__DOT__imul__DOT__add_result
                : vlSelf->top__DOT__ostream_msg);
        vlSelf->top__DOT__imul__DOT__next_b = (vlSelf->top__DOT__imul__DOT__b 
                                               >> 1U);
        vlSelf->top__DOT__imul__DOT__next_a = (vlSelf->top__DOT__imul__DOT__a 
                                               << 1U);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__next_ostream_val) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_val))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_val 
            = vlSelf->top__DOT__imul__DOT__next_ostream_val;
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_ostream_msg 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_ostream_msg 
          ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_ostream_msg) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_ostream_msg));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__nextstate) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__nextstate)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__nextstate) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__nextstate)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__nextstate)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_b 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_b 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_b 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_b 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_b 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_b 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_b 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_b ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_b 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_b) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_b));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (1U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (2U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (4U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__next_a 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (8U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__next_a 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__next_a 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__next_a 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__next_a 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__next_a 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__next_a 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
    if (((vlSelf->top__DOT__imul__DOT__next_a ^ vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__next_a 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__next_a) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__next_a));
    }
}
