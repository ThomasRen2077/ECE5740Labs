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
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__istream_rdy) & (IData)(vlSelf->top__DOT__istream_val));
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go 
        = ((IData)(vlSelf->top__DOT__ostream_rdy) & (IData)(vlSelf->top__DOT__ostream_val));
    vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
                ? (IData)(vlSelf->top__DOT__istream_msg)
                : 0U) : vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
                ? (IData)((vlSelf->top__DOT__istream_msg 
                           >> 0x20U)) : 0U) : vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out);
    if (((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go;
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) {
                    vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go)))) {
                    vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go;
    }
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next 
        = vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg;
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go) {
            vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) {
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 0U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 0U;
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next)));
    }
}
