// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           >> 0x1eU)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            >> 0x1eU)));
    }
    if ((4U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((8U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((0x10U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x20U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x40U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x80U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                           << 2U)));
    }
    if ((0x100U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x200U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x400U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x800U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                    << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                            << 2U)));
    }
    if ((0x1000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x2000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x4000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x8000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                     << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                             << 2U)));
    }
    if ((0x10000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x20000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x40000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x80000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                      << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                              << 2U)));
    }
    if ((0x100000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x200000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x400000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x800000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                       << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                               << 2U)));
    }
    if ((0x1000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x2000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x4000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x8000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                << 2U)));
    }
    if ((0x10000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x20000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((0x40000000U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                         << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if (((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1dU)) ^ (vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
                              >> 0x1fU))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (0x80000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                                 << 2U)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                >> 0x1eU) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[2U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        >> 0x1eU)));
    }
    if ((1U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((2U & ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                << 2U) ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[1U]) 
               | (2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                        << 2U)));
    }
    if ((1U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((2U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((4U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((8U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x80000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x100000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x200000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x400000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x800000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x1000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x2000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x4000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x8000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x10000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x20000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((0x40000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] = 0U;
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   << 2U);
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                = (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F 
                   >> 0x1eU);
        } else {
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] = 0U;
            vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__dpath__DOT__read_data[2U];
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq1_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F;
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U] 
          ^ vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__imem_reqstream_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[4597].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[4553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[4554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[4555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4581].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4582].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4584].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4585].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4586].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4587].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4588].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4589].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4595].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4601].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4603].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4609].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4610].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4613].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4614].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4615].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4619].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4620].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4625].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4626].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4627].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[3312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[4309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        vlSymsp->__Vcoverage[4166].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if (vlSelf->top__DOT__reset) {
            vlSymsp->__Vcoverage[4165].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if (vlSelf->top__DOT__reset) {
                vlSymsp->__Vcoverage[4164].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                vlSymsp->__Vcoverage[4163].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__mem_clear) ^ (IData)(vlSelf->top__DOT____Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mem_clear = vlSelf->top__DOT__mem_clear;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[3993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)))) {
        vlSymsp->__Vcoverage[3994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__block_offset)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__block_offset)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xeU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (1U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xdU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (2U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((0xbU & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (4U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max) 
               ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max 
            = ((7U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_max)) 
               | (8U & (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xffbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xff7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xfbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xf7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xeffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x100U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xdffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x200U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0xbffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x400U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr) 
                   ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)))) {
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr 
            = ((0x7ffU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__physical_block_addr)) 
               | (0x800U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__physical_block_addr)));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data))) {
        vlSymsp->__Vcoverage[3901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__data_data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__data_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__data_data));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->top__DOT__mem_clear) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared) {
            vlSymsp->__Vcoverage[4144].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSymsp->__Vcoverage[4143].fetch_add(1, std::memory_order_relaxed);
        }
    }
    vlSelf->top__DOT__src__DOT__src__DOT__done_next 
        = ((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index) 
           == (IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_max));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem_clear)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M)))) {
                    vlSymsp->__Vcoverage[4147].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
                    vlSymsp->__Vcoverage[4146].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M)))) {
                    vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
                    vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4152].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4151].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M)))) {
                    vlSymsp->__Vcoverage[4150].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
                    vlSymsp->__Vcoverage[4149].fetch_add(1, std::memory_order_relaxed);
                }
                if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
                    vlSymsp->__Vcoverage[4161].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                      >> 0xaU)))) {
                        if ((4U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            if ((5U != (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4160].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                              >> 0xaU)))) {
                                vlSymsp->__Vcoverage[4159].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                          >> 0xaU)))) {
                            vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M)))) {
                    vlSymsp->__Vcoverage[4162].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    vlSelf->top__DOT__snk_done = ((~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                  & ((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index) 
                                     == (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_max)));
    __Vilp = 0x508U;
    while ((__Vilp <= 0xfffU)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x507U)) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__m
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    if (vlSelf->top__DOT__mem_clear) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memory_cleared)))) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while (VL_GTS_III(32, 0x1000U, vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)] = 0U;
                vlSymsp->__Vcoverage[4142].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
    } else if (vlSelf->top__DOT__reset) {
        __Vilp = 0U;
        while ((__Vilp <= 0xfffU)) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[__Vilp] 
                = vlSelf->top__DOT__mem__DOT__mem__DOT__m_load
                [__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en0_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4145].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr0_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__write_en1_M) {
            vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i = 0U;
            while ((vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    < (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_msg_len_modified_M))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (((~ ((IData)(0xffU) << (0x1fU 
                                               & ((0x18U 
                                                   & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                      << 1U)) 
                                                  + 
                                                  (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                   << 3U))))) 
                        & vlSelf->top__DOT__mem__DOT__mem__DOT__m_next
                        [(0xfffU & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                    >> 4U))]) | (0xffffffffULL 
                                                 & ((0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i)))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x1fU 
                                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                        | (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i))))) 
                                                    << 
                                                    (0x1fU 
                                                     & ((0x18U 
                                                         & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                            << 1U)) 
                                                        + 
                                                        (vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                                                         << 3U))))));
                vlSymsp->__Vcoverage[4148].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i 
                    = ((IData)(1U) + vlSelf->top__DOT__mem__DOT__mem__DOT__wr1_i);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en0_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data0_M);
            }
        }
        if (vlSelf->top__DOT__mem__DOT__mem__DOT__amo_en1_M) {
            if ((3U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                              >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       + vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((4U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            } else if ((5U == (7U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                     >> 0xaU)))) {
                vlSelf->top__DOT__mem__DOT__mem__DOT__m_next[(0xfffU 
                                                              & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                                 >> 4U))] 
                    = (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                       | vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M);
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__done_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__done_next 
            = vlSelf->top__DOT__src__DOT__src__DOT__done_next;
    }
    if (((IData)(vlSelf->top__DOT__snk_done) ^ (IData)(vlSelf->top__DOT____Vtogcov__snk_done))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__snk_done = vlSelf->top__DOT__snk_done;
    }
    vlSelf->top__DOT__sink__DOT__sink_rdy = (1U & (
                                                   (~ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__reset_reg)) 
                                                   & (~ (IData)(vlSelf->top__DOT__snk_done))));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_rdy 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy));
    vlSelf->top__DOT__proc2mngr_rdy = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                              & (0U 
                                                 == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
                                           & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__proc2mngr_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_rdy 
            = vlSelf->top__DOT__proc2mngr_rdy;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__proc2mngr_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__proc2mngr_val) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
    vlSelf->top__DOT__imem_reqstream_val = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)) 
                                                  | ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
                                                     & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_reqstream_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[3536].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
                = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq0_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq0_val 
            = ((IData)(vlSelf->top__DOT__imem_reqstream_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len 
            = (3U & vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
            = ((vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = vlSelf->top__DOT__DUT__DOT____Vcellout__imem_queue__deq_msg[2U];
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy;
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[3462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[3528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq))
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[4476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[4477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[4433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[4434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[4435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[4296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[4443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[4474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[4508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[4300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[4297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
}
