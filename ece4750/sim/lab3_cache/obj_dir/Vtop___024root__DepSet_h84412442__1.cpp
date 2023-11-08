// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->top__DOT__z6b_sel) {
        if (vlSelf->top__DOT__z6b_sel) {
            vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__z6b_sel)))) {
            vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__z6b_sel)))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__Spill_or_Refill_sel) {
        if (vlSelf->top__DOT__Spill_or_Refill_sel) {
            vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__Spill_or_Refill_sel)))) {
            vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__Spill_or_Refill_sel)))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__darray_write_mux_sel) {
        if (vlSelf->top__DOT__darray_write_mux_sel) {
            vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__darray_write_mux_sel)))) {
            vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__darray_write_mux_sel)))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__write_en_sel) {
        if (vlSelf->top__DOT__write_en_sel) {
            vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__write_en_sel)))) {
            vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__write_en_sel)))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__reg_en_M0) ^ (IData)(vlSelf->top__DOT____Vtogcov__reg_en_M0))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reg_en_M0 = vlSelf->top__DOT__reg_en_M0;
    }
    if (((IData)(vlSelf->top__DOT__tarray_en) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_en))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_en = vlSelf->top__DOT__tarray_en;
    }
    if (((IData)(vlSelf->top__DOT__tarray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_wen))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_wen = vlSelf->top__DOT__tarray_wen;
    }
    if (((IData)(vlSelf->top__DOT__z6b_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__z6b_sel))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__z6b_sel = vlSelf->top__DOT__z6b_sel;
    }
    if (((IData)(vlSelf->top__DOT__darray_write_mux_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_write_mux_sel))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_write_mux_sel 
            = vlSelf->top__DOT__darray_write_mux_sel;
    }
    if (((IData)(vlSelf->top__DOT__darray_wen) ^ (IData)(vlSelf->top__DOT____Vtogcov__darray_wen))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__darray_wen = vlSelf->top__DOT__darray_wen;
    }
    if (((IData)(vlSelf->top__DOT__write_en_sel) ^ (IData)(vlSelf->top__DOT____Vtogcov__write_en_sel))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__write_en_sel = vlSelf->top__DOT__write_en_sel;
    }
    if (((IData)(vlSelf->top__DOT__spill_one_word_done) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__spill_one_word_done 
            = vlSelf->top__DOT__spill_one_word_done;
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent 
            = vlSelf->top__DOT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->top__DOT__refill_one_word_resp_received) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received 
            = vlSelf->top__DOT__refill_one_word_resp_received;
    }
    if (((IData)(vlSelf->top__DOT__Spill_or_Refill_sel) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel 
            = vlSelf->top__DOT__Spill_or_Refill_sel;
    }
    if ((1U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (1U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (2U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (4U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (8U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__memreq_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__memreq_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__memreq_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__memreq_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__memreq_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__memreq_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__memreq_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__memreq_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__memreq_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if (((vlSelf->top__DOT__memreq_msg_addr ^ vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__memreq_msg_addr));
    }
    if ((1U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (1U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (2U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (4U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (8U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x10U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x20U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x40U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__memreq_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x80U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x100U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x200U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x400U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__memreq_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x800U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x1000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x2000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x4000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__memreq_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x8000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x10000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x20000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x40000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__memreq_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x80000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x100000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x200000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x400000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__memreq_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x800000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__memreq_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__memreq_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__memreq_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__memreq_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if (((vlSelf->top__DOT__memreq_msg_data ^ vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__memreq_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__memreq_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__memreq_msg_data));
    }
    if ((1U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__cache_resp_msg_data 
               ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache_resp_msg_data 
                  ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache_resp_msg_data 
                   ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache_resp_msg_data 
                    ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache_resp_msg_data 
                     ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache_resp_msg_data 
                      ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                       ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache_resp_msg_data 
                        ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
    if (((vlSelf->top__DOT__cache_resp_msg_data ^ vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_resp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__cache_resp_msg_data));
    }
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Body
    if (vlSelf->top__DOT__darray_write_mux_sel) {
        if (vlSelf->top__DOT__darray_write_mux_sel) {
            vlSelf->top__DOT__DUT__DOT__write_data[0U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0U];
            vlSelf->top__DOT__DUT__DOT__write_data[1U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[1U];
            vlSelf->top__DOT__DUT__DOT__write_data[2U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[2U];
            vlSelf->top__DOT__DUT__DOT__write_data[3U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[3U];
            vlSelf->top__DOT__DUT__DOT__write_data[4U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[4U];
            vlSelf->top__DOT__DUT__DOT__write_data[5U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[5U];
            vlSelf->top__DOT__DUT__DOT__write_data[6U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[6U];
            vlSelf->top__DOT__DUT__DOT__write_data[7U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[7U];
            vlSelf->top__DOT__DUT__DOT__write_data[8U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[8U];
            vlSelf->top__DOT__DUT__DOT__write_data[9U] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[9U];
            vlSelf->top__DOT__DUT__DOT__write_data[0xaU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xaU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xbU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xbU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xcU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xcU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xdU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xdU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xeU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xeU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xfU] 
                = vlSelf->top__DOT__DUT__DOT__refill_data[0xfU];
        } else {
            vlSelf->top__DOT__DUT__DOT__write_data[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__DUT__DOT__write_data[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__DUT__DOT__write_data[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__DUT__DOT__write_data[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__DUT__DOT__write_data[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__DUT__DOT__write_data[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__DUT__DOT__write_data[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__DUT__DOT__write_data[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__DUT__DOT__write_data[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__DUT__DOT__write_data[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__DUT__DOT__write_data[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__DUT__DOT__write_data[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__write_data[0U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[1U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[2U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[3U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[4U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[5U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[6U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[7U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[8U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[9U] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xaU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xbU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xcU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xdU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xeU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
        vlSelf->top__DOT__DUT__DOT__write_data[0xfU] 
            = vlSelf->top__DOT__DUT__DOT__cache_request_data_M0;
    }
    if (((IData)(vlSelf->top__DOT__tarray_en) & vlSelf->top__DOT__DUT__DOT__valid_array
         [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                    >> 6U))])) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        if (((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
              >> 0xbU) == vlSelf->top__DOT__DUT__DOT__tag_array
             [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        >> 6U))])) {
            vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        }
        if (((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
              >> 0xbU) != vlSelf->top__DOT__DUT__DOT__tag_array
             [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                        >> 6U))])) {
            vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__tarray_en) 
                  & vlSelf->top__DOT__DUT__DOT__valid_array
                  [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                             >> 6U))])))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__current_dirty = (((IData)(vlSelf->top__DOT__tarray_en) 
                                        & vlSelf->top__DOT__DUT__DOT__valid_array
                                        [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                   >> 6U))]) 
                                       & vlSelf->top__DOT__DUT__DOT__dirty_array
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 6U))]);
    vlSelf->top__DOT__tarray_match = (((IData)(vlSelf->top__DOT__tarray_en) 
                                       & vlSelf->top__DOT__DUT__DOT__valid_array
                                       [(0x1fU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                                  >> 6U))]) 
                                      & ((vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                          >> 0xbU) 
                                         == vlSelf->top__DOT__DUT__DOT__tag_array
                                         [(0x1fU & 
                                           (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                            >> 6U))]));
    vlSelf->top__DOT__DUT__DOT__write_word_enable = 
        ((IData)(vlSelf->top__DOT__write_en_sel) ? 
         ((IData)(vlSelf->top__DOT__write_en_sel) ? 
          (0xffffU & ((IData)(1U) << (0xfU & (vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0 
                                              >> 2U))))
           : 0U) : 0xffffU);
    vlSelf->top__DOT__DUT__DOT__z6b_mux_result = ((IData)(vlSelf->top__DOT__z6b_sel)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__z6b_sel)
                                                    ? 
                                                   (0xffffffc0U 
                                                    & vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0)
                                                    : 0U)
                                                   : vlSelf->top__DOT__DUT__DOT__cache_request_addr_M0);
    if (((IData)(vlSelf->top__DOT__current_dirty) ^ (IData)(vlSelf->top__DOT____Vtogcov__current_dirty))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__current_dirty 
            = vlSelf->top__DOT__current_dirty;
    }
    if (((IData)(vlSelf->top__DOT__tarray_match) ^ (IData)(vlSelf->top__DOT____Vtogcov__tarray_match))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__tarray_match = vlSelf->top__DOT__tarray_match;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xffefU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x100U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x200U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x400U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x800U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xefffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__write_word_enable)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__DUT__DOT__write_word_enable)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (1U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (2U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (4U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (8U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    if (((vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__z6b_mux_result) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__z6b_mux_result));
    }
    vlSelf->top__DOT__DUT__DOT__refill_addr = (vlSelf->top__DOT__DUT__DOT__z6b_mux_result 
                                               + (0x3cU 
                                                  & ((IData)(vlSelf->top__DOT__DUT__DOT__refill_req_counter) 
                                                     << 2U)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__refill_addr 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    if (((vlSelf->top__DOT__DUT__DOT__refill_addr ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__refill_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__refill_addr));
    }
    vlSelf->top__DOT__cache_req_msg_addr = ((IData)(vlSelf->top__DOT__Spill_or_Refill_sel)
                                             ? ((IData)(vlSelf->top__DOT__Spill_or_Refill_sel)
                                                 ? vlSelf->top__DOT__DUT__DOT__refill_addr
                                                 : 0U)
                                             : vlSelf->top__DOT__DUT__DOT__spill_addr);
    if ((1U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (1U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (2U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (4U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache_req_msg_addr 
               ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (8U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache_req_msg_addr 
                  ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache_req_msg_addr 
                   ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache_req_msg_addr 
                    ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache_req_msg_addr 
                     ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache_req_msg_addr 
                      ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                       ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache_req_msg_addr 
                        ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
    if (((vlSelf->top__DOT__cache_req_msg_addr ^ vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache_req_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache_req_msg_addr));
    }
}
