// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hd3c00747__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hd3c00747__0 = 0;
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0 = 0;
    // Body
    if ((0x40000000U & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U])) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
            = (0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U]);
    }
    if ((vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_msg[0U] 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
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
    if ((1U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[4183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr));
    }
    vlSelf->top__DOT__cache0_req_msg[0U] = (IData)((QData)((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_to_mem_data)));
    vlSelf->top__DOT__cache0_req_msg[1U] = ((vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                                             << 2U) 
                                            | (IData)(
                                                      ((QData)((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT__cache_to_mem_data)) 
                                                       >> 0x20U)));
    vlSelf->top__DOT__cache0_req_msg[2U] = ((0x1800U 
                                             & vlSelf->top__DOT__cache0_req_msg[2U]) 
                                            | (0x1fffU 
                                               & (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__ctrl__cache_req_type) 
                                                   << 0xaU) 
                                                  | (vlSelf->top__DOT__cache__DOT__icache__DOT____Vcellout__dpath__cache_req_msg_addr 
                                                     >> 0x1eU))));
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xfffeU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xfffdU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xfffbU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (4U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xfff7U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (8U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xffefU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x10U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xffdfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x20U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xffbfU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x40U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                  ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xff7fU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x80U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x100U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xfeffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x100U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x200U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xfdffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x200U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x400U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xfbffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x400U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x800U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                   ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xf7ffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x800U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x1000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xefffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x1000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x2000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xdfffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x2000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x4000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0xbfffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x4000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if ((0x8000U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable) 
                    ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)))) {
        vlSymsp->__Vcoverage[6068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable 
            = ((0x7fffU & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__write_word_enable)) 
               | (0x8000U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__write_word_enable)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M;
    }
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data))) {
        vlSymsp->__Vcoverage[5408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__memresp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data));
    }
    vlSelf->top__DOT__dmem_respstream_msg = ((0x700000000000ULL 
                                              & vlSelf->top__DOT__dmem_respstream_msg) 
                                             | (QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__memresp_msg_data)));
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__spill_done))) {
        vlSymsp->__Vcoverage[5372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__spill_done 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done;
    }
    if ((0U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done)))) {
                vlSymsp->__Vcoverage[6806].fetch_add(1, std::memory_order_relaxed);
            }
            if (vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done) {
                vlSymsp->__Vcoverage[6807].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
                 & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done))) {
                vlSymsp->__Vcoverage[6790].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
                          & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done))))) {
                if (((IData)(vlSelf->top__DOT__flush) 
                     & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done))) {
                    vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__flush) 
                              & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done))))) {
                    vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next 
            = (((((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
                  & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_match))) 
                 & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__current_dirty)) 
                | ((IData)(vlSelf->top__DOT__flush) 
                   & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__flush_dirty)))
                ? 1U : ((((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
                          & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__tarray_match))) 
                         & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__current_dirty)))
                         ? 2U : (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg)));
    } else if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next 
            = (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
                & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done))
                ? 2U : (((IData)(vlSelf->top__DOT__flush) 
                         & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done))
                         ? 0U : (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg)))) {
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next 
            = (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
                & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_resp_done))
                ? 0U : (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg));
    } else {
        VL_STOP_MT("CacheAltCtrl.v", 147, "");
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next = 0U;
    }
    if ((0U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        vlSelf->top__DOT__cache1_req_val = 0U;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent = 0U;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        vlSelf->top__DOT__cache1_req_val = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_done)));
        vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent = 0U;
        vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done 
            = ((IData)(vlSelf->top__DOT__cache1_req_val) 
               & (IData)(vlSelf->top__DOT__cache1_req_rdy));
    } else {
        vlSelf->top__DOT__cache1_req_val = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_req_done)));
        vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent 
            = ((IData)(vlSelf->top__DOT__cache1_req_val) 
               & (IData)(vlSelf->top__DOT__cache1_req_rdy));
        vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done = 0U;
    }
    if ((0U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
            if (((IData)(vlSelf->top__DOT__cache1_req_val) 
                 & (IData)(vlSelf->top__DOT__cache1_req_rdy))) {
                vlSymsp->__Vcoverage[6816].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_req_val) 
                          & (IData)(vlSelf->top__DOT__cache1_req_rdy))))) {
                vlSymsp->__Vcoverage[6817].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_reg))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_req_val) 
                          & (IData)(vlSelf->top__DOT__cache1_req_rdy))))) {
                vlSymsp->__Vcoverage[6809].fetch_add(1, std::memory_order_relaxed);
            }
            if (((IData)(vlSelf->top__DOT__cache1_req_val) 
                 & (IData)(vlSelf->top__DOT__cache1_req_rdy))) {
                vlSymsp->__Vcoverage[6808].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5813].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5814].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_initial_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
        = (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_initial_addr 
           + (0x3cU & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_counter) 
                       << 2U)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                       | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[4247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__icache__DOT__dpath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__memresp0_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache0_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache0_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache0_resp_msg)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache0_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache0_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache0_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache0_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[8896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (1U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (2U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (4U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (8U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data))) {
        vlSymsp->__Vcoverage[5504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_resp_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__memresp1_trace__DOT__data));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__cache1_resp_msg 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__cache1_resp_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_resp_msg)))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__cache1_resp_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__cache1_resp_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_resp_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__cache1_resp_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__cache1_resp_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[8560].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[8561].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[8554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
                  & (IData)(vlSelf->top__DOT__cache0_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy))) {
        vlSymsp->__Vcoverage[6996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__cache0_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[7201].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache0_req_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[7202].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[7195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__cache0_req_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__cache0_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[6837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq0_val;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq0_val));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[8703].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[8704].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[8697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                  & (IData)(vlSelf->top__DOT__cache1_resp_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay))) {
                vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy))) {
        vlSymsp->__Vcoverage[7045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D;
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
    if (vlSelf->top__DOT__mem__DOT__mem_memreq0_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len 
            = (3U & vlSelf->top__DOT__cache0_req_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__cache0_req_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
            = ((vlSelf->top__DOT__cache0_req_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__cache0_req_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
            = vlSelf->top__DOT__cache0_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
            = vlSelf->top__DOT__cache0_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
            = vlSelf->top__DOT__cache0_req_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
            = vlSelf->top__DOT__cache0_req_msg[2U];
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] = 0U;
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache0_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if (((vlSelf->top__DOT__cache0_req_msg[1U] ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[2U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[1U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (1U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (2U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (4U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cache0_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (8U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache0_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    if (((vlSelf->top__DOT__cache0_req_msg[0U] ^ vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache0_req_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cache0_req_msg[0U]));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0));
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hd3c00747__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
           | (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0));
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__dmem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dmem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_msg)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__dmem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
                ? (IData)(vlSelf->top__DOT__dmem_respstream_msg)
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M);
    if ((1U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_req_sent))) {
        vlSymsp->__Vcoverage[5367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__refill_one_word_req_sent 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__refill_one_word_req_sent;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__spill_one_word_done))) {
        vlSymsp->__Vcoverage[5366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__spill_one_word_done 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__spill_one_word_done;
    }
    if (((IData)(vlSelf->top__DOT__cache1_req_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__cache1_req_val))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_val 
            = vlSelf->top__DOT__cache1_req_val;
    }
    vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__cache1_req_val) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
              & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr))) {
        vlSymsp->__Vcoverage[5875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__spill_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
        = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__Spill_or_Refill_sel)
            ? ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__Spill_or_Refill_sel)
                ? vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__refill_addr
                : 0U) : vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__spill_addr);
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
           & ((IData)(vlSelf->top__DOT__sink__DOT__sink_rdy) 
              & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlSelf->top__DOT__proc2mngr_rdy) 
           & (IData)(vlSelf->top__DOT__proc2mngr_val));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[8489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[8555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[7985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[7130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[7196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay0__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[7964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[8632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[8698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[8045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]))) {
        vlSymsp->__Vcoverage[6869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]))) {
        vlSymsp->__Vcoverage[6901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]))) {
        vlSymsp->__Vcoverage[6915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq0_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq0_trace__msg[2U]));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h3c243d67__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_D) 
           | (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hd3c00747__0));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hd3c00747__0));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__wb_result_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
        = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))
            ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op1_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata0_D));
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
        = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))
            ? ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__op2_byp_sel_D))
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__rf_rdata1_D));
    if ((1U & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__cache1_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[7344].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cache1_req_val) 
                      & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[7345].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[7338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        if (vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__cache1_req_val) 
                  & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                 & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[7347].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__cache1_req_val) 
                           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy)) 
                          & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[7348].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
                = ((IData)(vlSelf->top__DOT__cache1_req_val) 
                   & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay));
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__mem__DOT__mem_memreq1_val = 0U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 0U;
        vlSelf->top__DOT__mem__DOT__mem_memreq1_val 
            = ((IData)(vlSelf->top__DOT__cache1_req_val) 
               & (0U == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__cache1_req_val) 
             & (~ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[6916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_val;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_val));
    if ((1U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (1U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((2U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (2U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((4U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (4U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((8U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
               ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (8U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x10U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x20U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x40U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x80U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                  ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x100U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x200U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x400U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x800U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                   ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                    ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                     ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                      ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                       ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                        ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr))) {
        vlSymsp->__Vcoverage[5440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    if (((vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
          ^ vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[5441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT____Vtogcov__cache_req_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr));
    }
    vlSelf->top__DOT__cache1_req_msg[0U] = (IData)((QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_to_mem_data)));
    vlSelf->top__DOT__cache1_req_msg[1U] = ((vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                                             << 2U) 
                                            | (IData)(
                                                      ((QData)((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__datapath__DOT__cache_to_mem_data)) 
                                                       >> 0x20U)));
    vlSelf->top__DOT__cache1_req_msg[2U] = ((0x1800U 
                                             & vlSelf->top__DOT__cache1_req_msg[2U]) 
                                            | (0x1fffU 
                                               & (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__ctrlunit__cache_req_type) 
                                                   << 0xaU) 
                                                  | (vlSelf->top__DOT__cache__DOT__dcache__DOT____Vcellout__datapath__cache_req_msg_addr 
                                                     >> 0x1eU))));
    if ((1U & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                      & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__proc2mngr_val) 
                  & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__proc2mngr_val) 
                           & (IData)(vlSelf->top__DOT__sink__DOT__sink_rdy)) 
                          & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__sink__DOT__sink_val = 
                ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                 & (0U == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay));
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay);
        } else {
            vlSelf->top__DOT__sink__DOT__sink_val = 0U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 0U;
        vlSelf->top__DOT__sink__DOT__sink_val = ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num));
        if (((IData)(vlSelf->top__DOT__proc2mngr_val) 
             & (~ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val 
            = vlSelf->top__DOT__sink__DOT__sink_val;
    }
    if (vlSelf->top__DOT__sink__DOT__sink_val) {
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_en 
            = vlSelf->top__DOT__sink__DOT__sink_rdy;
        vlSelf->top__DOT__sink__DOT__sink_msg = vlSelf->top__DOT__proc2mngr_msg;
    } else {
        vlSelf->top__DOT__sink__DOT__sink__DOT__index_en = 0U;
        vlSelf->top__DOT__sink__DOT__sink_msg = 0U;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[7986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[7968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[8046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h3c243d67__0));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_respstream_rdy)))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_respstream_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__IntMulAlt_respstream_val));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op1_byp_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D = 
        ((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)
          ? ((IData)(vlSelf->top__DOT__DUT__DOT__op1_sel_D)
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D
              : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_byp_D);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__op2_byp_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D = 
        ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
          ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_byp_D
          : ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
              ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__imm_D
              : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__op2_sel_D))
                  ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__csrr_data_D
                  : 0U)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[7273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[7339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[7973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe 
        = ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)));
    if (vlSelf->top__DOT__mem__DOT__mem_memreq1_val) {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len 
            = (3U & vlSelf->top__DOT__cache1_req_msg[1U]);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ 
            = (7U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                     >> 0xaU));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque 
            = (0xffU & (vlSelf->top__DOT__cache1_req_msg[2U] 
                        >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
            = ((vlSelf->top__DOT__cache1_req_msg[2U] 
                << 0x1eU) | (vlSelf->top__DOT__cache1_req_msg[1U] 
                             >> 2U));
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
            = vlSelf->top__DOT__cache1_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
            = vlSelf->top__DOT__cache1_req_msg[0U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
            = vlSelf->top__DOT__cache1_req_msg[1U];
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
            = vlSelf->top__DOT__cache1_req_msg[2U];
    } else {
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] = 0U;
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] = 0U;
    }
    if ((0x400U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (4U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (8U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache1_req_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (4U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (8U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache1_req_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if (((vlSelf->top__DOT__cache1_req_msg[1U] ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (1U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__cache1_req_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[2U]) 
               | (2U & vlSelf->top__DOT__cache1_req_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (1U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__cache1_req_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[1U]) 
               | (2U & vlSelf->top__DOT__cache1_req_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (1U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (2U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (4U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__cache1_req_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (8U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__cache1_req_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if (((vlSelf->top__DOT__cache1_req_msg[0U] ^ vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__cache1_req_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__cache1_req_msg[0U]));
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__sink__DOT__sink__DOT__index_en;
    }
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink_msg 
               ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                  ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                   ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                    ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                     ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                      ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                       ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink_msg 
                        ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink_msg ^ vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT____Vtogcov__sink_msg) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink_msg));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[7981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[7965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[8041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_rdy 
            = vlSelf->top__DOT__dmem_respstream_rdy;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__dmem_respstream_rdy) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__ostall_notrdy)))) {
        vlSymsp->__Vcoverage[6831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__ostall_notrdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__dmem_respstream_rdy)));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_M0 
        = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
           & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_rdy)) 
              | (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_miss)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb10c38c5__0 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D));
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
                if (vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go) {
                    vlSymsp->__Vcoverage[2495].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go)))) {
                    vlSymsp->__Vcoverage[2496].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__ostream_go))) {
        vlSymsp->__Vcoverage[2488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__ostream_go 
            = vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[2735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[2124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D 
          ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D));
    }
    vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__a_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__lshifter_out);
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[2156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D 
          ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D));
    }
    vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__b_mux_sel)
                ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D
                : 0U) : vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__rshifter_out);
    vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
        = (((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__DUT__DOT__dpath__DOT__op2_D)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[7977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_pipe 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe;
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((~ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_pipe)) 
               & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq))) 
           & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[8265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[8223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[8231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__opaque)));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr))) {
        vlSymsp->__Vcoverage[8262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__addr) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__addr));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[8296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[8297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT____Vtogcov__data) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_trace__DOT__data));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6945].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]))) {
        vlSymsp->__Vcoverage[6948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[0U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6953].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6954].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6956].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6957].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6959].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6960].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6961].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6962].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6963].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6964].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6965].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6966].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6967].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6968].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                     ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6970].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                      ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                       ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
                        ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]))) {
        vlSymsp->__Vcoverage[6980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U] 
          ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[6981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
               ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                   ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U] 
                    ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]))) {
        vlSymsp->__Vcoverage[6994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vcellinp__memreq1_trace__msg[2U]));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[7983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[8043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_M0) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__ostall_M0))) {
        vlSymsp->__Vcoverage[6832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__ostall_M0 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_M0;
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0 
        = ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__val_M0) 
           & (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_M0));
    vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_val 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb10c38c5__0) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ex_result_sel_D)));
    vlSelf->top__DOT__mngr2proc_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb10c38c5__0) 
                                       & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__mngr2proc_rdy_D));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__osquash_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_D) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((7U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_D)) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__osquash_X)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__a_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_mux_out));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg)))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffffffeULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffffffdULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffffffbULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffffffefULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffffffdfULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffffffbfULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffffff7fULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffffeffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffffdffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffffbffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffffefffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffffdfffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffffbfffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffff7fffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffeffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffdffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffffbffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffefffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffdfffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffffbfffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffff7fffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffeffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffdffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffffbffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffefffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffdfffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffffbfffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffff7fffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffeffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffdffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffffbffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffefffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffdfffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffffbfffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffff7fffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffeffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffdffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffffbffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffefffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffdfffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffffbfffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffff7fffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffeffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffdffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfffbffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffefffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffdfffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xffbfffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xff7fffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfeffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfdffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xfbffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xefffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[1539].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xdfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[1540].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0xbfffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[1541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg 
            = ((0x7fffffffffffffffULL & vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_msg 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[7974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy)))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0)));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__stall_M0))) {
        vlSymsp->__Vcoverage[6833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__stall_M0 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_val))) {
        vlSymsp->__Vcoverage[1542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__IntMulAlt_reqstream_val 
            = vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_val;
    }
    vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_rdy) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__IntMulAlt_reqstream_val));
    if (((IData)(vlSelf->top__DOT__mngr2proc_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__mngr2proc_rdy 
            = vlSelf->top__DOT__mngr2proc_rdy;
    }
    vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
              & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__dmem_reqstream_val = ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                            | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__squash_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D;
    }
    vlSelf->top__DOT__DUT__DOT__reg_en_D = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_D)) 
                                                  | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_D)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb10c38c5__0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F;
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)) 
           & ((IData)(vlSelf->top__DOT__imem_respstream_val) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[2487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go;
    }
    vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next 
        = vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg;
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__istream_go) {
            vlSymsp->__Vcoverage[2489].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if ((0U == vlSelf->top__DOT__DUT__DOT__mul__DOT__dpath__DOT__b_reg_out)) {
            vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_reg))) {
        if (vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__ostream_go) {
            vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next = 0U;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                           & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                          & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))))) {
                vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
            }
            vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay));
        } else {
            vlSelf->top__DOT__src__DOT__src_rdy = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__src_rdy = ((IData)(vlSelf->top__DOT__mngr2proc_rdy) 
                                               & (0U 
                                                  == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_rdy) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_rdy 
            = vlSelf->top__DOT__src__DOT__src_rdy;
    }
    vlSelf->top__DOT__src__DOT__src__DOT__index_en 
        = ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
           & (IData)(vlSelf->top__DOT__src__DOT__src_rdy));
    if ((1U & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                      & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))))) {
            vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__zero_cycle_delay 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay;
    }
    if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        if (vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en 
                = (0U < vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay);
            if ((((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                  & (IData)(vlSelf->top__DOT__mngr2proc_rdy)) 
                 & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay))) {
                vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
            }
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    } else {
        vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 0U;
        if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
             & (~ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__zero_cycle_delay)))) {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 1U;
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next = 1U;
        } else {
            vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_val 
            = vlSelf->top__DOT__dmem_reqstream_val;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_M0)) 
           & (IData)(vlSelf->top__DOT__dmem_reqstream_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_D 
            = vlSelf->top__DOT__DUT__DOT__reg_en_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_D 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_D;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_val 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_val)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[2482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[2483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__mul__DOT__ctrl__DOT__state_next)));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__index_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__index_en 
            = vlSelf->top__DOT__src__DOT__src__DOT__index_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__rand_delay_en 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay_en;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__msg_delay__DOT____Vtogcov__state_next 
            = vlSelf->top__DOT__src__DOT__msg_delay__DOT__state_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__ostall_Y)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__ostall_Y 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    }
    vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_Y 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                 | (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__ostall_M0)));
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_F) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h3c243d67__0)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_Y) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__reg_en_M0)))) {
        vlSymsp->__Vcoverage[5356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT____Vtogcov__reg_en_M0 
            = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_Y)));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_Y) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__stall_Y))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT____Vtogcov__stall_Y 
            = vlSelf->top__DOT__cache__DOT__dcache__DOT__ctrlunit__DOT__stall_Y;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_F) 
           & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
              & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F))));
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__write_en) 
              | (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_F 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_F;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_respstream_drop_rdy 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy;
    }
    vlSelf->top__DOT__imem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) 
                                             | (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val 
        = ((~ (IData)(vlSelf->top__DOT__reset)) & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_rdy 
            = vlSelf->top__DOT__imem_respstream_rdy;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_notrdy)))) {
        vlSymsp->__Vcoverage[5342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_notrdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__imem_respstream_rdy)));
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__imem_respstream_rdy) 
           & (IData)(vlSelf->top__DOT__imem_respstream_val));
    vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_M0 
        = ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__val_M0) 
           & ((~ (IData)(vlSelf->top__DOT__imem_respstream_rdy)) 
              | (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_miss)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_reqstream_enq_val 
            = vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val));
    vlSelf->top__DOT__imem_reqstream_val = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)) 
                                                  | ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
                                                     & (IData)(vlSelf->top__DOT__DUT__DOT__imem_reqstream_enq_val))));
    if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state) {
        if (vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) {
            vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 1U;
        } else {
            vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state = 0U;
        }
    } else {
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state 
            = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                     & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go))));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__state)))) {
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
             & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__squash_F) 
                      & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go)))))) {
            vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__istream_go;
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_M0) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_M0))) {
        vlSymsp->__Vcoverage[5343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_M0 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_M0;
    }
    vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0 
        = ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__val_M0) 
           & (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_M0));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_val 
            = vlSelf->top__DOT__imem_reqstream_val;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT____Vtogcov__next_state 
            = vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_unit__DOT__next_state;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy)))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0)));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__stall_M0))) {
        vlSymsp->__Vcoverage[5344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__stall_M0 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_M0)) 
           & (IData)(vlSelf->top__DOT__imem_reqstream_val));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_deq 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_Y)))) {
        vlSymsp->__Vcoverage[5279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__ostall_Y 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
            & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
               & ((1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))) 
                  == (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))) 
           | ((~ ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full))) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
                 | (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__ostall_M0)));
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
           & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__full_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y) 
               ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__reg_en_M0)))) {
        vlSymsp->__Vcoverage[4105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT____Vtogcov__reg_en_M0 
            = (1U & (~ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y)));
    }
    if (((IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y) 
         ^ (IData)(vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__stall_Y))) {
        vlSymsp->__Vcoverage[5280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT____Vtogcov__stall_Y 
            = vlSelf->top__DOT__cache__DOT__icache__DOT__ctrl__DOT__stall_Y;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
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
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__deq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__write_en 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__write_en)
                  ? ((IData)(1U) + (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr)));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__enq_ptr_next 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_reg__DOT____Vtogcov__d 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
    }
}
